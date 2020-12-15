int main(void)
{
	//RccAhb1enr -> enable clock
	*(volatile unsigned int *)0x40023830 |= (1 << 3);

	//GpiodModeReg -> gp output mode
	*(volatile unsigned int *)0x40020C00 |= (1 << (2 * 15));

	while (1)
	{
		//GpiodDataReg 
		//LED on
		*(volatile unsigned int *)0x40020C14 |= (1 << 15);
		for(int i = 0; i < 1000000; i++);

		//LED off
		*(volatile unsigned int *)0x40020C14 &= ~(1 << 15);
		for(int i = 0; i < 1000000; i++);
	}
}
