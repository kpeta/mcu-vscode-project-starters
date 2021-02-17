#include "stm32f4xx_hal.h"
#include "stm32f407xx.h"

void SystemClockConfig(void);//optional

int main(void) //blinky for f407 discovery board
{
	HAL_Init();
	SystemClockConfig();

	*(volatile unsigned int *)0x40023830 |= (1 << 3);
	*(volatile unsigned int *)0x40020C00 |= (1 << (2 * 12));
	while (1)
	{
		*(volatile unsigned int *)0x40020C14 ^= (0xFUL << 12);
		HAL_Delay(1000);
    	}
}

void SystemClockConfig(void)
{

}

void SysTick_Handler(void)
{
	HAL_IncTick();
	HAL_SYSTICK_IRQHandler();//optional
}
