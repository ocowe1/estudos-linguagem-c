/* 
Exercício:		3 	
Finalidade:		Faça um algoritmo para calcular a área do Triângulo. 
				Em seguida, Exiba o resultado na tela. 
				Solicite ao usuário o valor da base, em seguida, o valor da altura. 
				Formula:  Área = ( Base * Altura ) / 2
				Exiba os seguintes dados:
				a.	Cálculo da área do Triângulo
				b.	Digite o valor da base: 
				c.	Digite o valor da altura: 
				c.	O Valor da Área do Triângulo é: XX,X
				d.	Programa finalizado!
*/

#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float base, altura, areaTriangulo;
	
	printf("\n Cálculo da área do Triângulo \n");
	
	printf("\n Digite o valor da base: \t");
	scanf("%f",&base);

	printf("\n Digite o valor altura: \t");
	scanf("%f",&altura);

	areaTriangulo = (base * altura) /2 ;

	printf("\n A área do Triângulo é: \t %.1f \n", areaTriangulo);
	
	printf("\n Programa Finalizado! \n");
	system("pause");
}


