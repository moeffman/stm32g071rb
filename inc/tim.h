// © 2024 Oskar Arnudd

#ifndef TIM_H
#define TIM_H

#include "memorymap.h"

typedef struct{
    volatile uint32_t CR1;          // 0x00
    volatile uint32_t CR2;          // 0x04
    volatile uint32_t SMCR;         // 0x08
    volatile uint32_t DIER;         // 0x0C
    volatile uint32_t SR;           // 0x10
    volatile uint32_t EGR;          // 0x14
    volatile uint32_t CCMR1;        // 0x18
    volatile uint32_t CCMR2;        // 0x1C
    volatile uint32_t CCER;         // 0x20
    volatile uint32_t CNT;          // 0x24
    volatile uint32_t PSC;          // 0x28
    volatile uint32_t ARR;          // 0x2C
    volatile uint32_t RCR;          // 0x30
    volatile uint32_t CCR1;         // 0x34
    volatile uint32_t CCR2;         // 0x38
    volatile uint32_t CCR3;         // 0x3C
    volatile uint32_t CCR4;         // 0x40
    volatile uint32_t BDTR;         // 0x44
    volatile uint32_t DCR;          // 0x48
    volatile uint32_t DMAR;         // 0x4C
    volatile uint32_t OR1;          // 0x50
    volatile uint32_t CCMR3;        // 0x54
    volatile uint32_t CCR5;         // 0x58
    volatile uint32_t CCR6;         // 0x5C
    volatile uint32_t AF1;          // 0x60
    volatile uint32_t AF2;          // 0x64
    volatile uint32_t TISEL;        // 0x68
}TIM1_t;

typedef struct{
    volatile uint32_t CR1;          // 0x00
    volatile uint32_t CR2;          // 0x04
    volatile uint32_t SMCR;         // 0x08
    volatile uint32_t DIER;         // 0x0C
    volatile uint32_t SR;           // 0x10
    volatile uint32_t EGR;          // 0x14
    volatile uint32_t CCMR1;        // 0x18
    volatile uint32_t CCMR2;        // 0x1C
    volatile uint32_t CCER;         // 0x20
    volatile uint32_t CNT;          // 0x24
    volatile uint32_t PSC;          // 0x28
    volatile uint32_t ARR;          // 0x2C
    volatile uint32_t RESERVED0;    // 0x30
    volatile uint32_t CCR1;         // 0x34
    volatile uint32_t CCR2;         // 0x38
    volatile uint32_t CCR3;         // 0x3C
    volatile uint32_t CCR4;         // 0x40
    volatile uint32_t RESERVED1;    // 0x44
    volatile uint32_t DCR;          // 0x48
    volatile uint32_t DMAR;         // 0x4C
    volatile uint32_t OR1;          // 0x50
    volatile uint32_t RESERVED2;    // 0x54
    volatile uint32_t RESERVED3;    // 0x58
    volatile uint32_t RESERVED4;    // 0x5C
    volatile uint32_t AF1;          // 0x60
    volatile uint32_t RESERVED5;    // 0x64
    volatile uint32_t TISEL;        // 0x68
}TIM2_4_t;

typedef struct{
    volatile uint32_t CR1;          // 0x00
    volatile uint32_t CR2;          // 0x04
    volatile uint32_t RESERVED0;    // 0x08
    volatile uint32_t DIER;         // 0x0C
    volatile uint32_t SR;           // 0x10
    volatile uint32_t EGR;          // 0x14
    volatile uint32_t RESERVED1;    // 0x18
    volatile uint32_t RESERVED2;    // 0x1C
    volatile uint32_t RESERVED3;    // 0x20
    volatile uint32_t CNT;          // 0x24
    volatile uint32_t PSC;          // 0x28
    volatile uint32_t ARR;          // 0x2C
}TIM6_7_t;

typedef struct{
    volatile uint32_t CR1;          // 0x00
    volatile uint32_t RESERVED0;    // 0x04
    volatile uint32_t RESERVED1;    // 0x08
    volatile uint32_t DIER;         // 0x0C
    volatile uint32_t SR;           // 0x10
    volatile uint32_t EGR;          // 0x14
    volatile uint32_t CCMR1;        // 0x18
    volatile uint32_t RESERVED2;    // 0x1C
    volatile uint32_t CCER;         // 0x20
    volatile uint32_t CNT;          // 0x24
    volatile uint32_t PSC;          // 0x28
    volatile uint32_t ARR;          // 0x2C
    volatile uint32_t RESERVED3;    // 0x30
    volatile uint32_t CCR1;         // 0x34
    volatile uint32_t RESERVED4;    // 0x38
    volatile uint32_t RESERVED5;    // 0x3C
    volatile uint32_t RESERVED6;    // 0x40
    volatile uint32_t RESERVED7;    // 0x44
    volatile uint32_t RESERVED8;    // 0x48
    volatile uint32_t RESERVED9;    // 0x4C
    volatile uint32_t RESERVED10;   // 0x50
    volatile uint32_t RESERVED11;   // 0x54
    volatile uint32_t RESERVED12;   // 0x58
    volatile uint32_t RESERVED13;   // 0x5C
    volatile uint32_t RESERVED14;   // 0x60
    volatile uint32_t RESERVED15;   // 0x64
    volatile uint32_t TISEL;        // 0x68
}TIM14_t;

