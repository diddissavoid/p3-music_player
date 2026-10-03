#include "Songs.h"

// 1. Beethoven - Fur Elise
const uint16_t PROGMEM fur_elise_notes[] = {NOTE_E5, NOTE_DS5, NOTE_E5, NOTE_DS5, NOTE_E5, NOTE_B4, NOTE_D5, NOTE_C5, NOTE_A4, REST, NOTE_C4, NOTE_E4, NOTE_A4, NOTE_B4, REST, NOTE_E4, NOTE_GS4, NOTE_B4, NOTE_C5, REST, NOTE_E4, NOTE_E5, NOTE_DS5, NOTE_E5, NOTE_DS5, NOTE_E5, NOTE_B4, NOTE_D5, NOTE_C5, NOTE_A4, REST, NOTE_C4, NOTE_E4, NOTE_A4, NOTE_B4, REST, NOTE_E4, NOTE_C5, NOTE_B4, NOTE_A4, REST};
const uint16_t PROGMEM fur_elise_durations[] = {200, 200, 200, 200, 200, 200, 200, 200, 400, 200, 200, 200, 200, 400, 200, 200, 200, 200, 400, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 400, 200, 200, 200, 200, 400, 200, 200, 200, 200, 800, 400};

// 2. Star Wars - Imperial March
const uint16_t PROGMEM starwars_notes[] = {NOTE_A4, NOTE_A4, NOTE_A4, NOTE_F4, NOTE_C5, NOTE_A4, NOTE_F4, NOTE_C5, NOTE_A4, REST, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_F5, NOTE_C5, NOTE_GS4, NOTE_F4, NOTE_C5, NOTE_A4, REST};
const uint16_t PROGMEM starwars_durations[] = {400, 400, 400, 250, 150, 400, 250, 150, 800, 400, 400, 400, 400, 250, 150, 400, 250, 150, 800, 400};

// 3. Super Mario Bros
const uint16_t PROGMEM mario_notes[] = {NOTE_E5, NOTE_E5, REST, NOTE_E5, REST, NOTE_C5, NOTE_E5, REST, NOTE_G5, REST, NOTE_G4, REST, NOTE_C5, NOTE_G4, REST, NOTE_E4, NOTE_A4, NOTE_B4, NOTE_AS4, NOTE_A4, NOTE_G4, NOTE_E5, NOTE_G5, NOTE_A5, NOTE_F5, NOTE_G5, NOTE_E5, NOTE_C5, NOTE_D5, NOTE_B4};
const uint16_t PROGMEM mario_durations[] = {150, 150, 150, 150, 150, 150, 150, 150, 300, 300, 300, 300, 300, 150, 300, 300, 150, 150, 150, 150, 200, 200, 200, 300, 150, 150, 300, 150, 150, 300};

// 4. Harry Potter
const uint16_t PROGMEM potter_notes[] = {NOTE_B4, NOTE_E5, NOTE_G5, NOTE_FS5, NOTE_E5, NOTE_B5, NOTE_A5, NOTE_FS5, REST, NOTE_E5, NOTE_G5, NOTE_FS5, NOTE_DS5, NOTE_F5, NOTE_B4, REST};
const uint16_t PROGMEM potter_durations[] = {400, 600, 200, 400, 800, 400, 1200, 800, 400, 600, 200, 400, 800, 400, 1200, 400};

// 5. Ode to Joy
const uint16_t PROGMEM ode_notes[] = {NOTE_E4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, REST, NOTE_E4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_C4, REST};
const uint16_t PROGMEM ode_durations[] = {300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 450, 150, 600, 200, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 450, 150, 600, 200};

// 6. Game of Thrones Theme (Corrected)
const uint16_t PROGMEM got_notes[] = {NOTE_G5, NOTE_C5, NOTE_DS5, NOTE_F5, NOTE_G5, NOTE_C5, NOTE_DS5, NOTE_F5, NOTE_D5, NOTE_F5, NOTE_AS4, NOTE_DS5, NOTE_D5, NOTE_F5, NOTE_AS4, NOTE_DS5, NOTE_D5, NOTE_C5};
const uint16_t PROGMEM got_durations[] = {400, 400, 200, 200, 400, 400, 200, 200, 800, 400, 400, 200, 200, 400, 400, 200, 200, 800};

