// © 2024 Oskar Arnudd

#include "../inc/rcc.h"

void rcc_reset_all(void)
{
    for(uint8_t i = 0; i < 32; i++){
        uint32_t biti = (1 << i);

        if(RCC_IO_MASK & biti){
            RCC->IOPRSTR |= biti;    // Reset 1
            RCC->IOPRSTR &= ~biti;   // Reset 0
            RCC->IOPENR &= ~biti;    // Enable 0
        }
        if(RCC_AHB_MASK & biti){
            RCC->AHBRSTR |= biti;
            RCC->AHBRSTR &= ~biti;
            RCC->AHBENR &= ~biti;
        }
        if(RCC_APB1_MASK & biti){
            RCC->APBRSTR1 |= biti;
            RCC->APBRSTR1 &= ~biti;
            RCC->APBENR1 &= ~biti;
        }
        if(RCC_APB2_MASK & biti){
            RCC->APBRSTR2 |= biti;
            RCC->APBRSTR2 &= ~biti;
            RCC->APBENR2 &= ~biti;
        }
    }
}
