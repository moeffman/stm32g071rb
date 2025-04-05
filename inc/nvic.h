// © 2024 Oskar Arnudd

#ifndef NVIC_H
#define NVIC_H

#include "memorymap.h"

typedef struct{
    volatile uint32_t ISER0;            // 0x100
    volatile uint32_t ISER1;            // 0x104
    volatile uint32_t ISER2;            // 0x108
    volatile uint32_t ISER3;            // 0x10C
    volatile uint32_t ISER4;            // 0x110
    volatile uint32_t ISER5;            // 0x114
    volatile uint32_t ISER6;            // 0x118
    volatile uint32_t ISER7;            // 0x11C
    volatile uint32_t RESERVED0[24];    // 0x120->0x17C
    volatile uint32_t ICER0;            // 0x180
    volatile uint32_t ICER1;            // 0x184
    volatile uint32_t ICER2;            // 0x188
    volatile uint32_t ICER3;            // 0x18C
    volatile uint32_t ICER4;            // 0x190
    volatile uint32_t ICER5;            // 0x194
    volatile uint32_t ICER6;            // 0x198
    volatile uint32_t ICER7;            // 0x19C
    volatile uint32_t ISPR0;            // 0x200
    volatile uint32_t ISPR1;            // 0x204
    volatile uint32_t ISPR2;            // 0x208
    volatile uint32_t ISPR3;            // 0x20C
    volatile uint32_t ISPR4;            // 0x210
    volatile uint32_t ISPR5;            // 0x214
    volatile uint32_t ISPR6;            // 0x218
    volatile uint32_t ISPR7;            // 0x21C
    volatile uint32_t RESERVED1[24];    // 0x220->0x27C
    volatile uint32_t ICPR0;            // 0x280
    volatile uint32_t ICPR1;            // 0x284
    volatile uint32_t ICPR2;            // 0x288
    volatile uint32_t ICPR3;            // 0x28C
    volatile uint32_t ICPR4;            // 0x290
    volatile uint32_t ICPR5;            // 0x294
    volatile uint32_t ICPR6;            // 0x298
    volatile uint32_t ICPR7;            // 0x29C
    volatile uint32_t IABR0;            // 0x300
    volatile uint32_t IABR1;            // 0x304
    volatile uint32_t IABR2;            // 0x308
    volatile uint32_t IABR3;            // 0x30C
    volatile uint32_t IABR4;            // 0x310
    volatile uint32_t IABR5;            // 0x314
    volatile uint32_t IABR6;            // 0x318
    volatile uint32_t IABR7;            // 0x31C
    volatile uint32_t RESERVED2[56];    // 0x320->0x3FC
    volatile uint8_t  IPR[240];         // 0x400->0x4EF
    volatile uint32_t RESERVED3[2324];  // 0x4F0->0xDFC
    volatile uint32_t STIR;             // 0xE00
}NVIC_t;

#define NVIC_BASE   (0xE000E100)
#define NVIC ((NVIC_t*) NVIC_BASE)

/*
* NVIC_BITS
*/
#define NVIC_WWDG                                   (1 << 0)
#define NVIC_PVD                                    (1 << 1)
#define NVIC_RTC                                    (1 << 2)
#define NVIC_FLASH                                  (1 << 3)
#define NVIC_RCC                                    (1 << 4)
#define NVIC_EXTI0_1                                (1 << 5)
#define NVIC_EXTI2_3                                (1 << 6)
#define NVIC_EXTI4_15                               (1 << 7)
#define NVIC_UCPD1_UCPD2_USB                        (1 << 8)
#define NVIC_DMA1_Channel1                          (1 << 9)
#define NVIC_DMA1_Channel2_3                        (1 << 10)
#define NVIC_DM1_Channel4_7_DMAMUX_DMA2_Channel1_5  (1 << 11)
#define NVIC_ADC_COMP                               (1 << 12)
#define NVIC_TIM1_BRK_UP_TRG_COM                    (1 << 13)
#define NVIC_TIM1_CC                                (1 << 14)
#define NVIC_TIM2                                   (1 << 15)
#define NVIC_TIM3_4                                 (1 << 16)
#define NVIC_TIM6_DAC_LPTIM1                        (1 << 17)
#define NVIC_TIM7_LPTIM2                            (1 << 18)
#define NVIC_TIM14                                  (1 << 19)
#define NVIC_TIM15                                  (1 << 20)
#define NVIC_TIM16_FDCAN_IT0                        (1 << 21)
#define NVIC_TIM17_FDCAN_IT1                        (1 << 22)
#define NVIC_I2C1                                   (1 << 23)
#define NVIC_I2C2_I2C3                              (1 << 24)
#define NVIC_SPI1                                   (1 << 25)
#define NVIC_SPI2_SPI3                              (1 << 26)
#define NVIC_USART1                                 (1 << 27)
#define NVIC_USART2_LPUART2                         (1 << 28)
#define NVIC_USART3_6_LPUART1                       (1 << 29)
#define NVIC_CEC                                    (1 << 30)
#define NVIC_AES_RNG                                (1 << 31)

#endif
