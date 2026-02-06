#ifndef STARTUP_SONGS_H
#define STARTUP_SONGS_H
#include <stdint.h>

#define REST 0

#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 830
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_F6   1397  
#define NOTE_FS6  1480  
#define NOTE_G6   1568  
#define NOTE_CS6  1109  
#define NOTE_DS6  1245  


extern const uint16_t GameOfThrones[];
extern const uint16_t GameOfThronesDurations[];
extern const uint32_t GameOfThronesSize;

extern const uint16_t HarryPotter[];
extern const uint16_t HarryPotterDurations[];
extern const uint32_t HarryPotterSize;

extern const uint16_t StarWars[];
extern const uint16_t StarWarsDurations[];
extern const uint32_t StarWarsSize;

extern const uint16_t Nokia[];
extern const uint16_t NokiaDurations[];
extern const uint32_t NokiaSize;

void playNote(uint16_t frequency, uint16_t duration_ms);
void PlayGameOfThrones(void);
void PlayHarryPotter(void);
void PlayStarWars(void);
void PlayNokia(void);

#endif