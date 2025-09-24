#include "stm32f4xx.h"

void delay(volatile uint32_t count) { while(count--); }

int main(void) {
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOBEN; // Enable GPIOB clock
    GPIOB->MODER |= (0x1 << (0*2));     // Set PB0 as output

    while(1) {
        GPIOB->ODR ^= (1 << 0);          // Toggle PB0
        delay(500000);
    }
}
