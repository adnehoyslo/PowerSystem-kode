#include "startup_songs.h"
#include "main.h"
#include "tim.h"
   
/* =======================
   GAME OF THRONES MELODY
   ======================= */
const uint16_t GameOfThrones[] = {
  NOTE_G4, NOTE_C4, NOTE_DS4, NOTE_F4, NOTE_G4, NOTE_C4, NOTE_DS4, NOTE_F4,
  NOTE_G4, NOTE_C4, NOTE_DS4, NOTE_F4, NOTE_G4, NOTE_C4, NOTE_DS4, NOTE_F4,
  NOTE_G4, NOTE_C4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_C4, NOTE_E4, NOTE_F4,
  NOTE_G4, NOTE_C4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_C4, NOTE_E4, NOTE_F4,
  NOTE_G4, NOTE_C4,

  NOTE_DS4, NOTE_F4, NOTE_G4, NOTE_C4, NOTE_DS4, NOTE_F4,
  NOTE_D4,
  NOTE_F4, NOTE_AS3,
  NOTE_DS4, NOTE_D4, NOTE_F4, NOTE_AS3,
  NOTE_DS4, NOTE_D4, NOTE_C4,

  NOTE_G4, NOTE_C4,

  NOTE_DS4, NOTE_F4, NOTE_G4, NOTE_C4, NOTE_DS4, NOTE_F4,
  NOTE_D4,
  NOTE_F4, NOTE_AS3,
  NOTE_DS4, NOTE_D4, NOTE_F4, NOTE_AS3,
  NOTE_DS4, NOTE_D4, NOTE_C4,
  NOTE_G4, NOTE_C4,
  NOTE_DS4, NOTE_F4, NOTE_G4, NOTE_C4, NOTE_DS4, NOTE_F4,

  NOTE_D4,
  NOTE_F4, NOTE_AS3,
  NOTE_D4, NOTE_DS4, NOTE_D4, NOTE_AS3,
  NOTE_C4,
  NOTE_C5,
  NOTE_AS4,
  NOTE_C4,
  NOTE_G4,
  NOTE_DS4,
  NOTE_DS4, NOTE_F4,
  NOTE_G4,

  NOTE_C5,
  NOTE_AS4,
  NOTE_C4,
  NOTE_G4,
  NOTE_DS4,
  NOTE_DS4, NOTE_D4,
  NOTE_C5, NOTE_G4, NOTE_GS4, NOTE_AS4, NOTE_C5, NOTE_G4, NOTE_GS4, NOTE_AS4,
  NOTE_C5, NOTE_G4, NOTE_GS4, NOTE_AS4, NOTE_C5, NOTE_G4, NOTE_GS4, NOTE_AS4,

  REST, NOTE_GS5, NOTE_AS5, NOTE_C6, NOTE_G5, NOTE_GS5, NOTE_AS5,
  NOTE_C6, NOTE_G5, NOTE_GS5, NOTE_AS5, NOTE_C6, NOTE_G5, NOTE_GS5, NOTE_AS5
};
const uint16_t GameOfThronesDurations[] = {
  8,8,16,16,8,8,16,16,
  8,8,16,16,8,8,16,16,
  8,8,16,16,8,8,16,16,
  8,8,16,16,8,8,16,16,
  4,4,

  16,16,4,4,16,16,
  1,
  4,4,
  16,16,4,4,
  16,16,1,

  4,4,

  16,16,4,4,16,16,
  1,
  4,4,
  16,16,4,4,
  16,16,1,
  4,4,
  16,16,4,4,16,16,

  2,
  4,4,
  8,8,8,8,
  1,
  2,2,2,2,2,
  4,4,
  1,

  2,2,2,2,2,
  4,4,
  8,8,16,16,8,8,16,16,
  8,8,16,16,8,8,16,16,

  4,16,16,8,8,16,16,
  8,16,16,16,8,8,16,16
};
const uint32_t GameOfThronesSize = sizeof(GameOfThrones) / sizeof(GameOfThrones[0]);


/* =======================
   HARRY POTTER MELODY
   ======================= */
