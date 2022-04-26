# Loadable_Kernel_Module #
Embedded Operating System Assigment
Department of Electrical and Information Engineering UGM

Main reference:
https://github.com/reshalfahsi/raspberrypi-development/tree/master/kernelmodule

## Execution Steps ##
### Remove previous directory and file if It is exist (*optional*) ###
$ make clean

$ make rmmod

$ make rmnod

### Compilation of ".C" program ###
$ make all

### Instalation of ".ko" module ###
$ make insmod

$ dmesg 

*make sure the number of "mknod" command on "Makefile" have the same value as the assigned major number*

$ make mknod

### Compilation and testing of application program ###
$ cd app

$ make clean

$ make all

$ make run
