// © 2024 Oskar Arnudd

#ifndef RCC_H
#define RCC_H

#include "memorymap.h"

typedef struct {
    volatile uint32_t CR;           // 0x00
    volatile uint32_t ICSCR;        // 0x04
    volatile uint32_t CFGR;         // 0x08
    volatile uint32_t PLLCFGR;      // 0x0C
    volatile uint32_t RESERVED0;    // 0x10
    volatile uint32_t CRRCR;        // 0x14
    volatile uint32_t CIER;         // 0x18
    volatile uint32_t CIFR;         // 0x1C
    volatile uint32_t CICR;         // 0x20
    volatile uint32_t IOPRSTR;      // 0x24
    volatile uint32_t AHBRSTR;      // 0x28
    volatile uint32_t APBRSTR1;     // 0x2C
    volatile uint32_t APBRSTR2;     // 0x30
    volatile uint32_t IOPENR;       // 0x34
    volatile uint32_t AHBENR;       // 0x38
    volatile uint32_t APBENR1;      // 0x3C
    volatile uint32_t APBENR2;      // 0x40
    volatile uint32_t IOPSMENR;     // 0x44
    volatile uint32_t AHBSMENR;     // 0x48
    volatile uint32_t APBSMENR1;    // 0x4C
    volatile uint32_t APBSMENR2;    // 0x50
    volatile uint32_t CCIPR;        // 0x54
    volatile uint32_t CCIPR2;       // 0x58
    volatile uint32_t BDCR;         // 0x5C
    volatile uint32_t CSR;          // 0x60
} RCC_t;

#define RCC ((RCC_t*) RCC_BASE)

#define RCC_BASE_OFFSET         (0x1000)
#define RCC_BASE                (AHB_BASE + RCC_BASE_OFFSET)

/*
* RCC_IO
*/
#define RCC_IO_GPIOA        (BIT0)
#define RCC_IO_GPIOB        (BIT1)
#define RCC_IO_GPIOC        (BIT2)
#define RCC_IO_GPIOD        (BIT3)
#define RCC_IO_GPIOE        (BIT4)
#define RCC_IO_GPIOF        (BIT5)

/*
* RCC_AHB
*/
#define RCC_AHB_DMA1        (BIT0)
#define RCC_AHB_DMA2        (BIT1)
#define RCC_AHB_FLASH       (BIT8)
#define RCC_AHB_CRC         (BIT12)
#define RCC_AHB_AES         (BIT16)
#define RCC_AHB_RNG         (BIT18)

/*
* RCC_APB1
*/
#define RCC_APB1_TIM2       (BIT0)
#define RCC_APB1_TIM3       (BIT1)
#define RCC_APB1_TIM4       (BIT2)
#define RCC_APB1_TIM6       (BIT4)
#define RCC_APB1_TIM7       (BIT5)
#define RCC_APB1_LPUART2    (BIT7)
#define RCC_APB1_USART5     (BIT8)
#define RCC_APB1_USART6     (BIT9)
#define RCC_APB1_RTC        (BIT10)
#define RCC_APB1_WWDG       (BIT11)
#define RCC_APB1_FDCAN      (BIT12)
#define RCC_APB1_USB        (BIT13)
#define RCC_APB1_SPI2       (BIT14)
#define RCC_APB1_SPI3       (BIT15)
#define RCC_APB1_CRS        (BIT16)
#define RCC_APB1_USART2     (BIT17)
#define RCC_APB1_USART3     (BIT18)
#define RCC_APB1_USART4     (BIT19)
#define RCC_APB1_LPUART1    (BIT20)
#define RCC_APB1_I2C1       (BIT21)
#define RCC_APB1_I2C2       (BIT22)
#define RCC_APB1_I2C3       (BIT23)
#define RCC_APB1_CEC        (BIT24)
#define RCC_APB1_UCPD1      (BIT25)
#define RCC_APB1_UCPD2      (BIT26)
#define RCC_APB1_DBG        (BIT27)
#define RCC_APB1_PWR        (BIT28)
#define RCC_APB1_DAC1       (BIT29)
#define RCC_APB1_LPTIM2     (BIT30)
#define RCC_APB1_LPTIM1     (BIT31)