// 7. ATC - Around The World (Extended)
const uint16_t PROGMEM atc_notes[] = {NOTE_A4, NOTE_A4, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_B4, NOTE_G4, NOTE_A4, REST, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_B4, NOTE_G4, NOTE_A4};
const uint16_t PROGMEM atc_durations[] = {200, 200, 200, 200, 400, 200, 200, 200, 200, 400, 200, 200, 200, 200, 200, 400, 200, 200, 200, 200, 400};

// 8. Khaled - Didi (Extended)
const uint16_t PROGMEM didi_notes[] = {NOTE_D5, NOTE_C5, NOTE_AS4, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_AS4, NOTE_A4, REST, NOTE_D5, NOTE_C5, NOTE_AS4, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_AS4, NOTE_A4};
const uint16_t PROGMEM didi_durations[] = {200, 200, 200, 200, 400, 200, 200, 400, 400, 200, 200, 200, 200, 400, 200, 200, 400};

// 9. Michael Jackson - Billie Jean (Extended)
const uint16_t PROGMEM billie_notes[] = {NOTE_FS5, NOTE_CS5, NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_CS5, NOTE_B4, NOTE_CS5, NOTE_FS5, NOTE_CS5, NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_CS5, NOTE_B4, NOTE_CS5};
const uint16_t PROGMEM billie_durations[] = {250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250};

// 10. Mission Impossible (Extended)
const uint16_t PROGMEM mi_notes[] = {NOTE_G4, NOTE_G4, NOTE_AS4, NOTE_C5, NOTE_G4, NOTE_G4, NOTE_F4, NOTE_FS4, NOTE_G4, NOTE_G4, NOTE_AS4, NOTE_C5, NOTE_G4, NOTE_G4, NOTE_F4, NOTE_FS4, NOTE_AS4, NOTE_G4, NOTE_D5, REST, NOTE_AS4, NOTE_G4, NOTE_CS5, REST, NOTE_AS4, NOTE_G4, NOTE_C5, NOTE_AS4, NOTE_C5};
const uint16_t PROGMEM mi_durations[] = {300, 300, 150, 150, 300, 300, 150, 150, 300, 300, 150, 150, 300, 300, 150, 150, 300, 300, 600, 300, 300, 300, 600, 300, 300, 300, 600, 150, 150};

// 11. Pirates of the Caribbean (Extended)
const uint16_t PROGMEM pirates_notes[] = {NOTE_A4, NOTE_C5, NOTE_D5, NOTE_D5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_F5, NOTE_F5, NOTE_G5, NOTE_E5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_D5, REST, NOTE_A4, NOTE_C5, NOTE_D5, NOTE_D5, NOTE_D5, NOTE_F5, NOTE_G5, NOTE_G5, NOTE_G5, NOTE_A5, NOTE_AS5, NOTE_AS5, NOTE_A5, NOTE_G5, NOTE_A5, NOTE_D5};
const uint16_t PROGMEM pirates_durations[] = {150, 150, 300, 150, 150, 150, 300, 150, 150, 150, 300, 150, 150, 150, 450, 150, 150, 150, 300, 150, 150, 150, 300, 150, 150, 150, 300, 150, 150, 150, 300, 450};

// 12. Take On Me (Extended)
const uint16_t PROGMEM takeonme_notes[] = {NOTE_FS5, NOTE_FS5, NOTE_E5, NOTE_D5, NOTE_CS5, NOTE_A4, NOTE_A4, NOTE_CS5, NOTE_E5, NOTE_E5, NOTE_FS5, NOTE_GS5, NOTE_GS5, NOTE_A5, NOTE_B5, NOTE_A5, REST, NOTE_FS5, NOTE_FS5, NOTE_E5, NOTE_D5, NOTE_CS5, NOTE_A4, NOTE_A4, NOTE_CS5, NOTE_E5, NOTE_E5, NOTE_FS5, NOTE_GS5, NOTE_GS5, NOTE_A5, NOTE_B5, NOTE_A5};
const uint16_t PROGMEM takeonme_durations[] = {150, 150, 150, 150, 300, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 400, 200, 150, 150, 150, 150, 300, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 400};