typedef struct{
    volatile uint32_t CR1;          // 0x00
    volatile uint32_t CR2;          // 0x04
    volatile uint32_t SMCR;         // 0x08
    volatile uint32_t DIER;         // 0x0C
    volatile uint32_t SR;           // 0x10
    volatile uint32_t EGR;          // 0x14
    volatile uint32_t CCMR1;        // 0x18
    volatile uint32_t RESERVED0;    // 0x1C
    volatile uint32_t CCER;         // 0x20
    volatile uint32_t CNT;          // 0x24
    volatile uint32_t PSC;          // 0x28
    volatile uint32_t ARR;          // 0x2C
    volatile uint32_t RCR;          // 0x30
    volatile uint32_t CCR1;         // 0x34
    volatile uint32_t CCR2;         // 0x38
    volatile uint32_t RESERVED2;    // 0x3C
    volatile uint32_t RESERVED3;    // 0x40
    volatile uint32_t BDTR;         // 0x44
    volatile uint32_t DCR;          // 0x48
    volatile uint32_t DMAR;         // 0x4C
    volatile uint32_t RESERVED4;    // 0x50
    volatile uint32_t RESERVED5;    // 0x54
    volatile uint32_t RESERVED6;    // 0x58
    volatile uint32_t RESERVED7;    // 0x5C
    volatile uint32_t AF1;          // 0x60
    volatile uint32_t RESERVED8;    // 0x64
    volatile uint32_t TISEL;        // 0x68
}TIM15_t;

typedef struct{
    volatile uint32_t CR1;          // 0x00
    volatile uint32_t CR2;          // 0x04
    volatile uint32_t SMCR;         // 0x08
    volatile uint32_t DIER;         // 0x0C
    volatile uint32_t SR;           // 0x10
    volatile uint32_t EGR;          // 0x14
    volatile uint32_t CCMR1;        // 0x18
    volatile uint32_t RESERVED0;    // 0x1C
    volatile uint32_t CCER;         // 0x20
    volatile uint32_t CNT;          // 0x24
    volatile uint32_t PSC;          // 0x28
    volatile uint32_t ARR;          // 0x2C
    volatile uint32_t RCR;          // 0x30
    volatile uint32_t CCR1;         // 0x34
    volatile uint32_t RESERVED1;    // 0x38
    volatile uint32_t RESERVED2;    // 0x3C
    volatile uint32_t RESERVED3;    // 0x40
    volatile uint32_t BDTR;         // 0x44
    volatile uint32_t DCR;          // 0x48
    volatile uint32_t DMAR;         // 0x4C
    volatile uint32_t RESERVED4;    // 0x50
    volatile uint32_t RESERVED5;    // 0x54
    volatile uint32_t RESERVED6;    // 0x58
    volatile uint32_t RESERVED7;    // 0x5C
    volatile uint32_t AF1;          // 0x60
    volatile uint32_t RESERVED8;    // 0x64
    volatile uint32_t TISEL;        // 0x68
}TIM16_17_t;

typedef struct{
    volatile uint32_t ISR;          // 0x00
    volatile uint32_t ICR;          // 0x04
    volatile uint32_t IER;          // 0x08
    volatile uint32_t CFGR;         // 0x0C
    volatile uint32_t CR;           // 0x10
    volatile uint32_t CMP;          // 0x14
    volatile uint32_t ARR;          // 0x18
    volatile uint32_t CNT;          // 0x1C
    volatile uint32_t RESERVED0;    // 0x20
    volatile uint32_t CFGR2;        // 0x24
}LPTIM1_2_t;

