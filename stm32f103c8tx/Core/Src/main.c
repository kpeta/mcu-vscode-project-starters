#include "stm32f1xx_hal.h"
#include "led.h"
#include "SEGGER_RTT.h"

int main()
{
    HAL_Init();
    led_init();

    while (1)
    {
        HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
        SEGGER_RTT_printf(0, "Hello world!\n");
        HAL_Delay(1000);
    }
    
}

void SysTick_Handler(void)
{
    HAL_IncTick();
}
