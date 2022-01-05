/* 
Exercício:		2 	
Finalidade:		Faça um algoritmo para calcular a área do Retângulo. 
				Em seguida, Exiba o resultado na tela. 
				Solicite ao usuário o valor da base, em seguida, o valor da altura. 
				Formula:  Area =  Base * Altura
				Exiba os seguintes dados:
				a.	Cálculo da área do Retângulo
				b.	Digite o valor da base: 
				c.	Digite o valor da altura: 
				c.	O Valor da Área do Retângulo é: XX,X
				d.	Programa finalizado!
*/

#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float base, altura, areaRetangulo;
	
	printf("\n Cálculo da área do Retângulo \n");
	
	printf("\n Digite o valor da base: \t");
	scanf("%f",&base);

	printf("\n Digite o valor altura: \t");
	scanf("%f",&altura);

	areaRetangulo = base * altura;

	printf("\n A área do Retângulo é: \t %.1f \n", areaRetangulo);
	
	printf("\n Programa Finalizado! \n");
	system("pause");
}