/*
* RCC_APB2
*/
#define RCC_APB2_TIM1       (BIT11)
#define RCC_APB2_SPI1       (BIT12)
#define RCC_APB2_USART1     (BIT14)
#define RCC_APB2_TIM14      (BIT15)
#define RCC_APB2_TIM15      (BIT16)
#define RCC_APB2_TIM16      (BIT17)
#define RCC_APB2_TIM17      (BIT18)
#define RCC_APB2_ADC        (BIT20)

#define RCC_IO_MASK     (0x3F)
#define RCC_AHB_MASK    (0x51003)
#define RCC_APB1_MASK   (0xFFFFF3B7)
#define RCC_APB2_MASK   (0x17D801)

/*
* RCC_CR
*/
#define RCC_CR_HSION                (BIT8)
#define RCC_CR_HSIKERON             (BIT9)
#define RCC_CR_HSIRDY               (BIT10)
#define RCC_CR_HSIDIV_POS           (11)
#define RCC_CR_HSIDIV(n)            (((n) & 0x7) << RCC_CR_HSIDIV_POS)
#define RCC_CR_HSIDIV_MSK           RCC_CR_HSIDIV(0x7)
#define RCC_CR_HSEON                (BIT16)
#define RCC_CR_HSERDY               (BIT17)
#define RCC_CR_HSEBYP               (BIT18)
#define RCC_CR_CSSON                (BIT19)
#define RCC_CR_HSI48ON              (BIT22)
#define RCC_CR_HSI48RDY             (BIT23)
#define RCC_CR_PLLON                (BIT24)
#define RCC_CR_PLLRDY               (BIT25)

/*
* RCC_ICSCR
*/
#define RCC_ICSCR_HSICAL_POS        (0)
#define RCC_ICSCR_HSICAL(n)         (((n) & 0xFF) << RCC_ICSCR_HSICAL_POS)
#define RCC_ICSCR_HSICAL_MSK        RCC_ICSCR_HSICAL(0xFF)
#define RCC_ICSCR_HSITRIM_POS       (8)
#define RCC_ICSCR_HSITRIM(n)        (((n) & 0x7F) << RCC_ICSCR_HSITRIM_POS)
#define RCC_ICSCR_HSITRIM_MSK       RCC_ICSCR_HSITRIM(0x7F)

/*
* RCC_CFGR
*/
#define RCC_CFGR_SW_POS             (0)
#define RCC_CFGR_SW(n)              (((n) & 0x7) << RCC_CFGR_SW_POS)
#define RCC_CFGR_SW_MSK             RCC_CFGR_SW(0x7)
#define RCC_CFGR_SWS_POS            (3)
#define RCC_CFGR_SWS(n)             (((n) & 0x7) << RCC_CFGR_SWS_POS)
#define RCC_CFGR_SWS_MSK            RCC_CFGR_SWS(0x7)
#define RCC_CFGR_HPRE_POS           (8)
#define RCC_CFGR_HPRE(n)            (((n) & 0xF) << RCC_CFGR_HPRE_POS)
#define RCC_CFGR_HPRE_MSK           RCC_CFGR_HPRE(0xF)
#define RCC_CFGR_PPRE_POS           (12)
#define RCC_CFGR_PPRE(n)            (((n) & 0x7) << RCC_CFGR_PPRE_POS)
#define RCC_CFGR_PPRE_MSK           RCC_CFGR_PPRE(0x7)
#define RCC_CFGR_MCO2SEL_POS        (16)
#define RCC_CFGR_MCO2SEL(n)         (((n) & 0xF) << RCC_CFGR_MCO2SEL_POS)
#define RCC_CFGR_MCO2SEL_MSK        RCC_CFGR_MCO2SEL(0xF)
#define RCC_CFGR_MCO2PRE_POS        (20)
#define RCC_CFGR_MCO2PRE(n)         (((n) & 0xF) << RCC_CFGR_MCO2PRE_POS)
#define RCC_CFGR_MCO2PRE_MSK        RCC_CFGR_MCO2PRE(0xF)
#define RCC_CFGR_MCOSEL_POS         (24)
#define RCC_CFGR_MCOSEL(n)          (((n) & 0xF) << RCC_CFGR_MCOSEL_POS)
#define RCC_CFGR_MCOSEL_MSK         RCC_CFGR_MCOSEL(0xF)
#define RCC_CFGR_MCOPRE_POS         (28)
#define RCC_CFGR_MCOPRE(n)          (((n) & 0xF) << RCC_CFGR_MCOPRE_POS)
#define RCC_CFGR_MCOPRE_MSK         RCC_CFGR_MCOPRE(0xF)

