#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	
	char conjuge, planosaude, planoodonto;	
	char colaborador[120];
	float horatrabalhada;
	float valorhora, quantfilhos, saude, odonto, salariobruto, salarioliquido, inss, irrf;
	int matricula, opt;
	
	do{
	system("cls");
	puts("\n**EMPRESA ESAMC S/A**");
	puts("\n------------------------------");
	
	printf("\nColaborador..........: ");
	gets(colaborador);
	printf("\nMatrícula............: ");
	scanf("%i",&matricula);	
	
	do{
	printf("\nHoras Trabalhadas....: ");
	scanf("%f",&horatrabalhada);
	puts("\nHorario valido, apenas entre 50 e 200 horas!\n");
	system("pause");
	system("cls");
	}while(horatrabalhada<=50 || horatrabalhada>=200);


	printf("\nValor da Hora........: ");
	scanf(" %f",&valorhora);
	printf("\nQuantidade de filhos.: ");
	scanf(" %f",&quantfilhos);
	printf("\nCônjuge..............: ");
	scanf(" %c",&conjuge);
	printf("\nPlano de saúde.......: ");
	scanf(" %c",&planosaude);
	printf("\nPlano Odontológico...: ");
	scanf(" %c",&planoodonto);
	
	fflush(stdin);
	
	puts("\n------------------------------");
	
	system("pause");
	
	system("cls");
	
	puts("\n** EMPRESA ESAMC S/A **");
	puts("\nRelatório Mensal:");
	puts("\n------------------------------");
	puts("\nDados do Colaborador")	;
	puts("\n------------------------------");
	
	printf("\nColaborador..........: %s", colaborador);
	printf("\nMatrícula............: %i", matricula);
	puts("\n------------------------------");
	puts("\nDescontos");
	puts("\n------------------------------");
	salariobruto=(horatrabalhada*valorhora);
	
	//INSS - calculos
	
		if(salariobruto<=1174.86){
		printf("\nDesconto INSS........: R$%.2f", inss=salariobruto*0.08);
	}
		else if(salariobruto>1174.86 && salariobruto<=1958.10){
		printf("\nDesconto INSS........: R$%.2f", inss=salariobruto*0.09);
	}
		else if(salariobruto>1958.11 && salariobruto<=3916.20){
		printf("\nDesconto INSS........: R$%.2f", inss=salariobruto*0.11);
	}
		else if(salariobruto>3916.20){
		printf("\nDesconto INSS........: R$%.2f", inss=salariobruto-430.78);
	}
	
	//IRRF - calculos
		if(salariobruto<=1313.69){
			printf("\nDesconto IRRF....: Isento");
		}
		else if(salariobruto>1313.69 && salariobruto<=2625.12){
			printf("\nDesconto IRRF.......: R$%.2f", irrf=197.05);
		}
		else if(salariobruto>2625.12){
			printf("\nDesconto IRRF....: R$%.2f", irrf=525.19);
		}
	
	//Plano de saúde - calculos
	
		if(planosaude=='s' && conjuge=='s' && quantfilhos==1){
			printf("\nDesconto Plano de Saúde......: R$%.2f", saude=21.90+80.90+65.90);
		}
		else if(planosaude=='s' && conjuge=='s' && quantfilhos==0){
			printf("\nDesconto Plano de Saúde......: R$%.2f", saude=21.90+80.90);
		}
		else if(planosaude=='s' && conjuge=='s' && quantfilhos==2){
			printf("\nDesconto Plano de Saúde......: R$%.2f", saude=21.90+80.90+(65.90*2));
		}
		else if(planosaude=='s' && conjuge=='s' && quantfilhos==3){
			printf("\nDesconto Plano de Saúde......: R$%.2f", saude=21.90+80.90+(65.90+3));
		}
		else if(planosaude=='s' && conjuge=='n' && quantfilhos==0){
		printf("\nDesconto Plano de Saúde......: R$%.2f", saude=21.90);			
		}
		else if(planosaude=='s' && conjuge=='n' && quantfilhos==1){
			printf("\nDesconto Plano de Saúde......: R$%.2f", saude=21.90+65.90);			
		}
		else if(planosaude='s' && conjuge=='n' && quantfilhos==2){
			printf("\nDesconto Plano de Saúde......: R$%.2f", saude=21.90+65.90*2);			
		}
		else if(planosaude=='s' && conjuge=='n' && quantfilhos==3){
			printf("\nDesconto Plano de Saúde......: R$%.2f", saude=21.90+65.90*3);			
		} 
		
	//Plano Odontológico - calculos
		if(planoodonto=='s' && conjuge=='s' && quantfilhos==0){
			printf("\nDesconto Plano Odontológico..: R$%.2f", odonto=35.00);
		}
		else if(planoodonto=='s' && conjuge=='n' && quantfilhos==0){
			printf("\nDesconto Plano Odontológico..: R$%.2f", odonto=40.00);			
		}
		else if(planoodonto=='s' && conjuge=='s' && quantfilhos==1){
			printf("\nDesconto Plano Odontológico..: R$%.2f", odonto=35.00+5.00);
		}
		else if(planoodonto=='s' && conjuge=='s' && quantfilhos==2){
			printf("\nDesconto Plano Odontológico..: R$%.2f", odonto=35.00+(5.00*2));			
		}
		else if(planoodonto=='s' && conjuge=='s' && quantfilhos==3){
			printf("\nDesconto Plano Odontológico..: R$%.2f", odonto=35.00+(5.00*3));			
		}
		else if(planoodonto=='s' && conjuge=='n' && quantfilhos==1){
			printf("\nDesconto Plano Odontológico..: R$%.2f", odonto=40.00+5.00);		
		}
		else if(planoodonto=='s' && conjuge=='n' && quantfilhos==2){
			printf("\nDesconto Plano Odontológico..: R$%.2f", odonto=40.00+(5.00*2));	
		}
		else if(planoodonto=='s' && conjuge=='n' && quantfilhos==3){
			printf("\nDesconto Plano Odontológico..: R$%.2f", odonto=40.00+(5.00*3));				
		}		
	
	puts("\n------------------------------");		
	puts("\nSalário");
	puts("\n------------------------------");		
	printf("\nSalário Bruto..........: R$%.2f", salariobruto);
	printf("\nSalário Líquido........: R$%.2f\n", salarioliquido=salariobruto-inss-irrf-saude-odonto);
	
	puts("\nDeseja repetir?");
	printf("\n\n<ENTER> para repetir \n<n> para finalizar... ");
	fflush(stdin);	
	opt = getchar();
	}while(opt!='n');
		


}