// 13. Seven Nation Army (Extended)
const uint16_t PROGMEM seven_notes[] = {NOTE_E5, NOTE_E5, NOTE_G5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_B4, REST, NOTE_E5, NOTE_E5, NOTE_G5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_D5, NOTE_C5, NOTE_B4};
const uint16_t PROGMEM seven_durations[] = {400, 200, 200, 200, 200, 400, 400, 400, 400, 200, 200, 200, 200, 200, 200, 200, 400};


// Game of Thrones - Full Length Main Melody
const uint16_t PROGMEM got_full_notes[] = {
 
  NOTE_G4, NOTE_C4, NOTE_DS4, NOTE_F4, 
  NOTE_G4, NOTE_C4, NOTE_DS4, NOTE_F4,
  NOTE_D4, REST, 
  NOTE_F4, NOTE_AS3, NOTE_DS4, NOTE_D4, 
  NOTE_F4, NOTE_AS3, NOTE_DS4, NOTE_D4,
  NOTE_C4, REST,

  
  NOTE_G4, NOTE_C4, NOTE_DS4, NOTE_F4, 
  NOTE_G4, NOTE_C4, NOTE_DS4, NOTE_F4,
  NOTE_D4, REST, 
  NOTE_F4, NOTE_AS3, NOTE_DS4, NOTE_D4, 
  NOTE_F4, NOTE_AS3, NOTE_DS4, NOTE_D4,
  NOTE_C4, REST,


  NOTE_G5, NOTE_C5, NOTE_DS5, NOTE_F5, 
  NOTE_G5, NOTE_C5, NOTE_DS5, NOTE_F5,
  NOTE_D5, REST, 
  NOTE_F5, NOTE_AS4, NOTE_DS5, NOTE_D5, 
  NOTE_F5, NOTE_AS4, NOTE_DS5, NOTE_D5,
  NOTE_C5, REST,

  
  NOTE_G4, NOTE_C4, NOTE_DS4, NOTE_F4,
  NOTE_D4, REST,
  NOTE_C4, REST
};

const uint16_t PROGMEM got_full_durations[] = {
  
  400, 400, 200, 200, 
  400, 400, 200, 200,
  800, 200,
  400, 400, 200, 200, 
  400, 400, 200, 200,
  800, 400,

 
  400, 400, 200, 200, 
  400, 400, 200, 200,
  800, 200,
  400, 400, 200, 200, 
  400, 400, 200, 200,
  800, 400,

  
  400, 400, 200, 200, 
  400, 400, 200, 200,
  800, 200,
  400, 400, 200, 200, 
  400, 400, 200, 200,
  800, 400,


  600, 600, 300, 300,
  1200, 400,
  1600, 800
};
  

// --- Playlist Array Initialization ---
Song playlist[] = {
  {"1. Beethoven - Fur Elise", fur_elise_notes, fur_elise_durations, 41},
  {"2. Star Wars - Imperial March", starwars_notes, starwars_durations, 20},
  {"3. Super Mario Bros", mario_notes, mario_durations, 30},
  {"4. Harry Potter - Hedwig's Theme", potter_notes, potter_durations, 16},
  {"5. Beethoven - Ode to Joy", ode_notes, ode_durations, 32},
  {"6. Game of Thrones Theme", got_notes, got_durations, 18},
  {"7. ATC - Around The World", atc_notes, atc_durations, 21},
  {"8. Khaled - Didi", didi_notes, didi_durations, 17},
  {"9. Michael Jackson - Billie Jean", billie_notes, billie_durations, 16},
  {"10. Mission Impossible Theme", mi_notes, mi_durations, 29},
  {"11. Pirates of the Caribbean", pirates_notes, pirates_durations, 32},
  {"12. A-ha - Take On Me", takeonme_notes, takeonme_durations, 33},
  {"13. Seven Nation Army", seven_notes, seven_durations, 17}
  {"14. Game of Thrones - Full Theme", got_full_notes, got_full_durations, 66}
};

const int NUM_SONGS = sizeof(playlist) / sizeof(playlist[0]);