#include<stdio.h>
#include<LPC17xx.h>


void delay(int ms){
	volatile int i=0;
	ms = ms*10;
	for(;i<ms;i++);
}
void upcounterInterface(){
	int i=0;
	for(i=0;i<256;i++){
		LPC_GPIO0->FIOCLR = 0xFF<<4;
		LPC_GPIO0->FIOSET = (i & 0xFF)<<4;	
		delay(100000);
	}
}

void downcounterInterface(){
	int i=0;
	for(i=265;i>=0;i--){
		LPC_GPIO0->FIOCLR = 0xFF<<4;
		LPC_GPIO0->FIOSET = (i & 0xFF)<<4;
		delay(100000);
	}
}

int main(){
	int sw = 0;
	SystemInit();
	SystemCoreClockUpdate();
	LPC_PINCON->PINSEL0 = 1;
	LPC_GPIO0->FIODIR = 0xFF<<4;
	LPC_PINCON->PINSEL4 = 0;
	LPC_GPIO2->FIODIR = 0;
	while(1){
			sw = (LPC_GPIO2->FIOPIN) & (1<<12);
			if(sw){
				upcounterInterface();
			}
			else{
				downcounterInterface();
			}
	}
	return 0;
}