#define LPTIM1_BASE_OFFSET      (0x7C00)
#define LPTIM1_BASE             (APB_BASE + LPTIM1_BASE_OFFSET)
#define LPTIM2_BASE_OFFSET      (0x9400)
#define LPTIM2_BASE             (APB_BASE + LPTIM2_BASE_OFFSET)
#define TIM1_BASE_OFFSET        (0x12C00)
#define TIM1_BASE               (APB_BASE + TIM1_BASE_OFFSET)
#define TIM2_BASE_OFFSET        (0x0000)
#define TIM2_BASE               (APB_BASE + TIM2_BASE_OFFSET)
#define TIM3_BASE_OFFSET        (0x0400)
#define TIM3_BASE               (APB_BASE + TIM3_BASE_OFFSET)
#define TIM4_BASE_OFFSET        (0x0800)
#define TIM4_BASE               (APB_BASE + TIM4_BASE_OFFSET)
#define TIM6_BASE_OFFSET        (0x1000)
#define TIM6_BASE               (APB_BASE + TIM6_BASE_OFFSET)
#define TIM7_BASE_OFFSET        (0x1400)
#define TIM7_BASE               (APB_BASE + TIM7_BASE_OFFSET)
#define TIM14_BASE_OFFSET       (0x2000)
#define TIM14_BASE              (APB_BASE + TIM14_BASE_OFFSET)
#define TIM15_BASE_OFFSET       (0x14000)
#define TIM15_BASE              (APB_BASE + TIM15_BASE_OFFSET)
#define TIM16_BASE_OFFSET       (0x14400)
#define TIM16_BASE              (APB_BASE + TIM16_BASE_OFFSET)
#define TIM17_BASE_OFFSET       (0x14800)
#define TIM17_BASE              (APB_BASE + TIM17_BASE_OFFSET)

#define LPTIM1  ((LPTIM1_2_t *)     LPTIM1_BASE)
#define LPTIM2  ((LPTIM1_2_t *)     LPTIM2_BASE)
#define TIM1    ((TIM1_t *)         TIM1_BASE)
#define TIM2    ((TIM2_4_t *)       TIM2_BASE)
#define TIM3    ((TIM2_4_t *)       TIM3_BASE)
#define TIM4    ((TIM2_4_t *)       TIM4_BASE)
#define TIM6    ((TIM6_7_t *)       TIM6_BASE)
#define TIM7    ((TIM6_7_t *)       TIM7_BASE)
#define TIM14   ((TIM14_t *)        TIM14_BASE)
#define TIM15   ((TIM15_t *)        TIM15_BASE)
#define TIM16   ((TIM16_17_t *)     TIM16_BASE)
#define TIM17   ((TIM16_17_t *)     TIM17_BASE)

/*
* TIM_CR1
*/
#define TIM_CR1_CEN         (1 << 0)
#define TIM_CR1_UDIS        (1 << 1)
#define TIM_CR1_URS         (1 << 2)
#define TIM_CR1_OPM         (1 << 3)
#define TIM_CR1_DIR         (1 << 4)
#define TIM_CR1_CMS_POS     (5)
#define TIM_CR1_CMS(n)      (((n) & 0x3) << TIM_CR1_CMS_POS)
#define TIM_CR1_CMS_MSK     TIM_CR1_CMS(0x3)
#define TIM_CR1_ARPE        (1 << 7)
#define TIM_CR1_CKD_POS     (8)
#define TIM_CR1_CKD(n)      (((n) & 0x3) << TIM_CR1_CKD_POS)
#define TIM_CR1_CKD_MSK     TIM_CR1_CKD(0x3)
#define TIM_CR1_UIFREMAP    (1 << 11)

/*
* TIM_CR2
*/
#define TIM_CR2_CCPC        (1 << 0)
#define TIM_CR2_CCUS        (1 << 2)
#define TIM_CR2_CCDS        (1 << 3)
#define TIM_CR2_MMS_POS     (4)
#define TIM_CR2_MMS(n)      (((n) & 0x7) << TIM_CR2_MMS_POS)
#define TIM_CR2_MMS_MSK     TIM_CR2_MMS(0x7)
#define TIM_CR2_TI1S        (1 << 7)
#define TIM_CR2_OIS1        (1 << 8)
#define TIM_CR2_OIS1N       (1 << 9)
#define TIM_CR2_OIS2        (1 << 10)
#define TIM_CR2_OIS2N       (1 << 11)
#define TIM_CR2_OIS3        (1 << 12)
#define TIM_CR2_OIS3N       (1 << 13)
#define TIM_CR2_OIS4        (1 << 14)
#define TIM_CR2_OIS5        (1 << 16)
#define TIM_CR2_OIS6        (1 << 18)
#define TIM_CR2_MMS2_POS    (20)
#define TIM_CR2_MMS2(n)     (((n) & 0xF) << TIM_CR2_MMS2_POS)
#define TIM_CR2_MMS2_MSK    TIM_CR2_MMS2(0xF)