const uint16_t HarryPotter[] = {
  REST, NOTE_D4,
  NOTE_G4, NOTE_AS4, NOTE_A4,
  NOTE_G4, NOTE_D5,
  NOTE_C5, 
  NOTE_A4,
  NOTE_G4, NOTE_AS4, NOTE_A4,
  NOTE_F4, NOTE_GS4,
  NOTE_D4, 
  NOTE_D4,
  
  NOTE_G4, NOTE_AS4, NOTE_A4,
  NOTE_G4, NOTE_D5,
  NOTE_F5, NOTE_E5,
  NOTE_DS5, NOTE_B4,
  NOTE_DS5, NOTE_D5, NOTE_CS5,
  NOTE_CS4, NOTE_B4,
  NOTE_G4,
  NOTE_AS4,
   
  NOTE_D5, NOTE_AS4,
  NOTE_D5, NOTE_AS4,
  NOTE_DS5, NOTE_D5,
  NOTE_CS5, NOTE_A4,
  NOTE_AS4, NOTE_D5, NOTE_CS5,
  NOTE_CS4, NOTE_D4,
  NOTE_D5, 
  REST, NOTE_AS4,  
  
  NOTE_D5, NOTE_AS4,
  NOTE_D5, NOTE_AS4,
  NOTE_F5, NOTE_E5,
  NOTE_DS5, NOTE_B4,
  NOTE_DS5, NOTE_D5, NOTE_CS5,
  NOTE_CS4, NOTE_AS4,
  NOTE_G4
};
const uint16_t HarryPotterDurations[] = {
  2, 4,
  4, 8, 4,
  2, 4,
  2, 
  2,
  4, 8, 4,
  2, 4,
  1, 
  4,
  
  4, 8, 4,
  2, 4,
  2, 4,
  2, 4,
  4, 8, 4,
  2, 4,
  1,
  4,
   
  2, 4,
  2, 4,
  2, 4,
  2, 4,
  4, 8, 4,
  2, 4,
  1, 
  4, 4,  
  
  2, 4,
  2, 4,
  2, 4,
  2, 4,
  4, 8, 4,
  2, 4,
  1
};
const uint32_t HarryPotterSize = sizeof(HarryPotter) / sizeof(HarryPotter[0]);


/* =======================
   STAR WARS MELODY 
   ======================= */
const uint16_t StarWars[] = {
  NOTE_AS4, NOTE_AS4, NOTE_AS4,
  NOTE_F5, NOTE_C6,
  NOTE_AS5, NOTE_A5, NOTE_G5, NOTE_F6, NOTE_C6,
  NOTE_AS5, NOTE_A5, NOTE_G5, NOTE_F6, NOTE_C6,
  NOTE_AS5, NOTE_A5, NOTE_AS5, NOTE_G5, NOTE_C5, NOTE_C5, NOTE_C5,
  NOTE_F5, NOTE_C6,
  NOTE_AS5, NOTE_A5, NOTE_G5, NOTE_F6, NOTE_C6,

  NOTE_AS5, NOTE_A5, NOTE_G5, NOTE_F6, NOTE_C6,
  NOTE_AS5, NOTE_A5, NOTE_AS5, NOTE_G5, NOTE_C5, NOTE_C5,
  NOTE_D5, NOTE_D5, NOTE_AS5, NOTE_A5, NOTE_G5, NOTE_F5,
  NOTE_F5, NOTE_G5, NOTE_A5, NOTE_G5, NOTE_D5, NOTE_E5, NOTE_C5, NOTE_C5,
  NOTE_D5, NOTE_D5, NOTE_AS5, NOTE_A5, NOTE_G5, NOTE_F5,

  NOTE_C6, NOTE_G5, NOTE_G5, REST, NOTE_C5,
  NOTE_D5, NOTE_D5, NOTE_AS5, NOTE_A5, NOTE_G5, NOTE_F5,
  NOTE_F5, NOTE_G5, NOTE_A5, NOTE_G5, NOTE_D5, NOTE_E5, NOTE_C6, NOTE_C6,
  NOTE_F6, NOTE_DS6, NOTE_CS6, NOTE_C6, NOTE_AS5, NOTE_GS5, NOTE_G5, NOTE_F5,
  NOTE_C6
};
const uint16_t StarWarsDurations[] = {
  8, 8, 8,
  2, 2,
  8, 8, 8, 2, 4,
  8, 8, 8, 2, 4,
  8, 8, 8, 2, 8, 8, 8,
  2, 2,
  8, 8, 8, 2, 4,

  8, 8, 8, 2, 4,
  8, 8, 8, 2, 8, 16,
  4, 8, 8, 8, 8, 8,
  8, 8, 8, 4, 8, 4, 8, 16,
  4, 8, 8, 8, 8, 8,

  8, 16, 2, 8, 8,
  4, 8, 8, 8, 8, 8,
  8, 8, 8, 4, 8, 4, 8, 16,
  4, 8, 4, 8, 4, 8, 4, 8,
  1
};
const uint32_t StarWarsSize = sizeof(StarWars) / sizeof(StarWars[0]);

