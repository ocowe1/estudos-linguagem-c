#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	char sair;
	int opt;
	float n1, n2, result;
		
	do{
		system("cls");
		fflush(stdin);
		puts("Calculadora Tabajara 1.0");
		puts("\n MENU:");
		puts("\n A - [+]");
		puts("\n B - [-]");
		puts("\n C - [*]");
		puts("\n D - [/]");
		
		do{
		printf("\n Digite uma opção: ");
		opt = getchar();
		fflush(stdin);
	}while(opt!='a' && opt!='b' && opt!='c' && opt!='d');
		
		printf("\n Informe N1: "); scanf(" %f",&n1);
		printf("\n Informe N2: "); scanf(" %f",&n2);
		
	
		switch(opt){
			case 'A': case 'a': 
			result= n1+n2; break;
			case 'B': case 'b':
			result= n1-n2; break;
			case 'C': case 'c':
			result= n1*n2; break;
			case 'D': case 'd':
			result= n1/n2; break;
			
		}
		printf("\n\n\n Resultado = %.2f", result);		
		printf("\n\n <S> para sair...: ");
		fflush(stdin);	
		sair = getchar();
	}while(sair!='S' && sair!='s');
}
