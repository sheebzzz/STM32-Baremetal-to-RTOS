#include "stm32f4xx.h"

void uart_init(void) {
    RCC->APB1ENR |= RCC_APB1ENR_USART2EN;
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;

    GPIOA->AFR[0] |= (7 << (2*4)) | (7 << (3*4)); // PA2, PA3 -> USART2
    GPIOA->MODER |= (2 << (2*2)) | (2 << (3*2));

    USART2->BRR = 0x0683;  // 9600 baud
    USART2->CR1 |= USART_CR1_TE | USART_CR1_RE | USART_CR1_UE;
}

void uart_send(char c) {
    while(!(USART2->SR & USART_SR_TXE));
    USART2->DR = c;
}

int main(void) {
    uart_init();
    while(1) {
        uart_send('A');
    }
}
