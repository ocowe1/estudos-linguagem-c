#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	
	puts("Programa da Xuxa");
	
	char letra;	int total=0;
	
	printf("\n\n letra = %c \n\n ", letra);
	
	do{
		
		printf("\n\n Digite a letra: ");
		scanf(" %c",&letra);
		total++;
	
		
	}while(letra!='x');
	printf("\n\n TENTATIVAS = %i", total);
	/*
	while(letra!='x'){
		printf("\n\n Digite a letra: ");
		scanf(" %c",&letra);
		
	}
	
	puts("ACERTOU!");
    */
}

	
	
	
	
	
	
	
	
	
	
	
	
	

