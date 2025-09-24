#include "stm32f4xx.h"  // Change to your STM32 series header

void delay(volatile uint32_t count) {
    while(count--);
}

int main(void) {
    // Enable clock for GPIOA
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;

    // Set PA5 as output (for onboard LED on many STM32 boards)
    GPIOA->MODER &= ~(0x3 << (5 * 2)); // Clear mode
    GPIOA->MODER |=  (0x1 << (5 * 2)); // Set as output

    while(1) {
        GPIOA->ODR ^= (1 << 5); // Toggle LED
        delay(1000000);
    }
}
