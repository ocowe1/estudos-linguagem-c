#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	
	//int x;
	
	for(int x=0;x<=10;x+=2){
		printf("\n %i - Xuxa eu te amo!",x);
	}
}
