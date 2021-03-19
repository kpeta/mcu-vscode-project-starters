#define DUMMY __attribute__((weak,alias("Default_Handler")))

extern void _stack_top(void);
extern unsigned int _etext;
extern unsigned int _sdata; //start of .data section in RAM (VMA)
extern unsigned int _edata;
extern unsigned int _sbss;
extern unsigned int _ebss;

extern int main(void);

extern void __libc_init_array();
extern void SystemInit(void);

void Reset_Handler(void);
void Default_Handler(void);

void NMI_Handler() DUMMY;
void HardFault_Handler() DUMMY;
void MemManage_Handler() DUMMY;
void BusFault_Handler() DUMMY;
void UsageFault_Handler() DUMMY;
void SVCall_Handler() DUMMY;
void DebugMon_Handler() DUMMY;
void PendSV_Handler() DUMMY;
void SysTick_Handler() DUMMY;
void WWDG_IRQHandler() DUMMY;
void PVD_IRQHandler() DUMMY;
void TAMP_STAMP_IRQHandler() DUMMY;
void RTC_WKUP_IRQHandler() DUMMY;
void FLASH_IRQHandler() DUMMY;
void RCC_IRQHandler() DUMMY;
void EXTI0_IRQHandler() DUMMY;
void EXTI1_IRQHandler() DUMMY;
void EXTI2_IRQHandler() DUMMY;
void EXTI3_IRQHandler() DUMMY;
void EXTI4_IRQHandler() DUMMY;
void DMA1_Stream0_IRQHandler() DUMMY;
void DMA1_Stream1_IRQHandler() DUMMY;
void DMA1_Stream2_IRQHandler() DUMMY;
void DMA1_Stream3_IRQHandler() DUMMY;
void DMA1_Stream4_IRQHandler() DUMMY;
void DMA1_Stream5_IRQHandler() DUMMY;
void DMA1_Stream6_IRQHandler() DUMMY;
void ADC_IRQHandler() DUMMY;
void CAN1_TX_IRQHandler() DUMMY;
void CAN1_RX0_IRQHandler() DUMMY;
void CAN1_RX1_IRQHandler() DUMMY;
void CAN1_SCE_IRQHandler() DUMMY;
void EXTI9_5_IRQHandler() DUMMY;
void TIM1_BRK_TIM9_IRQHandler() DUMMY;
void TIM1_UP_TIM10_IRQHandler() DUMMY;
void TIM1_TRG_COM_TIM11_IRQHandler() DUMMY;
void TIM1_CC_IRQHandler() DUMMY;
void TIM2_IRQHandler() DUMMY;
void TIM3_IRQHandler() DUMMY;
void TIM4_IRQHandler() DUMMY;
void I2C1_EV_IRQHandler() DUMMY;
void I2C1_ER_IRQHandler() DUMMY;
void I2C2_EV_IRQHandler() DUMMY;
void I2C2_ER_IRQHandler() DUMMY;
void SPI1_IRQHandler() DUMMY;
void SPI2_IRQHandler() DUMMY;
void USART1_IRQHandler() DUMMY;
void USART2_IRQHandler() DUMMY;
void USART3_IRQHandler() DUMMY;
void EXTI15_10_IRQHandler() DUMMY;
void RTC_Alarm_IRQHandler() DUMMY;
void OTG_FS_WKUP_IRQHandler() DUMMY;
void TIM8_BRK_TIM12_IRQHandler() DUMMY;
void TIM8_UP_TIM13_IRQHandler() DUMMY;
void TIM8_TRG_COM_TIM14_IRQHandler() DUMMY;
void TIM8_CC_IRQHandler() DUMMY;
void DMA1_Stream7_IRQHandler() DUMMY;
void FSMC_IRQHandler() DUMMY;
void SDIO_IRQHandler() DUMMY;
void TIM5_IRQHandler() DUMMY;
void SPI3_IRQHandler() DUMMY;
void UART4_IRQHandler() DUMMY;
void UART5_IRQHandler() DUMMY;
void TIM6_DAC_IRQHandler() DUMMY;
void TIM7_IRQHandler() DUMMY;
void DMA2_Stream0_IRQHandler() DUMMY;
void DMA2_Stream1_IRQHandler() DUMMY;
void DMA2_Stream2_IRQHandler() DUMMY;
void DMA2_Stream3_IRQHandler() DUMMY;
void DMA2_Stream4_IRQHandler() DUMMY;
void ETH_IRQHandler() DUMMY;
void ETH_WKUP_IRQHandler() DUMMY;
void CAN2_TX_IRQHandler() DUMMY;
void CAN2_RX0_IRQHandler() DUMMY;
void CAN2_RX1_IRQHandler() DUMMY;
void CAN2_SCE_IRQHandler() DUMMY;
void OTG_FS_IRQHandler() DUMMY;
void DMA2_Stream5_IRQHandler() DUMMY;
void DMA2_Stream6_IRQHandler() DUMMY;
void DMA2_Stream7_IRQHandler() DUMMY;
void USART6_IRQHandler() DUMMY;
void I2C3_EV_IRQHandler() DUMMY;
void I2C3_ER_IRQHandler() DUMMY;
void OTG_HS_EP1_OUT_IRQHandler() DUMMY;
void OTG_HS_EP1_IN_IRQHandler() DUMMY;
void OTG_HS_WKUP_IRQHandler() DUMMY;
void OTG_HS_IRQHandler() DUMMY;
void DCMI_IRQHandler() DUMMY;
void CRYP_IRQHandler() DUMMY;
void HASH_RNG_IRQHandler() DUMMY;
void FPU_IRQHandler() DUMMY;