/*
* TIM_SMCR
*/
#define TIM_SMCR_SMS2_0_POS    (0)
#define TIM_SMCR_SMS(n)     (((n) & 0x7) << TIM_SMCR_SMS2_0_POS)
#define TIM_SMCR_SMS2_0_MSK    TIM_SMCR_SMS(0x7)
#define TIM_SMCR_OCCS       (1 << 3)
#define TIM_SMCR_TS2_0_POS  (4)
#define TIM_SMCR_TS(n)      (((n) & 0x7) << TIM_SMCR_TS2_0_POS)
#define TIM_SMCR_TS2_0_MSK  TIM_SMCR_TS(0x7)
#define TIM_SMCR_MSM        (1 << 7)
#define TIM_SMCR_ETF_POS    (8)
#define TIM_SMCR_ETF(n)     (((n) & 0xF) << TIM_SMCR_ETF_POS)
#define TIM_SMCR_ETF_MSK    TIM_SMCR_ETF(0xF)
#define TIM_SMCR_ETPS_POS   (12)
#define TIM_SMCR_ETPS(n)    (((n) & 0x3) << TIM_SMCR_ETPS_POS)
#define TIM_SMCR_ETPS_MSK   TIM_SMCR_ETPS(0x3)
#define TIM_SMCR_ECE        (1 << 14)
#define TIM_SMCR_ETP        (1 << 15)
#define TIM_SMCR_SMS3       (1 << 16)
#define TIM_SMCR_TS4_3_POS  (20)
#define TIM_SMCR_TS4_3(n)   (((n) & 0x3) << TIM_SMCR_TS4_3_POS)
#define TIM_SMCR_TS4_3_MSK  TIM_SMCR_TS4_3(0x3)

/*
* TIM_DIER
*/
#define TIM_DIER_UIE        (1 << 0)
#define TIM_DIER_CC1IE      (1 << 1)
#define TIM_DIER_CC2IE      (1 << 2)
#define TIM_DIER_CC3IE      (1 << 3)
#define TIM_DIER_CC4IE      (1 << 4)
#define TIM_DIER_COMIE      (1 << 5)
#define TIM_DIER_TIE        (1 << 6)
#define TIM_DIER_BIE        (1 << 7)
#define TIM_DIER_UDE        (1 << 8)
#define TIM_DIER_CC1DE      (1 << 9)
#define TIM_DIER_CC2DE      (1 << 10)
#define TIM_DIER_CC3DE      (1 << 11)
#define TIM_DIER_CC4DE      (1 << 12)
#define TIM_DIER_COMDE      (1 << 13)
#define TIM_DIER_TDE        (1 << 14)

/*
* TIM_SR
*/
#define TIM_SR_UIF          (1 << 0)
#define TIM_SR_CC1IF        (1 << 1)
#define TIM_SR_CC2IF        (1 << 2)
#define TIM_SR_CC3IF        (1 << 3)
#define TIM_SR_CC4IF        (1 << 4)
#define TIM_SR_COMIF        (1 << 5)
#define TIM_SR_TIF          (1 << 6)
#define TIM_SR_BIF          (1 << 7)
#define TIM_SR_B2IF         (1 << 8)
#define TIM_SR_CC1OF        (1 << 9)
#define TIM_SR_CC2OF        (1 << 10)
#define TIM_SR_CC3OF        (1 << 11)
#define TIM_SR_CC4OF        (1 << 12)
#define TIM_SR_SBIF         (1 << 13)
#define TIM_SR_CC5IF        (1 << 16)
#define TIM_SR_CC6IF        (1 << 17)

/*
* TIM_EGR
*/
#define TIM_EGR_UG          (1 << 0)
#define TIM_EGR_CC1G        (1 << 1)
#define TIM_EGR_CC2G        (1 << 2)
#define TIM_EGR_CC3G        (1 << 3)
#define TIM_EGR_CC4G        (1 << 4)
#define TIM_EGR_COMG        (1 << 5)
#define TIM_EGR_TG          (1 << 6)
#define TIM_EGR_BG          (1 << 7)
#define TIM_EGR_B2G         (1 << 8)

