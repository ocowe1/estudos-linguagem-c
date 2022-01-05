#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	
	char letra;
	
	for(letra='a';letra<='z';letra++){
		printf ("\n Letra = %c", letra);
	}
	}
