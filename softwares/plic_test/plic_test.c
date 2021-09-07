#include "gpio.h"
#include "trap.h"
#include "plic.h"
#include "platform.h"
#include "pwm.h"

// uint32_t state ;

// void handle_button_press(__attribute__((unused)) uint32_t num);


// void handle_button_press(__attribute__((unused)) uint32_t num)
// {
//  state = gpio_read_pin(23);
//  	if(state == 1){
// 		gpio_direct_write_enable(5);
// 		gpio_direct_write(5, 1);
		
// 	} 

// 	// 		asm volatile("li      t0, 1\t\n"
// 	// 	     "slli t0, t0, 23\t\n"
// 	// 	    );

// 	// // Enable Local (PLIC) interrupts.
// 	// asm volatile("li      t1, 0x400c0000\t\n"
// 	// 	     "sw t0, 0x0(t1)\t\n"
// 	// 	    );
//  }



int main(void){
while(1)
{
	// gpio_intr_enable(23);
	// gpio_intr_type(23);
	// // gpio_intr_test(23);

	// plic_init(24, 0);

	// isr_table[24] = handle_button_press;

		// gpio_direct_write_enable(5);
		// gpio_direct_write(5, 0);
	
	// PWM_DUTYCYCLE(1,20);
	// PWM_DUTYCYCLE(2,20);
// while(1)
// {
	digital_write(14/2, 1);
		
	delay(2000000);
	digital_write(6*2, 1);
	delay(2000000);
// }
	// gpio_direct_write_enable(3);
	// gpio_direct_write(3, 1);

	// delay(200000);

	// gpio_direct_write_enable(4);
	// gpio_direct_write(4, 1);

	// delay(2000);

	// gpio_direct_write_enable(5);
	// gpio_direct_write(5, 1);

	// delay(200000);

	// gpio_direct_write_enable(6);
	// gpio_direct_write(6, 1);

	// delay(2000);

	// gpio_direct_write_enable(7);
	// gpio_direct_write(7, 1);

	// delay(200000);
	// 	gpio_direct_write_enable(8);
	// gpio_direct_write(8, 1);

	// delay(2000);

	// gpio_direct_write_enable(9);
	// gpio_direct_write(9, 1);

	// delay(200000);

	

	// Enable Global (PLIC) interrupts.
	asm volatile("li      t0, 8\t\n"
		     "csrrs   zero, mstatus, t0\t\n"
		    );

	// Enable Local (PLIC) interrupts.
	asm volatile("li      t0, 0x800\t\n"
		     "csrrs   zero, mie, t0\t\n"
		    );

}

	return 0;
}