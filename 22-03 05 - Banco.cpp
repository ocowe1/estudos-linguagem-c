#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	int opt;
	float saldo = 3000,dep,saq;
	char sair;
	
	do{
	puts("Banco da XUXA");
	
	puts("\n 1 - SAQUE");
	puts("\n 2 - DEP�SITO");
	puts("\n 3 - SALDO");
	puts("\n 4 - SAIR");
	
	
	printf("\n\n Digite uma op��o: "); scanf("%i", &opt);
	 
	system("cls");
	 
	switch(opt){
		
		system("cls");
				 
		case 1: printf("\n Digite o valor de saque: "); 
				scanf(" %f",&saq);
				saldo= saldo-saq;
				printf("\n Saque conclu�do, saldo atual = %.2f", saldo); break;
		
		case 2: printf("\n Digite o valor do dep�sito: ");
				scanf(" %f",&dep);
				saldo= dep+saldo;
				printf("\n Dep�sito conclu�do, saldo atual = %.2f", saldo); break;
				
		case 3: printf("\n Seu saldo � %.2f", saldo); break;
		
		case 4: sair='s'; break;
		system("pause");
		
		
	
	
 }
 	if(sair='N'){
	 
 	printf("\n\n  <N> Se n�o deseja continuar...:");
	fflush(stdin);
	sair = getchar();
}
}while(sair!='n' && sair!='N');
}

