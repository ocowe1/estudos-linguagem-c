#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	puts("\n ****** Programa do Mês ******");
	
	int mes;
	
	printf("Digite o Mês <01 a 12>   ");
	scanf("%i",&mes);
	
	switch(mes){
		case 2: puts("28 dias"); break;
		
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: puts("31 dias"); break;
		
		case 4 : case 6: case 9: case 11: puts("30 dias"); break;
		
		default: puts("mês inválido!");
	}
		}
