/* 
Exerc�cio:		2 	
Finalidade:		Fa�a um algoritmo para calcular a �rea do Ret�ngulo. 
				Em seguida, Exiba o resultado na tela. 
				Solicite ao usu�rio o valor da base, em seguida, o valor da altura. 
				Formula:  Area =  Base * Altura
				Exiba os seguintes dados:
				a.	C�lculo da �rea do Ret�ngulo
				b.	Digite o valor da base: 
				c.	Digite o valor da altura: 
				c.	O Valor da �rea do Ret�ngulo �: XX,X
				d.	Programa finalizado!
*/

#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float base, altura, areaRetangulo;
	
	printf("\n C�lculo da �rea do Ret�ngulo \n");
	
	printf("\n Digite o valor da base: \t");
	scanf("%f",&base);

	printf("\n Digite o valor altura: \t");
	scanf("%f",&altura);

	areaRetangulo = base * altura;

	printf("\n A �rea do Ret�ngulo �: \t %.1f \n", areaRetangulo);
	
	printf("\n Programa Finalizado! \n");
	system("pause");
}


