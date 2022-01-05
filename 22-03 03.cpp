#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	
	char letra;	
	int total=0;
		
	do{
		
		printf("\n\n Digite a letra: ");
		total++;
		//limpa memória do teclado.
		fflush(stdin);
	}while(getchar() != 'x');
	printf("\n\n TENTATIVAS = %i", total);
	
	/*
	while(letra!='x'){
		printf("\n\n Digite a letra: ");
		scanf(" %c",&letra);
		
	}
	
	puts("ACERTOU!");
    */
}

	
	
	
	
	
	
	
	
	
	
	
	
	

