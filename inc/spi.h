// © 2024 Oskar Arnudd

#ifndef SPI1_H
#define SPI1_H

#include "memorymap.h"

typedef struct{
    volatile uint32_t CR1;      // 0x00
    volatile uint32_t CR2;      // 0x04
    volatile uint32_t SR;       // 0x08
    volatile uint32_t DR;       // 0x0C
    volatile uint32_t CRCPR;    // 0x10
    volatile uint32_t RXCRCR;   // 0x14
    volatile uint32_t TXCRCR;   // 0x18
    volatile uint32_t I2SCFGR;  // 0x1C
    volatile uint32_t I2SPR;    // 0x20
}SPI_I2S_t;

#define SPI1 ((SPI_I2S_t*) SPI1_BASE)
#define I2S1 ((SPI_I2S_t*) SPI1_BASE)
#define SPI2 ((SPI_I2S_t*) SPI2_BASE)
#define I2S2 ((SPI_I2S_t*) SPI2_BASE)
#define SPI3 ((SPI_I2S_t*) SPI3_BASE)

#define SPI_BASE    (APB_BASE)
#define SPI1_BASE   (APB_BASE + SPI1_OFFSET)
#define SPI2_BASE   (APB_BASE + SPI2_OFFSET)
#define SPI3_BASE   (APB_BASE + SPI3_OFFSET)

#define SPI1_OFFSET (0x13000)
#define SPI2_OFFSET (0x3800)
#define SPI3_OFFSET (0x3C00)

/*
* SPI_CR1
*/
#define SPI_CR1_CPHA                (1 << 0)
#define SPI_CR1_CPOL                (1 << 1)
#define SPI_CR1_MSTR                (1 << 2)
#define SPI_CR1_BR_POS              (3)
#define SPI_CR1_BR(n)               (((n) & 0x7) << SPI_CR1_BR_POS)
#define SPI_CR1_BR_MSK              SPI_CR1_BR(0x7)
#define SPI_CR1_SPE                 (1 << 6)
#define SPI_CR1_LSBFIRST            (1 << 7)
#define SPI_CR1_SSI                 (1 << 8)
#define SPI_CR1_SSM                 (1 << 9)
#define SPI_CR1_RXONLY              (1 << 10)
#define SPI_CR1_CRCL                (1 << 11)
#define SPI_CR1_CRCNEXT             (1 << 12)
#define SPI_CR1_CRCEN               (1 << 13)
#define SPI_CR1_BIDIOE              (1 << 14)
#define SPI_CR1_BIDIMODE            (1 << 15)

/*
* SPI_CR2
*/
#define SPI_CR2_RXDMAEN             (1 << 0)
#define SPI_CR2_TXDMAEN             (1 << 1)
#define SPI_CR2_SSOE                (1 << 2)
#define SPI_CR2_NSSP                (1 << 3)
#define SPI_CR2_FRF                 (1 << 4)
#define SPI_CR2_ERRIE               (1 << 5)
#define SPI_CR2_RXNEIE              (1 << 6)
#define SPI_CR2_TXEIE               (1 << 7)
#define SPI_CR2_DS_POS              (8)
#define SPI_CR2_DS(n)               (((n) & 0xF) << SPI_CR2_DS_POS)
#define SPI_CR2_DS_MSK              SPI_CR2_DS(0xF)
#define SPI_CR2_FRXTH               (1 << 12)
#define SPI_CR2_LDMA_RX             (1 << 13)
#define SPI_CR2_LDMA_TX             (1 << 14)

/*
* SPI_SR
*/
#define SPI_SR_RXNE                 (1 << 0)
#define SPI_SR_TXE                  (1 << 1)
#define SPI_SR_CHSIDE               (1 << 2)
#define SPI_SR_UDR                  (1 << 3)
#define SPI_SR_CRCERR               (1 << 4)
#define SPI_SR_MODF                 (1 << 5)
#define SPI_SR_OVR                  (1 << 6)
#define SPI_SR_BSY                  (1 << 7)
#define SPI_SR_FRE                  (1 << 8)
#define SPI_SR_FRLVL_POS            (9)
#define SPI_SR_FRLVL(n)             (((n) & 0x3) << SPI_SR_FRLVL_POS)
#define SPI_SR_FRLVL_MSK            SPI_SR_FRLVL(0x3)
#define SPI_SR_FTLVL_POS            (11)
#define SPI_SR_FTLVL(n)             (((n) & 0x3) << SPI_SR_FTLVL_POS)
#define SPI_SR_FTLVL_MSK            SPI_SR_FTLVL(0x3)

/*
* SPI_I2SCFGR
*/
#define SPI_I2SCFGR_CHLEN           (1 << 0)
#define SPI_I2SCFGR_DATLEN_POS      (1)
#define SPI_I2SCFGR_DATLEN(n)       (((n) & 0x3) << SPI_I2SCFGR_DATLEN_POS)
#define SPI_I2SCFGR_DATLEN_MSK      SPI_I2SCFGR_DATLEN(0x3)
#define SPI_I2SCFGR_CKPOL           (1 << 3)
#define SPI_I2SCFGR_I2SSTD_POS      (4)
#define SPI_I2SCFGR_I2SSTD(n)       (((n) & 0x3) << SPI_I2SCFGR_I2SSTD_POS)
#define SPI_I2SCFGR_I2SSTD_MSK      SPI_I2SCFGR_I2SSTD(0x3)
#define SPI_I2SCFGR_PCMSYNC         (1 << 7)
#define SPI_I2SCFGR_I2SCFG_POS      (8)
#define SPI_I2SCFGR_I2SCFG(n)       (((n) & 0x3) << SPI_I2SCFGR_I2SCFG_POS)
#define SPI_I2SCFGR_I2SCFG_MSK      SPI_I2SCFGR_I2SCFG(0x3)
#define SPI_I2SCFGR_I2SE            (1 << 10)
#define SPI_I2SCFGR_I2SMOD          (1 << 11)
#define SPI_I2SCFGR_ASTRTEN         (1 << 12)

/*
* SPI_I2SPR
*/
#define SPI_I2SPR_I2SDIV_POS        (0)
#define SPI_I2SPR_I2SDIV(n)         (((n) & 0xFF) << SPI_I2SPR_I2SDIV_POS)
#define SPI_I2SPR_I2SDIV_MSK        SPI_I2SPR_I2SDIV(0xFF)
#define SPI_I2SPR_ODD               (1 << 8)
#define SPI_I2SPR_MCKOE             (1 << 9)

#endif