/*
* RCC_PLLCFGR
*/
#define RCC_PLLCFGR_PLLSRC_POS      (0)
#define RCC_PLLCFGR_PLLSRC(n)       (((n) & 0x3) << RCC_PLLCFGR_PLLSRC_POS)
#define RCC_PLLCFGR_PLLSRC_MSK      RCC_PLLCFGR_PLLSRC(0x3)
#define RCC_PLLCFGR_PLLM_POS        (4)
#define RCC_PLLCFGR_PLLM(n)         (((n) & 0x7) << RCC_PLLCFGR_PLLM_POS)
#define RCC_PLLCFGR_PLLM_MSK        RCC_PLLCFGR_PLLM(0x7)
#define RCC_PLLCFGR_PLLN_POS        (8)
#define RCC_PLLCFGR_PLLN(n)         (((n) & 0x7F) << RCC_PLLCFGR_PLLN_POS)
#define RCC_PLLCFGR_PLLN_MSK        RCC_PLLCFGR_PLLN(0x7F)
#define RCC_PLLCFGR_PLLPEN          (BIT16)
#define RCC_PLLCFGR_PLLP_POS        (17)
#define RCC_PLLCFGR_PLLP(n)         (((n) & 0x1F) << RCC_PLLCFGR_PLLP_POS)
#define RCC_PLLCFGR_PLLP_MSK        RCC_PLLCFGR_PLLP(0x1F)
#define RCC_PLLCFGR_PLLQEN          (BIT24)
#define RCC_PLLCFGR_PLLQ_POS        (25)
#define RCC_PLLCFGR_PLLQ(n)         (((n) & 0x7) << RCC_PLLCFGR_PLLQ_POS)
#define RCC_PLLCFGR_PLLQ_MSK        RCC_PLLCFGR_PLLQ(0x7)
#define RCC_PLLCFGR_PLLREN          (BIT28)
#define RCC_PLLCFGR_PLLR_POS        (29)
#define RCC_PLLCFGR_PLLR(n)         (((n) & 0x7) << RCC_PLLCFGR_PLLR_POS)
#define RCC_PLLCFGR_PLLR_MSK        RCC_PLLCFGR_PLLR(0x7)

/*
* RCC_CIER
*/
#define RCC_CIER_LSIRDYIE           (BIT0)
#define RCC_CIER_LSERDYIE           (BIT1)
#define RCC_CIER_HSI48RDYIE         (BIT2)
#define RCC_CIER_HSIRDYIE           (BIT3)
#define RCC_CIER_HSERDYIE           (BIT4)
#define RCC_CIER_PLLRDYIE           (BIT5)

/*
* RCC_CIFR
*/
#define RCC_CIFR_LSIRDYF            (BIT0)
#define RCC_CIFR_LSERDYF            (BIT1)
#define RCC_CIFR_HSI48RDYF          (BIT2)
#define RCC_CIFR_HSIRDYF            (BIT3)
#define RCC_CIFR_HSERDYF            (BIT4)
#define RCC_CIFR_PLLRDYF            (BIT5)
#define RCC_CIFR_CSSF               (BIT8)
#define RCC_CIFR_LSECSSF            (BIT9)

