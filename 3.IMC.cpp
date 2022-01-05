#include <stdio.h>
#include <locale.h>
#include <math.h> 
#include <stdlib.h>	 

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char nome[90];
	float altura, peso, IMC;
	
	printf("\n ***** CALCULO DO ÍNDICE DE MASSA CORPORAL (IMC) *****\n\n");
	
	printf("\n Nome do Paciente:\t");
	gets(nome);
	
	printf("\n Digite sua altura (m):\t");
	scanf("%f", &altura);
	
	printf("\n Digie o seu peso (kg):\t");
	scanf("%f", &peso);
	
	//Realiza o cálculo da operação
	IMC=peso/pow(altura,2);
	
	//Limpa a tela
	system("cls");
	
	//Exibe os dados para o usuário
	puts("\n \n *** RELATÓRIO FINAL *** \n\n");
	
	printf("\n Nome....: %s", nome);
	printf("\n Altura..: %.2f metros",altura);
	printf("\n Peso....: %.2f quilos",peso);
	printf("\n IMC.....: %.2f",IMC);
	
	//Realiza a estrutura de decisão
	printf("\n Sua condição perante o IMC é: ");
	
	if(IMC < 16){
			printf("Baixo peso Grau III");
		}
		else if (IMC >= 16 && IMC < 17){
			printf("Baixo peso Grau II");
		}
		else if (IMC > 17 && IMC <= 18.49){
			printf("Baixo peso Grau I");
		}
		else if (IMC >= 18.5 && IMC < 25){
			printf("Peso ideal");
		}
		else if (IMC > 24 && IMC < 30){
			printf("Sobrepeso");
		}
		else if (IMC > 29 && IMC < 35){
			printf("Obesidade Grau I");
		}
		else if (IMC > 34 && IMC < 40){
			printf("Obesidade Grau II");
		}
		else{
			printf("Obesidade Grau III");
		}

}
