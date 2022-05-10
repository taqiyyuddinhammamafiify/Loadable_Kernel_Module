#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define device "/dev/HelloKernel"

//###########Old Version##########
//int i = 1;
//###########Old Version##########

int main() {
	FILE *fp;
	char buffer[256];
	char var;

	printf("Demo calling kernel module using character device driver\n");
	printf("Reading file %s...\n\n",device);
	printf("Press (1) and ENTER to show NAME\n");
	printf("Press (2) and ENTER to show NIM\n");
	printf("Press (Random Key) and ENTER to EXIT\n\n");
	printf("Your Command: ");
	scanf("%c", &var);
	
	switch(var){
	    case '1':
	        fp = fopen(device, "r");
		    if (fp == NULL){
	                printf("Can't open file %s\n", device);
	                return 0;
		    }
		    
		    fread(buffer, sizeof(buffer), 1, fp);
		    
		    if(strcmp(buffer, "Taqiyyuddin Hammam A\n") == 0){
		        printf("\n");
		        printf("NAME: %s\n", buffer);
		        fclose(fp);
		    }
		    
		    else{
		        printf("\n");
		        printf("Information is not ready, please try again. \n\n");
		    }
		    
		    fclose(fp);
		    return 0;
		    
	    case '2':
	        fp = fopen(device, "r");
		    if (fp == NULL){
	                printf("Can't open file %s\n", device);
	                return 0;
		    }
		    
		    fread(buffer, sizeof(buffer), 1, fp);
		    
		    if(strcmp(buffer, "18/431079/TK/47672\n") == 0){
		        printf("\n");
		        printf("NIM: %s\n", buffer);
		        fclose(fp);
		    }
		    
		    else{
		        printf("\n");
		        printf("Information is not ready, please try again. \n\n");
		    }
		    
		    fclose(fp);
		    return 0;
		    break;
		    
	    default:
	        printf("\n");
	        printf("Quitting process ...\n\n");   
	}
	
	//###########Old Version##########
	/*
        for(i; i<=2; i++){
          fp = fopen(device,"r");
	  if(fp == NULL) {
  		printf("Can't open file %s\n",device);
  		return 0;
	  }

          fread(buffer,sizeof(buffer),1,fp);
          if(i==1)printf("Nama: %s\n",buffer);
          if(i==2)printf("NIM : %s\n",buffer);        
 
          fclose(fp);
	}*/
	//###########Old Version##########
	
	return 0;
}
