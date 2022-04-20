obj-m += hello.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
	rm *.o *.symvers *.order *.mod.c

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

insmod:
	sudo insmod ./HelloKernel.ko

rmmod:
	sudo rmmod HelloKernel-3

showmessage:
	cat /var/log/syslog
