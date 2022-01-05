#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char senha[10];
	int tent;
	
	puts("\n *** Verificação de Senha *** \n");
	
	for(tent=1;tent<4;tent++){
		system("cls");
		for(senha=10;senha<11;senha++)
		printf("\n Digite Sua Senha: ");
		gets(senha);
		if(strcmp(senha,"xuxa")==0){
		puts("Senha válida!");
		break;
		}
		else{
			puts("Senha inválida!");
			printf("\n Resta(m) %i tentativa(s)\n \n", 3-tent);
			if(tent==3){
				printf("Senha BLOQUEADA!");
				break;
			}
		
		}
		system("pause");
}

puts("\n\n <FIM DO PROGRAMA>");

	}