/*
* RCC_CICR
*/
#define RCC_CICR_LSIRDYC            (BIT0)
#define RCC_CICR_LSERDYC            (BIT1)
#define RCC_CICR_HSI48RDYC          (BIT2)
#define RCC_CICR_HSIRDYC            (BIT3)
#define RCC_CICR_HSERDYC            (BIT4)
#define RCC_CICR_PLLRDYC            (BIT5)
#define RCC_CICR_CSSC               (BIT8)
#define RCC_CICR_LSECSSC            (BIT9)

/*
* RCC_CCIPR
*/
#define RCC_CCIPR_USART1SEL_POS     (0)
#define RCC_CCIPR_USART1SEL(n)      (((n) & 0x3) << RCC_CCIPR_USART1SEL_POS)
#define RCC_CCIPR_USART1SEL_MSK     RCC_CCIPR_USART1SEL(0x3)
#define RCC_CCIPR_USART2SEL_POS     (2)
#define RCC_CCIPR_USART2SEL(n)      (((n) & 0x3) << RCC_CCIPR_USART2SEL_POS)
#define RCC_CCIPR_USART2SEL_MSK     RCC_CCIPR_USART2SEL(0x3)
#define RCC_CCIPR_USART3SEL_POS     (4)
#define RCC_CCIPR_USART3SEL(n)      (((n) & 0x3) << RCC_CCIPR_USART3SEL_POS)
#define RCC_CCIPR_USART3SEL_MSK     RCC_CCIPR_USART3SEL(0x3)
#define RCC_CCIPR_CECSEL            (BIT6)
#define RCC_CCIPR_LPUART2SEL_POS    (8)
#define RCC_CCIPR_LPUART2SEL(n)     (((n) & 0x3) << RCC_CCIPR_LPUART2SEL_POS)
#define RCC_CCIPR_LPUART2SEL_MSK    RCC_CCIPR_LPUART2SEL(0x3)
#define RCC_CCIPR_LPUART1SEL_POS    (10)
#define RCC_CCIPR_LPUART1SEL(n)     (((n) & 0x3) << RCC_CCIPR_LPUART1SEL_POS)
#define RCC_CCIPR_LPUART1SEL_MSK    RCC_CCIPR_LPUART1SEL(0x3)
#define RCC_CCIPR_I2C1SEL_POS       (12)
#define RCC_CCIPR_I2C1SEL(n)        (((n) & 0x3) << RCC_CCIPR_I2C1SEL_POS)
#define RCC_CCIPR_I2C1SEL_MSK       RCC_CCIPR_I2C1SEL(0x3)
#define RCC_CCIPR_I2C2I2S1SEL_POS   (14)
#define RCC_CCIPR_I2C2I2S1SEL(n)    (((n) & 0x3) << RCC_CCIPR_I2C2I2S1SEL_POS)
#define RCC_CCIPR_I2C2I2S1SEL_MSK   RCC_CCIPR_I2C2I2S1SEL(0x3)
#define RCC_CCIPR_LPTIM1SEL_POS     (18)
#define RCC_CCIPR_LPTIM1SEL(n)      (((n) & 0x3) << RCC_CCIPR_LPTIM1SEL_POS)
#define RCC_CCIPR_LPTIM1SEL_MSK     RCC_CCIPR_LPTIM1SEL(0x3)
#define RCC_CCIPR_LPTIM2SEL_POS     (20)
#define RCC_CCIPR_LPTIM2SEL(n)      (((n) & 0x3) << RCC_CCIPR_LPTIM2SEL_POS)
#define RCC_CCIPR_LPTIM2SEL_MSK     RCC_CCIPR_LPTIM2SEL(0x3)
#define RCC_CCIPR_TIM1SEL           (BIT22)
#define RCC_CCIPR_TIM15SEL          (BIT24)
#define RCC_CCIPR_RNGSEL_POS        (26)
#define RCC_CCIPR_RNGSEL(n)         (((n) & 0x3) << RCC_CCIPR_RNGSEL_POS)
#define RCC_CCIPR_RNGSEL_MSK        RCC_CCIPR_RNGSEL(0x3)
#define RCC_CCIPR_RNGDIV_POS        (28)
#define RCC_CCIPR_RNGDIV(n)         (((n) & 0x3) << RCC_CCIPR_RNGDIV_POS)
#define RCC_CCIPR_RNGDIV_MSK        RCC_CCIPR_RNGDIV(0x3)
#define RCC_CCIPR_ADCSEL_POS        (30)
#define RCC_CCIPR_ADCSEL(n)         (((n) & 0x3) << RCC_CCIPR_ADCSEL_POS)
#define RCC_CCIPR_ADCSEL_MSK        RCC_CCIPR_ADCSEL(0x3)

