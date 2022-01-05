/*
aula:		3 	
Finalidade:	Solicitar ao usuário um número, de 1 a 12. Em seguida, exibir quantos dias o mês possui.
			Nota: Consideraremos o mês de Fevereiro com apenas 28 dias.

*/
#include <stdio.h>
#include <locale.h>

main()
{
  setlocale(LC_ALL, "Portuguese");
  int mes, dias;
 
  puts(" *** Verificando o dia do mês! ***");
  
  printf("\n Digite um número de 1 a 12: \t  ");
  scanf("%d",&mes);
  
    //Resolução 1:
    if (mes == 1) {dias=31;}
	if (mes == 2) {dias=28;} 
	if (mes == 3) {dias=31;}
	if (mes == 4) {dias=30;}
	if (mes == 5) {dias=31;}
	if (mes == 6) {dias=30;}
	if (mes == 7) {dias=31;}
	if (mes == 8) {dias=31;}
	if (mes == 9) {dias=30;}
	if (mes == 10) {dias=31;}
	if (mes == 11) {dias=30;}
	if (mes == 12) {dias=31;}
  
	printf("Solução 1: O mês %d possui %d dias. \n",mes,dias);
 
	//Resolução 2:
	if (mes == 2)
	{
		dias = 28;
	}
	else
	{
	 if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
		dias = 30;
	 else
		dias = 31;
	}
	
	printf("Solução 2: O mês %d possui %d dias. \n",mes,dias);
}
