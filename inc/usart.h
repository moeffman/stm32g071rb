// © 2024 Oskar Arnudd

#ifndef USART_H
#define USART_H

#include "memorymap.h"

// Forward declarations
typedef struct ring_buffer_t ring_buffer_t;

#define RING_BUFFER_SIZE 128

typedef enum {
    USART_STATE_IDLE,
    USART_STATE_ESC,
    USART_STATE_BRACKET
} usart_state_t;

typedef struct{
    volatile uint32_t CR1;      // 0x00
    volatile uint32_t CR2;      // 0x04
    volatile uint32_t CR3;      // 0x08
    volatile uint32_t BRR;      // 0x0C
    volatile uint32_t GTPR;     // 0x10
    volatile uint32_t RTOR;     // 0x14
    volatile uint32_t RQR;      // 0x18
    volatile uint32_t ISR;      // 0x1C
    volatile uint32_t ICR;      // 0x20
    volatile uint32_t RDR;      // 0x24
    volatile uint32_t TDR;      // 0x28
    volatile uint32_t PRESC;    // 0x2C
} USART_t;

#define USART1 ((USART_t*) USART1_BASE)
#define USART2 ((USART_t*) USART2_BASE)
#define USART3 ((USART_t*) USART3_BASE)
#define USART4 ((USART_t*) USART4_BASE)
#define USART5 ((USART_t*) USART5_BASE)
#define USART6 ((USART_t*) USART6_BASE)

#define USART1_BASE_OFFSET  (0x13800)
#define USART1_BASE         (APB_BASE + USART1_BASE_OFFSET)
#define USART2_BASE_OFFSET  (0x4400)
#define USART2_BASE         (APB_BASE + USART2_BASE_OFFSET)
#define USART3_BASE_OFFSET  (0x4800)
#define USART3_BASE         (APB_BASE + USART3_BASE_OFFSET)
#define USART4_BASE_OFFSET  (0x4C00)
#define USART4_BASE         (APB_BASE + USART3_BASE_OFFSET)
#define USART5_BASE_OFFSET  (0x5000)
#define USART5_BASE         (APB_BASE + USART3_BASE_OFFSET)
#define USART6_BASE_OFFSET  (0x13C00)
#define USART6_BASE         (APB_BASE + USART3_BASE_OFFSET)

/*
* USART_CR1
*/
#define USART_CR1_UE            (1 << 0)
#define USART_CR1_UESM          (1 << 1)
#define USART_CR1_RE            (1 << 2)
#define USART_CR1_TE            (1 << 3)
#define USART_CR1_IDLEIE        (1 << 4)
#define USART_CR1_RXNEIE        (1 << 5)
#define USART_CR1_TCIE          (1 << 6)
#define USART_CR1_TXEIE         (1 << 7)
#define USART_CR1_PEIE          (1 << 8)
#define USART_CR1_PS            (1 << 9)
#define USART_CR1_PCE           (1 << 10)
#define USART_CR1_WAKE          (1 << 11)
#define USART_CR1_M0            (1 << 12)
#define USART_CR1_MME           (1 << 13)
#define USART_CR1_CMIE          (1 << 14)
#define USART_CR1_OVER8         (1 << 15)
#define USART_CR1_DEDT_POS      (16)
#define USART_CR1_DEDT(n)       (((n) & 0x1F) << USART_CR1_DEDT_POS)
#define USART_CR1_DEDT_MSK      USART_CR1_DEDT(0x1F)
#define USART_CR1_DEAT_POS      (21)
#define USART_CR1_DEAT(n)       (((n) & 0x1F) << USART_CR1_DEAT_POS)
#define USART_CR1_DEAT_MSK      USART_CR1_DEAT(0x1F)
#define USART_CR1_RTOIE         (1 << 26)
#define USART_CR1_EOBIE         (1 << 27)
#define USART_CR1_M1            (1 << 28)
#define USART_CR1_FIFOEN        (1 << 29)
#define USART_CR1_TXFEIE        (1 << 30)
#define USART_CR1_RXFFIE        (1 << 31)

