/*  
 *  hello-3.c - Illustrating the __init, __initdata and __exit macros.
 */
#include <linux/module.h>	/* Needed by all modules */
#include <linux/kernel.h>	/* Needed for KERN_INFO */
#include <linux/init.h>		/* Needed for the macros */

//static int hellokernel_data __initdata = 3;

static int __init hellokernel_init(void){
	printk(KERN_INFO "Nama \n")//, hellokernel_data);
	return 0;
}

static void __exit hellokernel_exit(void){
	printk(KERN_INFO "NIM \n");
}

module_init(hellokernel_init);
module_exit(hellokernel_exit);
