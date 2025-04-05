// © 2024 Oskar Arnudd

#ifndef EXTI_H
#define EXTI_H

#include "memorymap.h"

typedef struct{
    volatile uint32_t RTSR1;        // 0x00
    volatile uint32_t FTSR1;        // 0x04
    volatile uint32_t SWIER1;       // 0x08
    volatile uint32_t RPR1;         // 0x0C
    volatile uint32_t FPR1;         // 0x10
    volatile uint32_t RESERVED0;    // 0x14
    volatile uint32_t RESERVED1;    // 0x18
    volatile uint32_t RESERVED2;    // 0x1C
    volatile uint32_t RESERVED3;    // 0x20
    volatile uint32_t RESERVED4;    // 0x24
    volatile uint32_t RTSR2;        // 0x28
    volatile uint32_t FTSR2;        // 0x2C
    volatile uint32_t SWIER2;       // 0x30
    volatile uint32_t RPR2;         // 0x34
    volatile uint32_t FPR2;         // 0x38
    volatile uint32_t RESERVED5;    // 0x3C
    volatile uint32_t RESERVED6;    // 0x40
    volatile uint32_t RESERVED7;    // 0x44
    volatile uint32_t RESERVED8;    // 0x48
    volatile uint32_t RESERVED9;    // 0x4C
    volatile uint32_t RESERVED10;   // 0x50
    volatile uint32_t RESERVED11;   // 0x54
    volatile uint32_t RESERVED12;   // 0x58
    volatile uint32_t RESERVED13;   // 0x5C
    volatile uint32_t EXTICR1;      // 0x60
    volatile uint32_t EXTICR2;      // 0x64
    volatile uint32_t EXTICR3;      // 0x68
    volatile uint32_t EXTICR4;      // 0x6C
    volatile uint32_t RESERVED14;   // 0x70
    volatile uint32_t RESERVED15;   // 0x74
    volatile uint32_t RESERVED16;   // 0x78
    volatile uint32_t RESERVED17;   // 0x7C
    volatile uint32_t IMR1;         // 0x80
    volatile uint32_t EMR1;         // 0x84
    volatile uint32_t RESERVED18;   // 0x88
    volatile uint32_t RESERVED19;   // 0x8C
    volatile uint32_t IMR2;         // 0x90
    volatile uint32_t EMR2;         // 0x94
}EXTI_t;

#define EXTI ((EXTI_t*) EXTI_BASE)

#define EXTI_BASE_OFFSET    (0x1800)
#define EXTI_BASE           (AHB_BASE + EXTI_BASE_OFFSET)

/*
* EXTI_RTSR1
*/
#define EXTI_RTSR1_RT0          (1 << 0)
#define EXTI_RTSR1_RT1          (1 << 1)
#define EXTI_RTSR1_RT2          (1 << 2)
#define EXTI_RTSR1_RT3          (1 << 3)
#define EXTI_RTSR1_RT4          (1 << 4)
#define EXTI_RTSR1_RT5          (1 << 5)
#define EXTI_RTSR1_RT6          (1 << 6)
#define EXTI_RTSR1_RT7          (1 << 7)
#define EXTI_RTSR1_RT8          (1 << 8)
#define EXTI_RTSR1_RT9          (1 << 9)
#define EXTI_RTSR1_RT10         (1 << 10)
#define EXTI_RTSR1_RT11         (1 << 11)
#define EXTI_RTSR1_RT12         (1 << 12)
#define EXTI_RTSR1_RT13         (1 << 13)
#define EXTI_RTSR1_RT14         (1 << 14)
#define EXTI_RTSR1_RT15         (1 << 15)
#define EXTI_RTSR1_RT16         (1 << 16)
#define EXTI_RTSR1_RT17         (1 << 17)
#define EXTI_RTSR1_RT18         (1 << 18)
#define EXTI_RTSR1_RT20         (1 << 20)

/*
* EXTI_FTSR1
*/
#define EXTI_FTSR1_FT0          (1 << 0)
#define EXTI_FTSR1_FT1          (1 << 1)
#define EXTI_FTSR1_FT2          (1 << 2)
#define EXTI_FTSR1_FT3          (1 << 3)
#define EXTI_FTSR1_FT4          (1 << 4)
#define EXTI_FTSR1_FT5          (1 << 5)
#define EXTI_FTSR1_FT6          (1 << 6)
#define EXTI_FTSR1_FT7          (1 << 7)
#define EXTI_FTSR1_FT8          (1 << 8)
#define EXTI_FTSR1_FT9          (1 << 9)
#define EXTI_FTSR1_FT10         (1 << 10)
#define EXTI_FTSR1_FT11         (1 << 11)
#define EXTI_FTSR1_FT12         (1 << 12)
#define EXTI_FTSR1_FT13         (1 << 13)
#define EXTI_FTSR1_FT14         (1 << 14)
#define EXTI_FTSR1_FT15         (1 << 15)
#define EXTI_FTSR1_FT16         (1 << 16)
#define EXTI_FTSR1_FT17         (1 << 17)
#define EXTI_FTSR1_FT18         (1 << 18)
#define EXTI_FTSR1_FT20         (1 << 20)