/*
* USART_CR2
*/
#define USART_CR2_SLVEN         (1 << 0)
#define USART_CR2_DIS_NSS       (1 << 3)
#define USART_CR2_ADDM7         (1 << 4)
#define USART_CR2_LBDL          (1 << 5)
#define USART_CR2_LBDIE         (1 << 6)
#define USART_CR2_LBCL          (1 << 8)
#define USART_CR2_CPHA          (1 << 9)
#define USART_CR2_CPOL          (1 << 10)
#define USART_CR2_CLKEN         (1 << 11)
#define USART_CR2_STOP_POS      (12)
#define USART_CR2_STOP(n)       (((n) & 0x3) << USART_CR2_STOP_POS)
#define USART_CR2_STOP_MSK      USART_CR2_STOP(0x3)
#define USART_CR2_LINEN         (1 << 14)
#define USART_CR2_SWAP          (1 << 15)
#define USART_CR2_RXINV         (1 << 16)
#define USART_CR2_TXINV         (1 << 17)
#define USART_CR2_DATAINV       (1 << 18)
#define USART_CR2_MSBFIRST      (1 << 19)
#define USART_CR2_ABREN         (1 << 20)
#define USART_CR2_ABRMOD_POS    (21)
#define USART_CR2_ABRMOD(n)     (((n) & 0x3) << USART_CR2_ABRMOD_POS)
#define USART_CR2_ABRMOD_MSK    USART_CR2_ABRMOD(0x3)
#define USART_CR2_RTOEN         (1 << 23)
#define USART_CR2_ADD_POS       (24)
#define USART_CR2_ADD(n)        (((n) & 0xFF) << USART_CR2_ADD_POS)
#define USART_CR2_ADD_MSK       USART_CR2_ADD(0xFF)

/*
* USART_CR3
*/
#define USART_CR3_EIE               (1 << 0)
#define USART_CR3_IREN              (1 << 1)
#define USART_CR3_IRLP              (1 << 2)
#define USART_CR3_HDSEL             (1 << 3)
#define USART_CR3_NACK              (1 << 4)
#define USART_CR3_SCEN              (1 << 5)
#define USART_CR3_DMAR              (1 << 6)
#define USART_CR3_DMAT              (1 << 7)
#define USART_CR3_RTSE              (1 << 8)
#define USART_CR3_CTSE              (1 << 9)
#define USART_CR3_CTSIE             (1 << 10)
#define USART_CR3_ONEBIT            (1 << 11)
#define USART_CR3_OVRDIS            (1 << 12)
#define USART_CR3_DDRE              (1 << 13)
#define USART_CR3_DEM               (1 << 14)
#define USART_CR3_DEP               (1 << 15)
#define USART_CR3_SCARCNT_POS       (17)
#define USART_CR3_SCARCNT(n)        (((n) & 0x7) << USART_CR3_SCARCNT_POS)
#define USART_CR3_SCARCNT_MSK       USART_CR3_SCARCNT(0x7)
#define USART_CR3_WUS_POS           (20)
#define USART_CR3_WUS(n)            (((n) & 0x3) << USART_CR3_WUS_POS)
#define USART_CR3_WUS_MSK           USART_CR3_WUS(0x3)
#define USART_CR3_WUFIE             (1 << 18)
#define USART_CR3_TXFTIE            (1 << 19)
#define USART_CR3_TCBGTIE           (1 << 20)
#define USART_CR3_RXFTCFG_POS       (25)
#define USART_CR3_RXFTCFG(n)        (((n) & 0x7) << USART_CR3_RXFTCFG_POS)
#define USART_CR3_RXFTCFG_MSK       USART_CR3_RXFTCFG(0x7)
#define USART_CR3_RXFTIE            (1 << 22)
#define USART_CR3_TXFTCFG_POS       (29)
#define USART_CR3_TXFTCFG(n)        (((n) & 0x7) << USART_CR3_TXFTCFG_POS)
#define USART_CR3_TXFTCFG_MSK       USART_CR3_TXFTCFG(0x7)

