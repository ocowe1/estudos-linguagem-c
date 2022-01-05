#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	
	float P1, P2, T1, T2;
	int faltas=0;
	
	
	puts("Cálculo da Média Programação II");
	
	
	printf("\n Digite a Nota da P1: ");
	scanf("%f", &P1);
	printf("\n Digite a Nota da P2: ");
	scanf("%f", &P2);
	
	printf("\n Digite a Nota da T1: ");
	scanf("%f", &T1);
	printf("\n Digite a Nota da T2: ");
	scanf("%f", &T2);

	
	printf("\n Digite Total de faltas: ");
	scanf("%i", &faltas);

	//Processamento de Dados de Lúcifer.
	
	float media;
	media = (P1*0.40) + (P2*0.30) + (T1*0.15) + (T2*0.15);
	
	//Fim do Processamento de Dados de Lúcifer
	
	
	system("cls");
	printf("\n\nMédia Final = %.1f", media);
	printf("\nTotal de Faltas = %i \n", faltas);
			
			
	if(media>=7 && faltas<14){
	puts("\nAPROVADO");
	}
	
	
	else{
		
		if(faltas>=14 && media>=7){
		puts("\nREPROVADO POR FALTA");
	}
	
			else{

			if(media<7 && faltas<14){
			puts("\nREPROVADO POR NOTA");
						}
		
							else{
							puts("\nREPROVADO NOTA E FALTA");
							}
							
							}
							
						}
						
}