/*
* TIM_CCMR1
*/
#define TIM_CCMR1_CC1S_POS      (0)
#define TIM_CCMR1_CC1S(n)       (((n) & 0x3) << TIM_CCMR1_CC1S_POS)
#define TIM_CCMR1_CC1S_MSK      TIM_CCMR1_CC1S(0x3)
#define TIM_CCMR1_IC1PSC_POS    (2)
#define TIM_CCMR1_IC1PSC(n)     (((n) & 0x3) << TIM_CCMR1_IC1PSC_POS)
#define TIM_CCMR1_IC1PSC_MSK    TIM_CCMR1_IC1PSC(0x3)
#define TIM_CCMR1_IC1F_POS      (4)
#define TIM_CCMR1_IC1F(n)       (((n) & 0xF) << TIM_CCMR1_IC1F_POS)
#define TIM_CCMR1_IC1F_MSK      TIM_CCMR1_IC1F(0xF)
#define TIM_CCMR1_CC2S_POS      (8)
#define TIM_CCMR1_CC2S(n)       (((n) & 0x3) << TIM_CCMR1_CC2S_POS)
#define TIM_CCMR1_CC2S_MSK      TIM_CCMR1_CC2S(0x3)
#define TIM_CCMR1_IC2PSC_POS    (10)
#define TIM_CCMR1_IC2PSC(n)     (((n) & 0x3) << TIM_CCMR1_IC2PSC_POS)
#define TIM_CCMR1_IC2PSC_MSK    TIM_CCMR1_IC2PSC(0x3)
#define TIM_CCMR1_IC2F_POS      (12)
#define TIM_CCMR1_IC2F(n)       (((n) & 0xF) << TIM_CCMR1_IC2F_POS)
#define TIM_CCMR1_IC2F_MSK      TIM_CCMR1_IC2F(0xF)
#define TIM_CCMR1_OC1FE         (1 << 2)
#define TIM_CCMR1_OC1PE         (1 << 3)
#define TIM_CCMR1_OC1M2_0_POS   (4)
#define TIM_CCMR1_OC1M2_0(n)    (((n) & 0x7) << TIM_CCMR1_OC1M2_0_POS)
#define TIM_CCMR1_OC1M2_0_MSK   TIM_CCMR1_OC1M2_0(0x7)
#define TIM_CCMR1_OC1CE         (1 << 7)
#define TIM_CCMR1_OC2FE         (1 << 10)
#define TIM_CCMR1_OC2PE         (1 << 11)
#define TIM_CCMR1_OC2M2_0_POS   (12)
#define TIM_CCMR1_OC2M2_0(n)    (((n) & 0x7) << TIM_CCMR1_OC2M2_0_POS)
#define TIM_CCMR1_OC2M2_0_MSK   TIM_CCMR1_OC2M2_0(0x7)
#define TIM_CCMR1_OC2CE         (1 << 15)
#define TIM_CCMR1_OC1M3         (1 << 16)
#define TIM_CCMR1_OC2M3         (1 << 24)

/*
* TIM_CCMR2
*/
#define TIM_CCMR2_CC3S_POS      (0)
#define TIM_CCMR2_CC3S(n)       (((n) & 0x3) << TIM_CCMR2_CC3S_POS)
#define TIM_CCMR2_CC3S_MSK      TIM_CCMR2_CC3S(0x3)
#define TIM_CCMR2_IC3PSC_POS    (2)
#define TIM_CCMR2_IC3PSC(n)     (((n) & 0x3) << TIM_CCMR2_IC3PSC_POS)
#define TIM_CCMR2_IC3PSC_MSK    TIM_CCMR2_IC3PSC(0x3)
#define TIM_CCMR2_IC3F_POS      (4)
#define TIM_CCMR2_IC3F(n)       (((n) & 0xF) << TIM_CCMR2_IC3F_POS)
#define TIM_CCMR2_IC3F_MSK      TIM_CCMR2_IC3F(0xF)
#define TIM_CCMR2_CC4S_POS      (8)
#define TIM_CCMR2_CC4S(n)       (((n) & 0x3) << TIM_CCMR2_CC4S_POS)
#define TIM_CCMR2_CC4S_MSK      TIM_CCMR2_CC4S(0x3)
#define TIM_CCMR2_IC4PSC_POS    (10)
#define TIM_CCMR2_IC4PSC(n)     (((n) & 0x3) << TIM_CCMR2_IC4PSC_POS)
#define TIM_CCMR2_IC4PSC_MSK    TIM_CCMR2_IC4PSC(0x3)
#define TIM_CCMR2_IC4F_POS      (12)
#define TIM_CCMR2_IC4F(n)       (((n) & 0xF) << TIM_CCMR2_IC4F_POS)
#define TIM_CCMR2_IC4F_MSK      TIM_CCMR2_IC4F(0xF)
#define TIM_CCMR2_OC3FE         (1 << 2)
#define TIM_CCMR2_OC3PE         (1 << 3)
#define TIM_CCMR2_OC3M2_0_POS   (4)
#define TIM_CCMR2_OC3M2_0(n)    (((n) & 0x7) << TIM_CCMR2_OC3M2_0_POS)
#define TIM_CCMR2_OC3M2_0_MSK   TIM_CCMR2_OC3M2_0(0x7)
#define TIM_CCMR2_OC3CE         (1 << 7)
#define TIM_CCMR2_OC4FE         (1 << 10)
#define TIM_CCMR2_OC4PE         (1 << 11)
#define TIM_CCMR2_OC4M2_0_POS   (12)
#define TIM_CCMR2_OC4M2_0(n)    (((n) & 0x7) << TIM_CCMR2_OC4M2_0_POS)
#define TIM_CCMR2_OC4M2_0_MSK   TIM_CCMR2_OC4M2_0(0x7)
#define TIM_CCMR2_OC4CE         (1 << 15)
#define TIM_CCMR2_OC3M3         (1 << 16)
#define TIM_CCMR2_OC4M3         (1 << 24)

