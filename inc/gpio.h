// © 2024 Oskar Arnudd

#ifndef GPIO_H
#define GPIO_H

#include "memorymap.h"

typedef struct{
    uint16_t type;
    uint32_t mode;
    uint32_t speed;
    uint32_t pupd;
    uint32_t af;
} gpio_config_t;

typedef struct {
    volatile uint32_t MODER;    // 0x00
    volatile uint32_t OTYPER;   // 0x04
    volatile uint32_t OSPEEDR;  // 0x08
    volatile uint32_t PUPDR;    // 0x0C
    volatile uint32_t IDR;      // 0x10
    volatile uint32_t ODR;      // 0x14
    volatile uint32_t BSRR;     // 0x18
    volatile uint32_t LCKR;     // 0x1C
    volatile uint32_t AFRL;     // 0x20
    volatile uint32_t AFRH;     // 0x24
    volatile uint32_t BRR;      // 0x28
} GPIO_t;

#define GPIOA ((GPIO_t*) GPIOA_BASE)
#define GPIOB ((GPIO_t*) GPIOB_BASE)
#define GPIOC ((GPIO_t*) GPIOC_BASE)
#define GPIOD ((GPIO_t*) GPIOD_BASE)
#define GPIOE ((GPIO_t*) GPIOE_BASE)
#define GPIOF ((GPIO_t*) GPIOF_BASE)

#define GPIO_BASE               (IOPORT_BASE)
#define GPIOA_BASE_OFFSET       (0x0)
#define GPIOA_BASE              (GPIO_BASE + GPIOA_BASE_OFFSET)
#define GPIOB_BASE_OFFSET       (0x400)
#define GPIOB_BASE              (GPIO_BASE + GPIOB_BASE_OFFSET)
#define GPIOC_BASE_OFFSET       (0x800)
#define GPIOC_BASE              (GPIO_BASE + GPIOC_BASE_OFFSET)
#define GPIOD_BASE_OFFSET       (0xC00)
#define GPIOD_BASE              (GPIO_BASE + GPIOD_BASE_OFFSET)
#define GPIOE_BASE_OFFSET       (0x1000)
#define GPIOE_BASE              (GPIO_BASE + GPIOE_BASE_OFFSET)
#define GPIOF_BASE_OFFSET       (0x1400)
#define GPIOF_BASE              (GPIO_BASE + GPIOF_BASE_OFFSET)

/*
* GPIO_MODER
*/
#define GPIO_MODER_INPUT            (0x0)
#define GPIO_MODER_OUTPUT           (0x1)
#define GPIO_MODER_AF               (0x2)
#define GPIO_MODER_ANALOG           (0x3)
#define GPIO_MODER_POS(pin)         (pin * 2)
#define GPIO_MODER_MSK(pin)         (0x3 << GPIO_MODER_POS(pin))
#define GPIO_MODER(pin, mode)       (mode & 0x3) << GPIO_MODER_POS(pin);

/*
* GPIO_OTYPER
*/
#define GPIO_OTYPER_PUSHPULL        (0x0)
#define GPIO_OTYPER_OPENDRAIN       (0x1)
#define GPIO_OTYPER_POS(pin)        (pin)
#define GPIO_OTYPER_MSK(pin)        (0x1 << GPIO_OTYPER_POS(pin))
#define GPIO_OTYPER(pin, mode)      (mode & 0x1) << GPIO_OTYPER_POS(pin);

/*
* GPIO_OSPEEDR
*/
#define GPIO_OSPEEDR_VERYLOW        (0x0)
#define GPIO_OSPEEDR_LOW            (0x1)
#define GPIO_OSPEEDR_HIGH           (0x2)
#define GPIO_OSPEEDR_VERYHIGH       (0x3)
#define GPIO_OSPEEDR_POS(pin)       (pin * 2)
#define GPIO_OSPEEDR_MSK(pin)       (0x3 << GPIO_OSPEEDR_POS(pin))
#define GPIO_OSPEEDR(pin, mode)     (mode & 0x3) << GPIO_OSPEEDR_POS(pin);

/*
* GPIO_OTYPER
*/
#define GPIO_PUPDR_NONE             (0x0)
#define GPIO_PUPDR_PULLUP           (0x1)
#define GPIO_PUPDR_PULLDOWN         (0x2)
#define GPIO_PUPDR_POS(pin)         (pin * 2)
#define GPIO_PUPDR_MSK(pin)         (0x3 << GPIO_PUPDR_POS(pin))
#define GPIO_PUPDR(pin, mode)       (mode & 0x3) << GPIO_PUPDR_POS(pin);

#define GPIO_AF0                    (0x0)
#define GPIO_AF1                    (0x1)
#define GPIO_AF2                    (0x2)
#define GPIO_AF3                    (0x3)
#define GPIO_AF4                    (0x4)
#define GPIO_AF5                    (0x5)
#define GPIO_AF6                    (0x6)
#define GPIO_AF7                    (0x7)
#define GPIO_AFRL_POS(pin)          (pin * 4)
#define GPIO_AFRL_MSK(pin)          (0xF << GPIO_AFRL_POS(pin))
#define GPIO_AFRL(pin, mode)        (mode & 0xF) << GPIO_AFRL_POS(pin);
#define GPIO_AFRH_POS(pin)          ((pin - 8) * 4)
#define GPIO_AFRH_MSK(pin)          (0xF << GPIO_AFRH_POS(pin))
#define GPIO_AFRH(pin, mode)        (mode & 0xF) << GPIO_AFRH_POS(pin);

void gpio_set(GPIO_t *port, gpio_config_t *config, uint16_t pin_mask);

void gpio_config_reset(gpio_config_t *config);

#endif
