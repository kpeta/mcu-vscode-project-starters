#include <string.h>
#include "stm32l0xx_hal.h"
#include "led.h"

int main()
{
    HAL_Init();
    led_init();

    while (1)
    {
        HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
        HAL_Delay(1000);
    }
    
}

void SysTick_Handler()
{
    HAL_IncTick();
}