/*
* EXTI_SWIER1
*/
#define EXTI_SWIER1_SWI0        (1 << 0)
#define EXTI_SWIER1_SWI1        (1 << 1)
#define EXTI_SWIER1_SWI2        (1 << 2)
#define EXTI_SWIER1_SWI3        (1 << 3)
#define EXTI_SWIER1_SWI4        (1 << 4)
#define EXTI_SWIER1_SWI5        (1 << 5)
#define EXTI_SWIER1_SWI6        (1 << 6)
#define EXTI_SWIER1_SWI7        (1 << 7)
#define EXTI_SWIER1_SWI8        (1 << 8)
#define EXTI_SWIER1_SWI9        (1 << 9)
#define EXTI_SWIER1_SWI10       (1 << 10)
#define EXTI_SWIER1_SWI11       (1 << 11)
#define EXTI_SWIER1_SWI12       (1 << 12)
#define EXTI_SWIER1_SWI13       (1 << 13)
#define EXTI_SWIER1_SWI14       (1 << 14)
#define EXTI_SWIER1_SWI15       (1 << 15)
#define EXTI_SWIER1_SWI16       (1 << 16)
#define EXTI_SWIER1_SWI17       (1 << 17)
#define EXTI_SWIER1_SWI18       (1 << 18)
#define EXTI_SWIER1_SWI20       (1 << 20)

/*
* EXTI_RPR1
*/
#define EXTI_RPR1_RPIF0         (1 << 0)
#define EXTI_RPR1_RPIF1         (1 << 1)
#define EXTI_RPR1_RPIF2         (1 << 2)
#define EXTI_RPR1_RPIF3         (1 << 3)
#define EXTI_RPR1_RPIF4         (1 << 4)
#define EXTI_RPR1_RPIF5         (1 << 5)
#define EXTI_RPR1_RPIF6         (1 << 6)
#define EXTI_RPR1_RPIF7         (1 << 7)
#define EXTI_RPR1_RPIF8         (1 << 8)
#define EXTI_RPR1_RPIF9         (1 << 9)
#define EXTI_RPR1_RPIF10        (1 << 10)
#define EXTI_RPR1_RPIF11        (1 << 11)
#define EXTI_RPR1_RPIF12        (1 << 12)
#define EXTI_RPR1_RPIF13        (1 << 13)
#define EXTI_RPR1_RPIF14        (1 << 14)
#define EXTI_RPR1_RPIF15        (1 << 15)
#define EXTI_RPR1_RPIF16        (1 << 16)
#define EXTI_RPR1_RPIF17        (1 << 17)
#define EXTI_RPR1_RPIF18        (1 << 18)
#define EXTI_RPR1_RPIF20        (1 << 20)

/*
* EXTI_FPR1
*/
#define EXTI_FPR1_FPIF0         (1 << 0)
#define EXTI_FPR1_FPIF1         (1 << 1)
#define EXTI_FPR1_FPIF2         (1 << 2)
#define EXTI_FPR1_FPIF3         (1 << 3)
#define EXTI_FPR1_FPIF4         (1 << 4)
#define EXTI_FPR1_FPIF5         (1 << 5)
#define EXTI_FPR1_FPIF6         (1 << 6)
#define EXTI_FPR1_FPIF7         (1 << 7)
#define EXTI_FPR1_FPIF8         (1 << 8)
#define EXTI_FPR1_FPIF9         (1 << 9)
#define EXTI_FPR1_FPIF10        (1 << 10)
#define EXTI_FPR1_FPIF11        (1 << 11)
#define EXTI_FPR1_FPIF12        (1 << 12)
#define EXTI_FPR1_FPIF13        (1 << 13)
#define EXTI_FPR1_FPIF14        (1 << 14)
#define EXTI_FPR1_FPIF15        (1 << 15)
#define EXTI_FPR1_FPIF16        (1 << 16)
#define EXTI_FPR1_FPIF17        (1 << 17)
#define EXTI_FPR1_FPIF18        (1 << 18)
#define EXTI_FPR1_FPIF20        (1 << 20)

/*
* EXTI_RTSR2
*/
#define EXTI_RTSR2_RT2          (1 << 2)

/*
* EXTI_FTSR2
*/
#define EXTI_FTSR2_FT2          (1 << 2)

/*
* EXTI_SWIER2
*/
#define EXTI_SWIER2_SWI2        (1 << 2)

