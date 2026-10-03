#include "Songs.h"

// --- Pin Definitions ---
const int IR_PIN = 2;
const int BUZZER_PIN = 3;
const int LED_C = 4, LED_D = 5, LED_E = 6, LED_F = 7, LED_G = 8, LED_A = 9, LED_B = 10;

// --- System States ---
enum SystemState {
  WAITING_FOR_SERIAL, 
  READY_TO_PLAY,      
  PLAYING_MUSIC       
};
SystemState currentState = WAITING_FOR_SERIAL;

// --- Variables ---
bool lastIrState = HIGH; 
unsigned long irDetectStartTime = 0;
bool isHandPresent = false;
bool actionTriggered = false; 

unsigned long previousMillis = 0;
int noteDuration = 0;
bool isPauseBetweenNotes = false; 
int currentSongIndex = 0;
int currentNoteIndex = 0;

void setup() {
  Serial.begin(9600);
  pinMode(IR_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  
  for (int pin = 4; pin <= 10; pin++) {
    pinMode(pin, OUTPUT);
  }

  Serial.println("=========================================");
  Serial.println(" System Initialized (Modular OOP Code)");
  Serial.println(" Type 'start' to begin.");
  Serial.println(" Type 'end' anytime to stop the music.");
  Serial.println(" Type '1' to '13' to skip songs.");
  Serial.println("=========================================");
}

void loop() {
  handleSerialCommand();
  handleIRSensor();
  playMusicRoutine();
}

void handleSerialCommand() {
  if (Serial.available() > 0) {
    String cmd = Serial.readStringUntil('\n');
    cmd.trim();
    cmd.toLowerCase(); 
    
    if (cmd == "start" && currentState == WAITING_FOR_SERIAL) {
      currentState = READY_TO_PLAY;
      Serial.println("\nSystem Started! Hold hand for >3s to play.");
    }
    else if (cmd == "end" && currentState != WAITING_FOR_SERIAL) {
      Serial.println("\nManual 'end' command received! Stopping music...");
      resetSystem();
    }
    else if (currentState == PLAYING_MUSIC) {
      int songNumber = cmd.toInt(); 
      if (songNumber > 0 && songNumber <= NUM_SONGS) {
        Serial.print("\nSkipping to song: ");
        startSong(songNumber - 1); 
      }
    }
  }
}

void handleIRSensor() {
  bool currentIrState = digitalRead(IR_PIN); 

  if (currentIrState == LOW && lastIrState == HIGH) {
    irDetectStartTime = millis();
    isHandPresent = true;
    actionTriggered = false;
  }
  else if (currentIrState == HIGH && lastIrState == LOW) {
    isHandPresent = false;
    unsigned long duration = millis() - irDetectStartTime;
    
    if (!actionTriggered && duration > 50 && duration < 1000) { 
      if (currentState == PLAYING_MUSIC) {
        Serial.println("\nShort wave detected: Next Song");
        nextSong();
      }
    }
  }

  if (isHandPresent && (millis() - irDetectStartTime >= 3000)) {
    if (!actionTriggered) {
      if (currentState == READY_TO_PLAY) {
        currentState = PLAYING_MUSIC;
        startSong(0); 
      } 
      else if (currentState == PLAYING_MUSIC) {
        Serial.println("\nLong press detected: Stopping Music...");
        resetSystem(); 
      }
      actionTriggered = true; 
    }
  }

  lastIrState = currentIrState;
}

void playMusicRoutine() {
  if (currentState != PLAYING_MUSIC) return;

  unsigned long currentMillis = millis();
  
  if (currentMillis - previousMillis >= noteDuration) {
    previousMillis = currentMillis;

    if (!isPauseBetweenNotes) {
      noTone(BUZZER_PIN);
      turnOffAllLEDs();
      isPauseBetweenNotes = true;
      noteDuration = 30; // Pause between notes
    } else {
      currentNoteIndex++;
      
      // Checking length directly from the Object
      if (currentNoteIndex >= playlist[currentSongIndex].length) {
        currentNoteIndex = 0; 
      }
      playCurrentNote();
    }
  }
}

void startSong(int index) {
  currentSongIndex = index;
  currentNoteIndex = 0;
  isPauseBetweenNotes = true; 
  noteDuration = 0; 
  
  Serial.print("Now Playing: ");
  Serial.println(playlist[currentSongIndex].name);
}

void nextSong() {
  int nextIndex = (currentSongIndex + 1) % NUM_SONGS;
  startSong(nextIndex); 
}

void playCurrentNote() {
  // Reading from PROGMEM using the pointers in our Object
  int freq = pgm_read_word_near(playlist[currentSongIndex].notesArray + currentNoteIndex);
  int dur  = pgm_read_word_near(playlist[currentSongIndex].durationsArray + currentNoteIndex);

  isPauseBetweenNotes = false;
  noteDuration = dur;

  if (freq == REST) {
    noTone(BUZZER_PIN);
    turnOffAllLEDs();
  } else {
    tone(BUZZER_PIN, freq);
    lightLEDs(freq);
  }
}

void resetSystem() {
  noTone(BUZZER_PIN);
  turnOffAllLEDs();
  currentState = WAITING_FOR_SERIAL;
  isHandPresent = false;
  Serial.println("System Reset. Type 'start' to begin again.");
}

void turnOffAllLEDs() {
  for (int pin = 4; pin <= 10; pin++) {
    digitalWrite(pin, LOW);
  }
}

void lightLEDs(int freq) {
  turnOffAllLEDs();
  
  switch(freq) {
    case NOTE_C4: case NOTE_C5:  
      digitalWrite(LED_C, HIGH); break;
    case NOTE_CS4: case NOTE_CS5: 
      digitalWrite(LED_C, HIGH); digitalWrite(LED_D, HIGH); break;
    case NOTE_D4: case NOTE_D5:  
      digitalWrite(LED_D, HIGH); break;
    case NOTE_DS4: case NOTE_DS5: 
      digitalWrite(LED_D, HIGH); digitalWrite(LED_E, HIGH); break;
    case NOTE_E4: case NOTE_E5:  
      digitalWrite(LED_E, HIGH); break;
    case NOTE_F4: case NOTE_F5:  
      digitalWrite(LED_F, HIGH); break;
    case NOTE_FS4: case NOTE_FS5: 
      digitalWrite(LED_F, HIGH); digitalWrite(LED_G, HIGH); break;
    case NOTE_G4: case NOTE_G5:  
      digitalWrite(LED_G, HIGH); break;
    case NOTE_GS4: case NOTE_GS5:
      digitalWrite(LED_G, HIGH); digitalWrite(LED_A, HIGH); break;
    case NOTE_A4: case NOTE_A5:  
      digitalWrite(LED_A, HIGH); break;
    case NOTE_AS4: case NOTE_AS5:
      digitalWrite(LED_A, HIGH); digitalWrite(LED_B, HIGH); break;
    case NOTE_B4: case NOTE_B5: 
      digitalWrite(LED_B, HIGH); break;
  }
}