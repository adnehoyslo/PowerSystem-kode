#ifndef CHARGER_H
#define CHARGER_H
#include <stdint.h>

#define BQ_ADDR      (0x6B << 1)   // 7-bit adresse til HAL
#define REG_ADC_CTRL 0x2B

#define REG_VBAT_L   0x33          // VBAT ADC LSB
#define REG_VBAT_H   0x34          // VBAT ADC MSB

#define REG_VSYS_L   0x35          // VSYS ADC LSB
#define REG_VSYS_H   0x36          // VSYS ADC MSB

#define REG_VAC_L    0x31          // VAC ADC LSB
#define REG_VAC_H    0x32          // VAC ADC MSB

#define REG_VFB_L    0x39          // VFB ADC LSB
#define REG_VFB_H    0x3A          // VFB ADC MSB

#define REG_IBAT_L   0x2F          // IBAT ADC LSB
#define REG_IBAT_H   0x30          // IBAT ADC MSB

#define REG_IAC_L    0x2D          // IAC ADC LSB
#define REG_IAC_H    0x2E          // IAC ADC MSB

extern void BQ_Enable_ADC(void);
extern uint16_t BQ_Read_VBAT(void);
extern uint16_t BQ_Read_VFB(void);
extern uint16_t BQ_Read_VSYS(void);
extern uint16_t BQ_Read_VAC(void);
extern int16_t BQ_Read_IBAT(void);
extern int16_t BQ_Read_IAC(void);


#endif