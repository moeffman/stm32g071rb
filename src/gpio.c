// © 2024 Oskar Arnudd

#include "../inc/gpio.h"

void gpio_config_reset(gpio_config_t *config){
    config->mode    = GPIO_MODER_ANALOG;
    config->type    = GPIO_OTYPER_PUSHPULL;
    config->speed   = GPIO_OSPEEDR_VERYLOW;
    config->pupd    = GPIO_PUPDR_NONE;
    config->af      = GPIO_AF0;
}

void gpio_set(GPIO_t *port, gpio_config_t *config, uint16_t pin_mask)
{
    for(int pin = 0; pin < 16; pin++){
        if(!(pin_mask & (1 << pin))) continue;

        port->MODER &= ~GPIO_MODER_MSK(pin);
        port->MODER |= GPIO_MODER(pin, config->mode);

        port->OTYPER &= ~GPIO_OTYPER_MSK(pin);
        port->OTYPER |= GPIO_OTYPER(pin, config->type);

        port->OSPEEDR &= ~GPIO_OSPEEDR_MSK(pin);
        port->OSPEEDR |= GPIO_OSPEEDR(pin, config->speed);

        port->PUPDR &= ~GPIO_PUPDR_MSK(pin);
        port->PUPDR |= GPIO_PUPDR(pin, config->pupd);

        if(pin < 8){
            port->AFRL &= ~GPIO_AFRL_MSK(pin);
            port->AFRL |= GPIO_AFRL(pin, config->af);
        }else{
            port->AFRH &= ~GPIO_AFRH_MSK(pin);
            port->AFRH |= GPIO_AFRH(pin, config->af);
        }
    }
}