/*
* TIM_CCER
*/
#define TIM_CCER_CC1E       (1 << 0)
#define TIM_CCER_CC1P       (1 << 1)
#define TIM_CCER_CC1NE      (1 << 2)
#define TIM_CCER_CC1NP      (1 << 3)
#define TIM_CCER_CC2E       (1 << 4)
#define TIM_CCER_CC2P       (1 << 5)
#define TIM_CCER_CC2NE      (1 << 6)
#define TIM_CCER_CC2NP      (1 << 7)
#define TIM_CCER_CC3E       (1 << 8)
#define TIM_CCER_CC3P       (1 << 9)
#define TIM_CCER_CC3NE      (1 << 10)
#define TIM_CCER_CC3NP      (1 << 11)
#define TIM_CCER_CC4E       (1 << 12)
#define TIM_CCER_CC4P       (1 << 13)
#define TIM_CCER_CC4NP      (1 << 15)
#define TIM_CCER_CC5E       (1 << 16)
#define TIM_CCER_CC5P       (1 << 17)
#define TIM_CCER_CC6E       (1 << 20)
#define TIM_CCER_CC6P       (1 << 21)

/*
* TIM_BDTR
*/
#define TIM_BDTR_DTG_POS    (0)
#define TIM_BDTR_DTG(n)     (((n) & 0xFF) << TIM_BDTR_DTG_POS)
#define TIM_BDTR_DTG_MSK    TIM_BDTR_DTG(0xFF)
#define TIM_BDTR_LOCK_POS   (8)
#define TIM_BDTR_LOCK(n)    (((n) & 0x3) << TIM_BDTR_LOCK_POS)
#define TIM_BDTR_LOCK_MSK   TIM_BDTR_LOCK(0x3)
#define TIM_BDTR_OSSI       (1 << 10)
#define TIM_BDTR_OSSR       (1 << 11)
#define TIM_BDTR_BKE        (1 << 12)
#define TIM_BDTR_BKP        (1 << 13)
#define TIM_BDTR_AOE        (1 << 14)
#define TIM_BDTR_MOE        (1 << 15)
#define TIM_BDTR_BKF_POS    (16)
#define TIM_BDTR_BKF(n)     (((n) & 0xF) << TIM_BDTR_BKF_POS)
#define TIM_BDTR_BKF_MSK    TIM_BDTR_BKF(0xF)
#define TIM_BDTR_BK2F_POS   (20)
#define TIM_BDTR_BK2F(n)    (((n) & 0xF) << TIM_BDTR_BK2F_POS)
#define TIM_BDTR_BK2F_MSK   TIM_BDTR_BK2F(0xF)
#define TIM_BDTR_BK2E       (1 << 24)
#define TIM_BDTR_BK2P       (1 << 25)
#define TIM_BDTR_BKDSRM     (1 << 26)
#define TIM_BDTR_BK2DSRM    (1 << 27)
#define TIM_BDTR_BKBID      (1 << 28)
#define TIM_BDTR_BK2BID     (1 << 29)

/*
* TIM_DCR
*/
#define TIM_DCR_DBA_POS    (0)
#define TIM_DCR_DBA(n)     (((n) & 0x1F) << TIM_DCR_DBA_POS)
#define TIM_DCR_DBA_MSK    TIM_DCR_DBA(0x1F)
#define TIM_DCR_DBL_POS    (8)
#define TIM_DCR_DBL(n)     (((n) & 0x1F) << TIM_DCR_DBL_POS)
#define TIM_DCR_DBL_MSK    TIM_DCR_DBL(0x1F)

/*
* TIM_OR1
*/
#define TIM_OR1_OCREF_CLR_POS    (0)
#define TIM_OR1_OCREF_CLR(n)     (((n) & 0x3) << TIM_OR1_OCREF_CLR_POS)
#define TIM_OR1_OCREF_CLR_MSK    TIM_OR1_OCREF_CLR(0x3)

