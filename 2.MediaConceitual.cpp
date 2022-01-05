#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
	/*Alterado o idioma para o portugues */
	setlocale(LC_ALL,"Portuguese");
	
	/*Declara��o das vari�veis */
	float notaP1, notaP2, media;
	char mediaConceito;
	
	/*Solicita��o dos dados ao usu�rio. */
	printf("\n Digite a nota da PRIMEIRA avalia��o: ");
	scanf("%f",&notaP1);
	
	printf("\n Digite a nota da SEGUNDA avalia��o: ");
	scanf("%f",&notaP2);

	/* 
		Este comando serve para limpar a tela do computador 
		Todos os dados exibidos anteriormente, ser�o apagados!!!
	*/
	system("cls");	
	
	/*Realiza a c�lculo da m�dia*/
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

	//Exibe os dados para o usu�rio
	printf("\n A sua m�dia final �: %.2f",media);
	printf("\n O seu conceito foi : %c",mediaConceito);
	
	//Realiza a verifica��o do conceito
	switch(mediaConceito)
	{
		case 'A': 
		case 'B': 
		case 'C': 
		case 'D': printf("\n Parab�ns, voc� foi APROVADO! ");  break;
		case 'E': printf("\n Infelizmente, voc� foi REPROVADO. "); break;
		default: printf("\n Conceito n�o informado!!");
	}
}
