/* 
Exerc�cio:		3 	
Finalidade:		Fa�a um algoritmo para calcular a �rea do Tri�ngulo. 
				Em seguida, Exiba o resultado na tela. 
				Solicite ao usu�rio o valor da base, em seguida, o valor da altura. 
				Formula:  �rea = ( Base * Altura ) / 2
				Exiba os seguintes dados:
				a.	C�lculo da �rea do Tri�ngulo
				b.	Digite o valor da base: 
				c.	Digite o valor da altura: 
				c.	O Valor da �rea do Tri�ngulo �: XX,X
				d.	Programa finalizado!
*/

#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float base, altura, areaTriangulo;
	
	printf("\n C�lculo da �rea do Tri�ngulo \n");
	
	printf("\n Digite o valor da base: \t");
	scanf("%f",&base);

	printf("\n Digite o valor altura: \t");
	scanf("%f",&altura);

	areaTriangulo = (base * altura) /2 ;

	printf("\n A �rea do Tri�ngulo �: \t %.1f \n", areaTriangulo);
	
	printf("\n Programa Finalizado! \n");
	system("pause");
}


