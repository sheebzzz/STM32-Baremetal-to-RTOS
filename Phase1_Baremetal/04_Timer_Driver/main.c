#include "stm32f4xx.h"

void timer_init(void) {
    RCC->APB1ENR |= RCC_APB1ENR_TIM2EN;
    TIM2->PSC = 16000-1; // prescaler
    TIM2->ARR = 1000-1;  // auto-reload
    TIM2->CR1 |= TIM_CR1_CEN;
}

int main(void) {
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;
    GPIOA->MODER |= (1 << (5*2)); // PA5 output
    timer_init();

    while(1) {
        if(TIM2->SR & TIM_SR_UIF) {
            TIM2->SR &= ~TIM_SR_UIF;
            GPIOA->ODR ^= (1 << 5);
        }
    }
}