/*
* RCC_CCIPR2
*/
#define RCC_CCIPR2_I2S1SEL_POS      (0)
#define RCC_CCIPR2_I2S1SEL(n)       (((n) & 0x3) << RCC_CCIPR2_I2S1SEL_POS)
#define RCC_CCIPR2_I2S1SEL_MSK      RCC_CCIPR2_I2S1SEL(0x3)
#define RCC_CCIPR2_I2S2SEL_POS      (2)
#define RCC_CCIPR2_I2S2SEL(n)       (((n) & 0x3) << RCC_CCIPR2_I2S2SEL_POS)
#define RCC_CCIPR2_I2S2SEL_MSK      RCC_CCIPR2_I2S2SEL(0x3)
#define RCC_CCIPR2_FDCANSEL_POS     (8)
#define RCC_CCIPR2_FDCANSEL(n)      (((n) & 0x3) << RCC_CCIPR2_FDCANSEL_POS)
#define RCC_CCIPR2_FDCANSEL_MSK     RCC_CCIPR2_FDCANSEL(0x3)
#define RCC_CCIPR2_USBSEL_POS       (12)
#define RCC_CCIPR2_USBSEL(n)        (((n) & 0x3) << RCC_CCIPR2_USBSEL_POS)
#define RCC_CCIPR2_USBSEL_MSK       RCC_CCIPR2_USBSEL(0x3)

/*
* RCC_BDCR
*/
#define RCC_BDCR_LSEON              (BIT0)
#define RCC_BDCR_LSERDY             (BIT1)
#define RCC_BDCR_LSEBYP             (BIT2)
#define RCC_BDCR_LSEDRV_POS         (3)
#define RCC_BDCR_LSEDRV(n)          (((n) & 0x3) << RCC_BDCR_LSEDRV_POS)
#define RCC_BDCR_LSEDRV_MSK         RCC_BDCR_LSEDRV(0x3)
#define RCC_BDCR_LSECSSON           (BIT5)
#define RCC_BDCR_LSECSSD            (BIT6)
#define RCC_BDCR_RTCSEL_POS         (8)
#define RCC_BDCR_RTCSEL(n)          (((n) & 0x3) << RCC_BDCR_RTCSEL_POS)
#define RCC_BDCR_RTCSEL_MSK         RCC_BDCR_RTCSEL(0x3)
#define RCC_BDCR_RTCEN              (BIT15)
#define RCC_BDCR_BDRST              (BIT16)
#define RCC_BDCR_LSCOEN             (BIT24)
#define RCC_BDCR_LSCOSEL            (BIT25)

/*
* RCC_CSR
*/
#define RCC_CSR_LSION               (BIT0)
#define RCC_CSR_LSIRDY              (BIT1)
#define RCC_CSR_RMVF                (BIT23)
#define RCC_CSR_OBLRSTF             (BIT25)
#define RCC_CSR_PINRSTF             (BIT26)
#define RCC_CSR_PWRRSTF             (BIT27)
#define RCC_CSR_SFTRSTF             (BIT28)
#define RCC_CSR_IWWGRSTF            (BIT29)
#define RCC_CSR_WWDGRSTF            (BIT30)
#define RCC_CSR_LPWRRSTF            (BIT31)

void rcc_reset_all(void);

#endif
