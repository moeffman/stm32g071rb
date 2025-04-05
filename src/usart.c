// © 2024 Oskar Arnudd

#include "../inc/usart.h"

void usart_send_byte(USART_t* usart, uint8_t byte)
{
    if(!(usart->ISR & USART_ISR_TXE)) return;

    while(!(usart->ISR & USART_ISR_TEACK)){};

    usart->TDR = byte;

    while(!(usart->ISR & USART_ISR_TC));
}

void usart_send_bytes(USART_t* usart, uint8_t* bytes, uint32_t length)
{
    for(uint32_t i = 0; i < length; i++){
	usart_send_byte(usart, bytes[i]);
    }
}

void usart_send_string(USART_t* usart, char* string)
{
    for(uint32_t i = 0; string[i]; i++){
	usart_send_byte(usart, string[i]);
    }
}

uint8_t usart_receive(USART_t* usart)
{
    return usart->ISR & USART_ISR_RXNE ? usart->RDR : 0;
}