void (* const vectors[])(void) __attribute__ ((section (".isr_vector"))) = {
    &_stack_top,
    Reset_Handler,
	NMI_Handler,
	HardFault_Handler,
	MemManage_Handler,
	BusFault_Handler,
	UsageFault_Handler,
	0,
	0,
	0,
	0,
	SVCall_Handler,
	DebugMon_Handler,
	0,
	PendSV_Handler,
	SysTick_Handler,
	WWDG_IRQHandler,				// Window WatchDog
	PVD_IRQHandler,					// PVD through EXTI Line detection
	TAMP_STAMP_IRQHandler,			// Tamper and TimeStamps through the EXTI line
	RTC_WKUP_IRQHandler,			// RTC Wakeup through the EXTI line
	FLASH_IRQHandler,				// FLASH
	RCC_IRQHandler,					// RCC
	EXTI0_IRQHandler,				// EXTI Line0
	EXTI1_IRQHandler,				// EXTI Line1
	EXTI2_IRQHandler,				// EXTI Line2
	EXTI3_IRQHandler,				// EXTI Line3
	EXTI4_IRQHandler,				// EXTI Line4
	DMA1_Stream0_IRQHandler,		// DMA1 Stream 0
	DMA1_Stream1_IRQHandler,		// DMA1 Stream 1
	DMA1_Stream2_IRQHandler,		// DMA1 Stream 2
	DMA1_Stream3_IRQHandler,		// DMA1 Stream 3
	DMA1_Stream4_IRQHandler,		// DMA1 Stream 4
	DMA1_Stream5_IRQHandler,		// DMA1 Stream 5
	DMA1_Stream6_IRQHandler,		// DMA1 Stream 6
	ADC_IRQHandler,					// ADC1, ADC2 and ADC3s
	CAN1_TX_IRQHandler,				// CAN1 TX
	CAN1_RX0_IRQHandler,			// CAN1 RX0
	CAN1_RX1_IRQHandler,			// CAN1 RX1
	CAN1_SCE_IRQHandler,			// CAN1 SCE
	EXTI9_5_IRQHandler,				// External Line[9:5]s
	TIM1_BRK_TIM9_IRQHandler,		// TIM1 Break and TIM9
	TIM1_UP_TIM10_IRQHandler,		// TIM1 Update and TIM10
	TIM1_TRG_COM_TIM11_IRQHandler,	// TIM1 Trigger and Commutation and TIM11
	TIM1_CC_IRQHandler,				// TIM1 Capture Compare
	TIM2_IRQHandler,				// TIM2
	TIM3_IRQHandler,				// TIM3
	TIM4_IRQHandler,				// TIM4
	I2C1_EV_IRQHandler,				// I2C1 Event
	I2C1_ER_IRQHandler,				// I2C1 Error
	I2C2_EV_IRQHandler,				// I2C2 Event
	I2C2_ER_IRQHandler,				// I2C2 Error
	SPI1_IRQHandler,				// SPI1
	SPI2_IRQHandler,				// SPI2
	USART1_IRQHandler,				// USART1
	USART2_IRQHandler,				// USART2
	USART3_IRQHandler,				// USART3
	EXTI15_10_IRQHandler,			// External Line[15:10]s
	RTC_Alarm_IRQHandler,			// RTC Alarm (A and B) through EXTI Line
	OTG_FS_WKUP_IRQHandler,			// USB OTG FS Wakeup through EXTI line
	TIM8_BRK_TIM12_IRQHandler,		// TIM8 Break and TIM12
	TIM8_UP_TIM13_IRQHandler,		// TIM8 Update and TIM13
	TIM8_TRG_COM_TIM14_IRQHandler,	// TIM8 Trigger and Commutation and TIM14
	TIM8_CC_IRQHandler,				// TIM8 Capture Compare
	DMA1_Stream7_IRQHandler,		// DMA1 Stream7
	FSMC_IRQHandler,				// FSMC
	SDIO_IRQHandler,				// SDIO
	TIM5_IRQHandler,				// TIM5
	SPI3_IRQHandler,				// SPI3
	UART4_IRQHandler,				// UART4
	UART5_IRQHandler,				// UART5
	TIM6_DAC_IRQHandler,			// TIM6 and DAC1&2 underrun errors
	TIM7_IRQHandler,				// TIM7
	DMA2_Stream0_IRQHandler,		// DMA2 Stream 0
	DMA2_Stream1_IRQHandler,		// DMA2 Stream 1
	DMA2_Stream2_IRQHandler,		// DMA2 Stream 2
	DMA2_Stream3_IRQHandler,		// DMA2 Stream 3
	DMA2_Stream4_IRQHandler,		// DMA2 Stream 4
	ETH_IRQHandler,					// Ethernet
	ETH_WKUP_IRQHandler,			// Ethernet Wakeup through EXTI line
	CAN2_TX_IRQHandler,				// CAN2 TX
	CAN2_RX0_IRQHandler,			// CAN2 RX0
	CAN2_RX1_IRQHandler,			// CAN2 RX1
	CAN2_SCE_IRQHandler,			// CAN2 SCE
	OTG_FS_IRQHandler,				// USB OTG FS
	DMA2_Stream5_IRQHandler,		// DMA2 Stream 5
	DMA2_Stream6_IRQHandler,		// DMA2 Stream 6
	DMA2_Stream7_IRQHandler,		// DMA2 Stream 7
	USART6_IRQHandler,				// USART6
	I2C3_EV_IRQHandler,				// I2C3 event
	I2C3_ER_IRQHandler,				// I2C3 error
	OTG_HS_EP1_OUT_IRQHandler,		// USB OTG HS End Point 1 Out
	OTG_HS_EP1_IN_IRQHandler,		// USB OTG HS End Point 1 In
	OTG_HS_WKUP_IRQHandler,			// USB OTG HS Wakeup through EXTI
	OTG_HS_IRQHandler,				// USB OTG HS
	DCMI_IRQHandler,				// DCMI
	CRYP_IRQHandler,				// CRYP crypto
	HASH_RNG_IRQHandler,			// Hash and Rng
	FPU_IRQHandler,					// FPU
};

__attribute__((__noreturn__)) static inline void NVIC_Reset_MCU(void)
{
	__asm volatile ("dmb 0xF":::"memory");	/* Ensure all outstanding memory accesses included
											buffered write are completed before reset */

	*(volatile unsigned int *)0xE000ED0C  = (unsigned int)((0x5FAUL << 16U) | 
											(*(volatile unsigned int *)0xE000ED0C & (7U << 8U)) | 
											(1UL << 2U) ); /* Keep priority group unchanged */

	__asm volatile ("dmb 0xF":::"memory"); /* Ensure completion of memory access */

	for(;;) /* wait until reset */
	{
		__asm volatile ("nop");
	}
}

void Reset_Handler(void)
{
    unsigned int *src, *dst;

	SystemInit();

    //copy .data section from flash to RAM
    src = &_etext;
    dst = &_sdata;
    while (dst < &_edata) *dst++ = *src++;

    //zero-initialize .bss section
    dst = &_sbss;
    while (dst < &_ebss) *dst++ = 0;

	__libc_init_array();

    main();

    NVIC_Reset_MCU(); //if main returns, reset MCU 

}

void Default_Handler()
{
	NVIC_Reset_MCU(); //if in undefined interrupt handler, reset MCU
}
