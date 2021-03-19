#include "stm32f4xx_hal.h"
#include "led.h"

int main()
{
    HAL_Init();
    led_init();

    while (1)
    {
        HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
        HAL_Delay(500);
    }
}

void SysTick_Handler(void)
{
  HAL_IncTick();
}