/*
* TIM_CCMR3
*/
#define TIM_CCMR3_OC5FE         (1 << 2)
#define TIM_CCMR3_OC5PE         (1 << 3)
#define TIM_CCMR3_OC5M2_0_POS   (4)
#define TIM_CCMR3_OC5M2_0(n)    (((n) & 0x7) << TIM_CCMR3_OC5M2_0_POS)
#define TIM_CCMR3_OC5M2_0_MSK   TIM_CCMR3_OC5M2_0(0x7)
#define TIM_CCMR3_OC5CE         (1 << 7)
#define TIM_CCMR3_OC6FE         (1 << 10)
#define TIM_CCMR3_OC6PE         (1 << 11)
#define TIM_CCMR3_OC6M2_0_POS   (12)
#define TIM_CCMR3_OC6M2_0(n)    (((n) & 0x7) << TIM_CCMR3_OC6M2_0_POS)
#define TIM_CCMR3_OC6M2_0_MSK   TIM_CCMR3_OC6M2_0(0x7)
#define TIM_CCMR3_OC6CE         (1 << 15)
#define TIM_CCMR3_OC5M3         (1 << 16)
#define TIM_CCMR3_OC6M3         (1 << 24)

/*
* TIM_CCR5
*/
#define TIM_CCR5_CCR5_POS       (0)
#define TIM_CCR5_CCR5(n)        (((n) & 0xFFFF) << TIM_CCR5_CCR5_POS)
#define TIM_CCR5_CCR5_MSK       TIM_CCR5_CCR5(0xFFFF)
#define TIM_CCR5_GC5C1          (1 << 29)
#define TIM_CCR5_GC5C2          (1 << 30)
#define TIM_CCR5_GC5C3          (1 << 31)

/*
* TIM_AF1
*/
#define TIM_AF1_BKINE           (1 << 0)
#define TIM_AF1_BKCMP1E         (1 << 1)
#define TIM_AF1_BKCMP2E         (1 << 2)
#define TIM_AF1_BKCMP3E         (1 << 3)
#define TIM_AF1_BKINP           (1 << 9)
#define TIM_AF1_BKCMP1P         (1 << 10)
#define TIM_AF1_BKCMP2P         (1 << 11)
#define TIM_AF1_BKCMP3P         (1 << 12)
#define TIM_AF1_ETRSEL_POS      (14)
#define TIM_AF1_ETRSEL(n)       (((n) & 0xF) << TIM_AF1_ETRSEL_POS)
#define TIM_AF1_ETRSEL_MSK      TIM_AF1_ETRSEL(0xF)

/*
* TIM_AF2
*/
#define TIM_AF2_BK2INE          (1 << 0)
#define TIM_AF2_BK2CMP1E        (1 << 1)
#define TIM_AF2_BK2CMP2E        (1 << 2)
#define TIM_AF2_BK2CMP3E        (1 << 3)
#define TIM_AF2_BK2INP          (1 << 9)
#define TIM_AF2_BK2CMP1P        (1 << 10)
#define TIM_AF2_BK2CMP2P        (1 << 11)
#define TIM_AF2_BK2CMP3P        (1 << 12)

/*
* TIM_TISEL
*/
#define TIM_TISEL_TI1SEL_POS    (0)
#define TIM_TISEL_TI1SEL(n)     (((n) & 0xF) << TIM_TISEL_TI1SEL_POS)
#define TIM_TISEL_TI1SEL_MSK    TIM_TISEL_TI1SEL(0xF)
#define TIM_TISEL_TI2SEL_POS    (8)
#define TIM_TISEL_TI2SEL(n)     (((n) & 0xF) << TIM_TISEL_TI2SEL_POS)
#define TIM_TISEL_TI2SEL_MSK    TIM_TISEL_TI2SEL(0xF)
#define TIM_TISEL_TI3SEL_POS    (16)
#define TIM_TISEL_TI3SEL(n)     (((n) & 0xF) << TIM_TISEL_TI3SEL_POS)
#define TIM_TISEL_TI3SEL_MSK    TIM_TISEL_TI3SEL(0xF)
#define TIM_TISEL_TI4SEL_POS    (24)
#define TIM_TISEL_TI4SEL(n)     (((n) & 0xF) << TIM_TISEL_TI4SEL_POS)
#define TIM_TISEL_TI4SEL_MSK    TIM_TISEL_TI4SEL(0xF)

/*
* LPTIM_ISR
*/
#define LPTIM_ISR_CMPM          (1 << 0)
#define LPTIM_ISR_ARRM          (1 << 1)
#define LPTIM_ISR_EXTTRIG       (1 << 2)
#define LPTIM_ISR_CMPOK         (1 << 3)
#define LPTIM_ISR_ARROK         (1 << 4)
#define LPTIM_ISR_UP            (1 << 5)
#define LPTIM_ISR_DOWN          (1 << 6)

