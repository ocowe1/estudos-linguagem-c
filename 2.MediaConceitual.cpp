#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
	/*Alterado o idioma para o portugues */
	setlocale(LC_ALL,"Portuguese");
	
	/*Declaração das variáveis */
	float notaP1, notaP2, media;
	char mediaConceito;
	
	/*Solicitação dos dados ao usuário. */
	printf("\n Digite a nota da PRIMEIRA avaliação: ");
	scanf("%f",&notaP1);
	
	printf("\n Digite a nota da SEGUNDA avaliação: ");
	scanf("%f",&notaP2);

	/* 
		Este comando serve para limpar a tela do computador 
		Todos os dados exibidos anteriormente, serão apagados!!!
	*/
	system("cls");	
	
	/*Realiza a cálculo da média*/
	media = (notaP1 + notaP2) /2;
	
	if(media > 0 && media <=2)
	{
		mediaConceito = 'E';
	}
	else if(media >2 && media <=4)
	{
		mediaConceito = 'D';
	}
	else if(media >4 && media <=6) 
	{
		mediaConceito = 'C';
	}
	else if (media >6 && media <=8)
	{
		mediaConceito = 'B';
	}
	else 
	{
		mediaConceito = 'A';
	}

	//Exibe os dados para o usuário
	printf("\n A sua média final é: %.2f",media);
	printf("\n O seu conceito foi : %c",mediaConceito);
	
	//Realiza a verificação do conceito
	switch(mediaConceito)
	{
		case 'A': 
		case 'B': 
		case 'C': 
		case 'D': printf("\n Parabéns, você foi APROVADO! ");  break;
		case 'E': printf("\n Infelizmente, você foi REPROVADO. "); break;
		default: printf("\n Conceito não informado!!");
	}
}