/*
* USART_GTPR
*/
#define USART_GTPR_PSC_POS          (0)
#define USART_GTPR_PSC(n)           (((n) & 0xFF) << USART_GTPR_PSC_POS)
#define USART_GTPR_PSC_MSK          USART_GTPR_PSC(0xFF)
#define USART_GTPR_GT_POS           (8)
#define USART_GTPR_GT(n)            (((n) & 0xFF) << USART_GTPR_GT_POS)
#define USART_GTPR_GT_MSK           USART_GTPR_GT(0xFF)

/*
* USART_RTOR
*/
#define USART_RTOR_RTO_POS          (0)
#define USART_RTOR_RTO(n)           (((n) & 0xFFFFFF) << USART_RTOR_RTO_POS)
#define USART_RTOR_RTO_MSK          USART_RTOR_RTO(0xFFFFFF)
#define USART_RTOR_BLEN_POS         (24)
#define USART_RTOR_BLEN(n)          (((n) & 0xFF) << USART_RTOR_BLEN_POS)
#define USART_RTOR_BLEN_MSK         USART_RTOR_BLEN(0xFF)

/*
* USART_RQR
*/
#define USART_RQR_ABRRQ             (1 << 0)
#define USART_RQR_SBKRQ             (1 << 1)
#define USART_RQR_MMRQ              (1 << 2)
#define USART_RQR_RXFRQ             (1 << 3)
#define USART_RQR_TXFRQ             (1 << 4)

/*
* USART_ISR
*/
#define USART_ISR_PE                (1 << 0)
#define USART_ISR_FE                (1 << 1)
#define USART_ISR_NE                (1 << 2)
#define USART_ISR_ORE               (1 << 3)
#define USART_ISR_IDLE              (1 << 4)
#define USART_ISR_RXNE              (1 << 5)
#define USART_ISR_TC                (1 << 6)
#define USART_ISR_TXE               (1 << 7)
#define USART_ISR_LBDF              (1 << 8)
#define USART_ISR_CTSIF             (1 << 9)
#define USART_ISR_CTS               (1 << 10)
#define USART_ISR_RTOF              (1 << 11)
#define USART_ISR_EOBF              (1 << 12)
#define USART_ISR_UDR               (1 << 13)
#define USART_ISR_ABRE              (1 << 14)
#define USART_ISR_ABRF              (1 << 15)
#define USART_ISR_BUSY              (1 << 16)
#define USART_ISR_CMF               (1 << 17)
#define USART_ISR_SBFK              (1 << 18)
#define USART_ISR_RWU               (1 << 19)
#define USART_ISR_WUF               (1 << 20)
#define USART_ISR_TEACK             (1 << 21)
#define USART_ISR_REACK             (1 << 22)
#define USART_ISR_TCBGT             (1 << 25)

/*
* USART_ICR
*/
#define USART_ICR_PECF              (1 << 0)
#define USART_ICR_FECF              (1 << 1)
#define USART_ICR_NECF              (1 << 2)
#define USART_ICR_ORECF             (1 << 3)
#define USART_ICR_IDLECF            (1 << 4)
#define USART_ICR_TXFECF            (1 << 5)
#define USART_ICR_TCCF              (1 << 6)
#define USART_ICR_TCBGTCF           (1 << 7)
#define USART_ICR_LBDCF             (1 << 8)
#define USART_ICR_CTSCF             (1 << 9)
#define USART_ICR_RTOCF             (1 << 11)
#define USART_ICR_EOBCF             (1 << 12)
#define USART_ICR_UDRCF             (1 << 13)
#define USART_ICR_CMCF              (1 << 17)
#define USART_ICR_WUCF              (1 << 20)

/*
* USART_PRESC
*/
#define USART_PRESC_PRESCALER_POS   (0)
#define USART_PRESC_PRESCALER(n)    (((n) & 0xF) << USART_PRESC_PRESCALER_POS)
#define USART_PRESC_PRESCALER_MSK   USART_PRESC_PRESCALER(0xF)

void usart_send_byte(USART_t* usart, uint8_t byte);

void usart_send_bytes(USART_t* usart, uint8_t *bytes, uint32_t length);

void usart_send_string(USART_t* usart, char *string);

uint8_t usart_receive(USART_t* usart);

#endif
