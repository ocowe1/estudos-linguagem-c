#include <stdio.h>
#include <locale.h>
#include <math.h>	 //Biblioteca para utilizarmos a função POW
#include <stdlib.h>	 //Biblioteca necessária para utilizarmos os comandos do "system"

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//Declaração de variáveis
	float altura, peso, IMC;
	char sexo;
	
	//Solicitação dos dados para o usuário
	printf("\n ***** CALCULO DO ÍNDICE DE MASSA CORPORAL (IMC) *****\n\n");
	
	printf("\n Digite o seu sexo [M/F]: ");
	scanf("%s", &sexo);
	
	printf("\n Digite sua altura (m): ");
	scanf("%f", &altura);
	
	printf("\n Digie o seu peso (kg): ");
	scanf("%f", &peso);
	
	//Realiza o cálculo da operação
	IMC=peso/pow(altura,2);
	
	//Limpa a tela
	system("cls");
	
	//Exibe os dados para o usuário
	printf("\n \n EXIBINDO O RELATÓRIO FINAL \n\n");
	printf("\n SEXO: 		%c", sexo);
	printf("\n ALTURA (M): 	%.2f",altura);
	printf("\n PESO  (KG): 	%.2f",peso);
	printf("\n \n Valor do IMC: %.2f",IMC);
	
	//Realiza a estrutura de decisão
	printf("\n Sua condição perante o IMC é: ");
	switch(sexo)
	{
		case 'm':
		case 'M':
			if(IMC < 20.7){
				printf("Abaixo do peso");
			}
			else if (IMC > 20.7 && IMC <= 26.4){
				printf("Peso normal");
			}
			else if (IMC > 26.4 && IMC <= 27.8){
				printf("Sobrepeso");
			}
			else if (IMC > 27.8 && IMC <= 31.1){
				printf("Acima do peso ideal");
			}
			else{
				printf("Obeso");
			}
		break;
		case 'f':
		case 'F':
			if(IMC < 19.1){
				printf("Abaixo do peso");
			}
			else if (IMC > 19.1 && IMC <= 25.8){
				printf("Peso normal");
			}
			else if (IMC > 25.8 && IMC <= 27.3){
				printf("Sobrepeso");
			}
			else if (IMC > 32.3 && IMC <= 32.3){
				printf("Acima do peso ideal");
			}
			else{
				printf("Obeso");
			}
		break;
		default: printf("\n O sexo informando não permite verificar a condição do IMC. Tente digitar [M/F]...");
	}
}