/*
* LPTIM_ICR
*/
#define LPTIM_ICR_CMPMCF        (1 << 0)
#define LPTIM_ICR_ARRMCF        (1 << 1)
#define LPTIM_ICR_EXTTRIGCF     (1 << 2)
#define LPTIM_ICR_CMPOKCF       (1 << 3)
#define LPTIM_ICR_ARROKCF       (1 << 4)
#define LPTIM_ICR_UPCF          (1 << 5)
#define LPTIM_ICR_DOWNCF        (1 << 6)

/*
* LPTIM_IER
*/
#define LPTIM_IER_CMPMIE        (1 << 0)
#define LPTIM_IER_ARRMIE        (1 << 1)
#define LPTIM_IER_EXTTRIGIE     (1 << 2)
#define LPTIM_IER_CMPOKIE       (1 << 3)
#define LPTIM_IER_ARROKIE       (1 << 4)
#define LPTIM_IER_UPIE          (1 << 5)
#define LPTIM_IER_DOWNIE        (1 << 6)

/*
* LPTIM_CFGR
*/
#define LPTIM_CFGR_CKSEL        (1 << 0)
#define LPTIM_CFGR_CKPOL_POS    (1)
#define LPTIM_CFGR_CKPOL(n)     (((n) & 0x3) << LPTIM_CFGR_CKPOL_POS)
#define LPTIM_CFGR_CKPOL_MSK    LPTIM_CFGR_CKPOL(0x3)
#define LPTIM_CFGR_CKFLT_POS    (3)
#define LPTIM_CFGR_CKFLT(n)     (((n) & 0x3) << LPTIM_CFGR_CKFLT_POS)
#define LPTIM_CFGR_CKFLT_MSK    LPTIM_CFGR_CKFLT(0x3)
#define LPTIM_CFGR_TRGFLT_POS   (6)
#define LPTIM_CFGR_TRGFLT(n)    (((n) & 0x3) << LPTIM_CFGR_TRGFLT_POS)
#define LPTIM_CFGR_TRGFLT_MSK   LPTIM_CFGR_TRGFLT(0x3)
#define LPTIM_CFGR_PRESC_POS    (9)
#define LPTIM_CFGR_PRESC(n)     (((n) & 0x7) << LPTIM_CFGR_PRESC_POS)
#define LPTIM_CFGR_PRESC_MSK    LPTIM_CFGR_PRESC(0x7)
#define LPTIM_CFGR_TRIGSEL_POS  (13)
#define LPTIM_CFGR_TRIGSEL(n)   (((n) & 0x7) << LPTIM_CFGR_TRIGSEL_POS)
#define LPTIM_CFGR_TRIGSEL_MSK  LPTIM_CFGR_TRIGSEL(0x7)
#define LPTIM_CFGR_TRIGEN_POS   (17)
#define LPTIM_CFGR_TRIGEN(n)    (((n) & 0x3) << LPTIM_CFGR_TRIGEN_POS)
#define LPTIM_CFGR_TRIGEN_MSK   LPTIM_CFGR_TRIGEN(0x3)
#define LPTIM_CFGR_TIMOUT       (1 << 19)
#define LPTIM_CFGR_WAVE         (1 << 20)
#define LPTIM_CFGR_WAVPOL       (1 << 21)
#define LPTIM_CFGR_PRELOAD      (1 << 22)
#define LPTIM_CFGR_COUNTMODE    (1 << 23)
#define LPTIM_CFGR_ENC          (1 << 24)

/*
* LPTIM_CR
*/
#define LPTIM_CR_ENABLE         (1 << 0)
#define LPTIM_CR_SNGSTRT        (1 << 1)
#define LPTIM_CR_CNTSTRT        (1 << 2)
#define LPTIM_CR_COUNTRST       (1 << 3)
#define LPTIM_CR_RSTARE         (1 << 4)

/*
* LPTIM_CFGR2
*/
#define LPTIM_CFGR2_IN1SEL_POS   (0)
#define LPTIM_CFGR2_IN1SEL(n)    (((n) & 0x3) << LPTIM_CFGR2_IN1SEL_POS)
#define LPTIM_CFGR2_IN1SEL_MSK   LPTIM_CFGR2_IN1SEL(0x3)
#define LPTIM_CFGR2_IN2SEL_POS   (4)
#define LPTIM_CFGR2_IN2SEL(n)    (((n) & 0x3) << LPTIM_CFGR2_IN2SEL_POS)
#define LPTIM_CFGR2_IN2SEL_MSK   LPTIM_CFGR2_IN2SEL(0x3)

#endif