/*
* EXTI_RPR2
*/
#define EXTI_RPR2_RPIF2         (1 << 2)

/*
* EXTI_FPR2
*/
#define EXTI_FPR2_FPIF2         (1 << 2)

/*
* EXTI_CR1
*/
#define EXTI_CR1_EXTI0_POS      (0)
#define EXTI_CR1_EXTI0(n)       (((n) & 0xFF) << EXTI_CR1_EXTI0_POS)
#define EXTI_CR1_EXTI0_MSK      EXTI_CR1_EXTI0(0xFF)
#define EXTI_CR1_EXTI1_POS      (8)
#define EXTI_CR1_EXTI1(n)       (((n) & 0xFF) << EXTI_CR1_EXTI1_POS)
#define EXTI_CR1_EXTI1_MSK      EXTI_CR1_EXTI1(0xFF)
#define EXTI_CR1_EXTI2_POS      (16)
#define EXTI_CR1_EXTI2(n)       (((n) & 0xFF) << EXTI_CR1_EXTI2_POS)
#define EXTI_CR1_EXTI2_MSK      EXTI_CR1_EXTI2(0xFF)
#define EXTI_CR1_EXTI3_POS      (24)
#define EXTI_CR1_EXTI3(n)       (((n) & 0xFF) << EXTI_CR1_EXTI3_POS)
#define EXTI_CR1_EXTI3_MSK      EXTI_CR1_EXTI3(0xFF)

/*
* EXTI_CR2
*/
#define EXTI_CR2_EXTI0_POS      (0)
#define EXTI_CR2_EXTI0(n)       (((n) & 0xFF) << EXTI_CR2_EXTI0_POS)
#define EXTI_CR2_EXTI0_MSK      EXTI_CR2_EXTI0(0xFF)
#define EXTI_CR2_EXTI1_POS      (8)
#define EXTI_CR2_EXTI1(n)       (((n) & 0xFF) << EXTI_CR2_EXTI1_POS)
#define EXTI_CR2_EXTI1_MSK      EXTI_CR2_EXTI1(0xFF)
#define EXTI_CR2_EXTI2_POS      (16)
#define EXTI_CR2_EXTI2(n)       (((n) & 0xFF) << EXTI_CR2_EXTI2_POS)
#define EXTI_CR2_EXTI2_MSK      EXTI_CR2_EXTI2(0xFF)
#define EXTI_CR2_EXTI3_POS      (24)
#define EXTI_CR2_EXTI3(n)       (((n) & 0xFF) << EXTI_CR2_EXTI3_POS)
#define EXTI_CR2_EXTI3_MSK      EXTI_CR2_EXTI3(0xFF)

/*
* EXTI_CR3
*/
#define EXTI_CR3_EXTI0_POS      (0)
#define EXTI_CR3_EXTI0(n)       (((n) & 0xFF) << EXTI_CR3_EXTI0_POS)
#define EXTI_CR3_EXTI0_MSK      EXTI_CR3_EXTI0(0xFF)
#define EXTI_CR3_EXTI1_POS      (8)
#define EXTI_CR3_EXTI1(n)       (((n) & 0xFF) << EXTI_CR3_EXTI1_POS)
#define EXTI_CR3_EXTI1_MSK      EXTI_CR3_EXTI1(0xFF)
#define EXTI_CR3_EXTI2_POS      (16)
#define EXTI_CR3_EXTI2(n)       (((n) & 0xFF) << EXTI_CR3_EXTI2_POS)
#define EXTI_CR3_EXTI2_MSK      EXTI_CR3_EXTI2(0xFF)
#define EXTI_CR3_EXTI3_POS      (24)
#define EXTI_CR3_EXTI3(n)       (((n) & 0xFF) << EXTI_CR3_EXTI3_POS)
#define EXTI_CR3_EXTI3_MSK      EXTI_CR3_EXTI3(0xFF)

/*
* EXTI_CR4
*/
#define EXTI_CR4_EXTI0_POS      (0)
#define EXTI_CR4_EXTI0(n)       (((n) & 0xFF) << EXTI_CR4_EXTI0_POS)
#define EXTI_CR4_EXTI0_MSK      EXTI_CR4_EXTI0(0xFF)
#define EXTI_CR4_EXTI1_POS      (8)
#define EXTI_CR4_EXTI1(n)       (((n) & 0xFF) << EXTI_CR4_EXTI1_POS)
#define EXTI_CR4_EXTI1_MSK      EXTI_CR4_EXTI1(0xFF)
#define EXTI_CR4_EXTI2_POS      (16)
#define EXTI_CR4_EXTI2(n)       (((n) & 0xFF) << EXTI_CR4_EXTI2_POS)
#define EXTI_CR4_EXTI2_MSK      EXTI_CR4_EXTI2(0xFF)
#define EXTI_CR4_EXTI3_POS      (24)
#define EXTI_CR4_EXTI3(n)       (((n) & 0xFF) << EXTI_CR4_EXTI3_POS)
#define EXTI_CR4_EXTI3_MSK      EXTI_CR4_EXTI3(0xFF)

