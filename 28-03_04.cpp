#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	char nome[120];
	
	//printf("\n Digite seu Nome: ");
    //gets(nome);
    
    strcpy(nome,"Mara Maravilha");

printf ("\n Nome é: %s", nome);

if(strcmp(nome,"xuxa")==0){
		puts("\n Acertou!");
		}

	else{
		puts("\n Errou!");
	}
}
	
	
	
		