/* =======================
   NOKIA RINGTONE
   ======================= */
const uint16_t Nokia[] = {
  NOTE_E5, NOTE_D5, NOTE_FS4, NOTE_GS4, 
  NOTE_CS5, NOTE_B4, NOTE_D4, NOTE_E4, 
  NOTE_B4, NOTE_A4, NOTE_CS4, NOTE_E4,
  NOTE_A4
};
const uint16_t NokiaDurations[] = {
  11, 11, 7, 7,
  11, 11, 7, 7,
  11, 11, 7, 7,
  4
};
const uint32_t NokiaSize = sizeof(Nokia) / sizeof(Nokia[0]);

/* =======================
   PWM NOTE PLAYER
   ======================= */
#define TEMPO 200

void playNote(uint16_t frequency, uint16_t duration_ms)
{
    if (frequency == REST)
    {
        HAL_TIM_PWM_Stop(&htim3, TIM_CHANNEL_2);
        HAL_Delay(duration_ms);
        return;
    }

    uint32_t timer_clk = 16000000UL;
    uint32_t tick = timer_clk / (htim3.Init.Prescaler + 1); // 200 kHz
    uint32_t period = tick / frequency;

    __HAL_TIM_SET_AUTORELOAD(&htim3, period);
    __HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_2, period / 4); // ~25% duty
    __HAL_TIM_SET_COUNTER(&htim3, 0);

    HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_2);
    HAL_Delay(duration_ms);
    HAL_TIM_PWM_Stop(&htim3, TIM_CHANNEL_2);
}

/* =======================
   SONG PLAYER
   ======================= */

void PlayGameOfThrones(void){
    for (uint32_t i = 0; i < GameOfThronesSize; i++)
    {
        uint32_t whole_note_ms = (60000UL * 4) / TEMPO;  // lengde på helnote i ms
        uint32_t duration = whole_note_ms / GameOfThronesDurations[i];
        playNote(GameOfThrones[i], duration);

        HAL_Delay(duration * 0.3); // pause mellom noter
    }
}
void PlayHarryPotter(void){
    for (uint32_t i = 0; i < HarryPotterSize; i++)
    {
        uint32_t whole_note_ms = (60000UL * 4) / TEMPO;  // lengde på helnote i ms
        uint32_t duration = whole_note_ms / HarryPotterDurations[i];
        playNote(HarryPotter[i], duration);

        HAL_Delay(duration * 0.3); // pause mellom noter
    }
}
void PlayStarWars(void){
    for (uint32_t i = 0; i < StarWarsSize; i++)
    {
        uint32_t whole_note_ms = (60000UL * 4) / TEMPO;  // lengde på helnote i ms
        uint32_t duration = whole_note_ms / StarWarsDurations[i];
        playNote(StarWars[i], duration);

        HAL_Delay(duration * 0.3); // pause mellom noter
    }
}
void PlayNokia(void){
    for (uint32_t i = 0; i < NokiaSize; i++)
    {
        uint32_t whole_note_ms = (60000UL * 4) / TEMPO;  // lengde på helnote i ms
        uint32_t duration = whole_note_ms / NokiaDurations[i];
        playNote(Nokia[i], duration);

        HAL_Delay(duration * 0.3); // pause mellom noter
    }
}