#include "charger.h"
#include "main.h"
#include "i2c.h"

void BQ_Enable_ADC(void){
    uint8_t adc_ctrl;
    if(HAL_I2C_Mem_Read(&hi2c1, BQ_ADDR, REG_ADC_CTRL,
                         I2C_MEMADD_SIZE_8BIT, &adc_ctrl, 1, HAL_MAX_DELAY) == HAL_OK)
    {
        adc_ctrl |= (1 << 7); 
        // Sett ADC ON, endrer bit 7 
        HAL_I2C_Mem_Write(&hi2c1, BQ_ADDR, REG_ADC_CTRL,
                           I2C_MEMADD_SIZE_8BIT, &adc_ctrl, 1, HAL_MAX_DELAY);
    }
}

uint16_t BQ_Read_VBAT(void){
    uint8_t lsb, msb;
    uint16_t raw;

    // Les LSB og MSB
    if(HAL_I2C_Mem_Read(&hi2c1, BQ_ADDR, REG_VBAT_L,
                         I2C_MEMADD_SIZE_8BIT, &lsb, 1, HAL_MAX_DELAY) != HAL_OK)
        return 0; // feilet

    if(HAL_I2C_Mem_Read(&hi2c1, BQ_ADDR, REG_VBAT_H,
                         I2C_MEMADD_SIZE_8BIT, &msb, 1, HAL_MAX_DELAY) != HAL_OK)
        return 0; // feilet

    
    raw = ((uint16_t)msb << 8) | lsb; // Kombiner MSB og LSB til 16-bit verdi

    return (raw * 2 + 216); // Konverter til mV (bit-step = 2mV) + offset 216mV
}
uint16_t BQ_Read_VFB(void){
    uint8_t lsb, msb;
    uint16_t raw;

    // Les LSB og MSB
    if(HAL_I2C_Mem_Read(&hi2c1, BQ_ADDR, REG_VFB_L,
                         I2C_MEMADD_SIZE_8BIT, &lsb, 1, HAL_MAX_DELAY) != HAL_OK)
        return 0; // feilet

    if(HAL_I2C_Mem_Read(&hi2c1, BQ_ADDR, REG_VFB_H,
                         I2C_MEMADD_SIZE_8BIT, &msb, 1, HAL_MAX_DELAY) != HAL_OK)
        return 0; // feilet

    
    raw = ((uint16_t)msb << 8) | lsb; // Kombiner MSB og LSB til 16-bit verdi

    return (raw * 1 + 0); // Konverter til mV (bit-step = 1mV) + offset 0mV
}
uint16_t BQ_Read_VSYS(void){
    uint8_t lsb, msb;
    uint16_t raw;

    // Les LSB og MSB
    if(HAL_I2C_Mem_Read(&hi2c1, BQ_ADDR, REG_VSYS_L,
                         I2C_MEMADD_SIZE_8BIT, &lsb, 1, HAL_MAX_DELAY) != HAL_OK)
        return 0; // feilet

    if(HAL_I2C_Mem_Read(&hi2c1, BQ_ADDR, REG_VSYS_H,
                         I2C_MEMADD_SIZE_8BIT, &msb, 1, HAL_MAX_DELAY) != HAL_OK)
        return 0; // feilet

    
    raw = ((uint16_t)msb << 8) | lsb; // Kombiner MSB og LSB til 16-bit verdi

    return (raw * 2 + 100); // Konverter til mV (bit-step = 2mV) + offset 0mV
}
uint16_t BQ_Read_VAC(void){
    uint8_t lsb, msb;
    uint16_t raw;

    // Les LSB og MSB
    if(HAL_I2C_Mem_Read(&hi2c1, BQ_ADDR, REG_VAC_L,
                         I2C_MEMADD_SIZE_8BIT, &lsb, 1, HAL_MAX_DELAY) != HAL_OK)
        return 0; // feilet

    if(HAL_I2C_Mem_Read(&hi2c1, BQ_ADDR, REG_VAC_H,
                         I2C_MEMADD_SIZE_8BIT, &msb, 1, HAL_MAX_DELAY) != HAL_OK)
        return 0; // feilet

    
    raw = ((uint16_t)msb << 8) | lsb; // Kombiner MSB og LSB til 16-bit verdi

    return (raw * 2 + 200); // Konverter til mV (bit-step = 2mV) + offset 0mV
}
int16_t BQ_Read_IBAT(void){
    uint8_t lsb, msb;
    int16_t raw;

    // Les LSB og MSB
    if(HAL_I2C_Mem_Read(&hi2c1, BQ_ADDR, REG_IBAT_L,
                         I2C_MEMADD_SIZE_8BIT, &lsb, 1, HAL_MAX_DELAY) != HAL_OK)
        return 0; // feilet

    if(HAL_I2C_Mem_Read(&hi2c1, BQ_ADDR, REG_IBAT_H,
                         I2C_MEMADD_SIZE_8BIT, &msb, 1, HAL_MAX_DELAY) != HAL_OK)
        return 0; // feilet

    
    raw = ((int16_t)msb << 8) | lsb; // Kombiner MSB og LSB til 16-bit verdi

    return (raw * 2 + 0); // Konverter til mA (bit-step = 2mA) + offset 0mV
}
int16_t BQ_Read_IAC(void){
    uint8_t lsb, msb;
    int16_t raw;

    // Les LSB og MSB
    if(HAL_I2C_Mem_Read(&hi2c1, BQ_ADDR, REG_IAC_L,
                         I2C_MEMADD_SIZE_8BIT, &lsb, 1, HAL_MAX_DELAY) != HAL_OK)
        return 0; // feilet

    if(HAL_I2C_Mem_Read(&hi2c1, BQ_ADDR, REG_IAC_H,
                         I2C_MEMADD_SIZE_8BIT, &msb, 1, HAL_MAX_DELAY) != HAL_OK)
        return 0; // feilet

    
    raw = ((int16_t)msb << 8) | lsb; // Kombiner MSB og LSB til 16-bit verdi

    return (raw * 2 + 0); // Konverter til mA (bit-step = 2mA) + offset 0mA
}