/*
* EXTI_IMR1
*/
#define EXTI_IMR1_IM0           (1 << 0)
#define EXTI_IMR1_IM1           (1 << 1)
#define EXTI_IMR1_IM2           (1 << 2)
#define EXTI_IMR1_IM3           (1 << 3)
#define EXTI_IMR1_IM4           (1 << 4)
#define EXTI_IMR1_IM5           (1 << 5)
#define EXTI_IMR1_IM6           (1 << 6)
#define EXTI_IMR1_IM7           (1 << 7)
#define EXTI_IMR1_IM8           (1 << 8)
#define EXTI_IMR1_IM9           (1 << 9)
#define EXTI_IMR1_IM10          (1 << 10)
#define EXTI_IMR1_IM11          (1 << 11)
#define EXTI_IMR1_IM12          (1 << 12)
#define EXTI_IMR1_IM13          (1 << 13)
#define EXTI_IMR1_IM14          (1 << 14)
#define EXTI_IMR1_IM15          (1 << 15)
#define EXTI_IMR1_IM16          (1 << 16)
#define EXTI_IMR1_IM17          (1 << 17)
#define EXTI_IMR1_IM18          (1 << 18)
#define EXTI_IMR1_IM19          (1 << 19)
#define EXTI_IMR1_IM20          (1 << 20)
#define EXTI_IMR1_IM21          (1 << 21)
#define EXTI_IMR1_IM22          (1 << 22)
#define EXTI_IMR1_IM23          (1 << 23)
#define EXTI_IMR1_IM24          (1 << 24)
#define EXTI_IMR1_IM25          (1 << 25)
#define EXTI_IMR1_IM26          (1 << 26)
#define EXTI_IMR1_IM27          (1 << 27)
#define EXTI_IMR1_IM28          (1 << 28)
#define EXTI_IMR1_IM29          (1 << 29)
#define EXTI_IMR1_IM30          (1 << 30)
#define EXTI_IMR1_IM31          (1 << 31)

/*
* EXTI_EMR1
*/
#define EXTI_EMR1_EM0           (1 << 0)
#define EXTI_EMR1_EM1           (1 << 1)
#define EXTI_EMR1_EM2           (1 << 2)
#define EXTI_EMR1_EM3           (1 << 3)
#define EXTI_EMR1_EM4           (1 << 4)
#define EXTI_EMR1_EM5           (1 << 5)
#define EXTI_EMR1_EM6           (1 << 6)
#define EXTI_EMR1_EM7           (1 << 7)
#define EXTI_EMR1_EM8           (1 << 8)
#define EXTI_EMR1_EM9           (1 << 9)
#define EXTI_EMR1_EM10          (1 << 10)
#define EXTI_EMR1_EM11          (1 << 11)
#define EXTI_EMR1_EM12          (1 << 12)
#define EXTI_EMR1_EM13          (1 << 13)
#define EXTI_EMR1_EM14          (1 << 14)
#define EXTI_EMR1_EM15          (1 << 15)
#define EXTI_EMR1_EM16          (1 << 16)
#define EXTI_EMR1_EM17          (1 << 17)
#define EXTI_EMR1_EM18          (1 << 18)
#define EXTI_EMR1_EM19          (1 << 19)
#define EXTI_EMR1_EM20          (1 << 20)
#define EXTI_EMR1_EM21          (1 << 21)
#define EXTI_EMR1_EM22          (1 << 22)
#define EXTI_EMR1_EM23          (1 << 23)
#define EXTI_EMR1_EM24          (1 << 24)
#define EXTI_EMR1_EM25          (1 << 25)
#define EXTI_EMR1_EM26          (1 << 26)
#define EXTI_EMR1_EM27          (1 << 27)
#define EXTI_EMR1_EM28          (1 << 28)
#define EXTI_EMR1_EM29          (1 << 29)
#define EXTI_EMR1_EM30          (1 << 30)
#define EXTI_EMR1_EM31          (1 << 31)

/*
* EXTI_IMR2
*/
#define EXTI_IMR2_IM32          (1 << 0)
#define EXTI_IMR2_IM33          (1 << 1)
#define EXTI_IMR2_IM34          (1 << 2)
#define EXTI_IMR2_IM35          (1 << 3)

/*
* EXTI_EMR2
*/
#define EXTI_EMR2_EM32          (1 << 0)
#define EXTI_EMR2_EM33          (1 << 1)
#define EXTI_EMR2_EM34          (1 << 2)
#define EXTI_EMR2_EM35          (1 << 3)

#endif
