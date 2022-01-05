#include <stdio.h>
#include <locale.h>
#include <math.h>	 //Biblioteca para utilizarmos a fun��o POW
#include <stdlib.h>	 //Biblioteca necess�ria para utilizarmos os comandos do "system"

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//Declara��o de vari�veis
	float altura, peso, IMC;
	char sexo;
	
	//Solicita��o dos dados para o usu�rio
	printf("\n ***** CALCULO DO �NDICE DE MASSA CORPORAL (IMC) *****\n\n");
	
	printf("\n Digite o seu sexo [M/F]: ");
	scanf("%s", &sexo);
	
	printf("\n Digite sua altura (m): ");
	scanf("%f", &altura);
	
	printf("\n Digie o seu peso (kg): ");
	scanf("%f", &peso);
	
	//Realiza o c�lculo da opera��o
	IMC=peso/pow(altura,2);
	
	//Limpa a tela
	system("cls");
	
	//Exibe os dados para o usu�rio
	printf("\n \n EXIBINDO O RELAT�RIO FINAL \n\n");
	printf("\n SEXO: 		%c", sexo);
	printf("\n ALTURA (M): 	%.2f",altura);
	printf("\n PESO  (KG): 	%.2f",peso);
	printf("\n \n Valor do IMC: %.2f",IMC);
	
	//Realiza a estrutura de decis�o
	printf("\n Sua condi��o perante o IMC �: ");
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
		default: printf("\n O sexo informando n�o permite verificar a condi��o do IMC. Tente digitar [M/F]...");
	}
}
