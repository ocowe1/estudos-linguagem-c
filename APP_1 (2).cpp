#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	
	char conjuge, plano_saude, planoodonto;	
	char colaborador[120];
	float horatrabalhada, valorhora, quantfilhos;
	float salariobruto, inss, irrf, planosaude;
	int matricula, idade;
	
	
	puts("\n**EMPRESA ESAMC S/A**");
	puts("\n------------------------------");
	
	printf("\nColaborador..........: ");
	gets(colaborador);
	printf("\nMatr?cula............: ");
	scanf(" %i",&matricula);	
	printf("\nHoras Trabalhadas....: ");
	scanf(" %f",&horatrabalhada);
	printf("\nValor da Hora........: ");
	scanf(" %f",&valorhora);
	
	printf("\nQuantidade de filhos.: ");
	scanf(" %f",&quantfilhos);
		if(quantfilhos==1){
		printf("\nDigite a idade...: ");
		scanf(" %i",&idade);
	}
	else if(quantfilhos==2){
		printf("\nDigite a idade...: ");
		scanf(" %i",&idade);		
	}
	else if(quantfilhos==3){
		printf("\nDigite a idade...: ");
		scanf(" %i",&idade);		
	}
	
	printf("\nC?njuge..............: ");
	scanf(" %c",&conjuge);
	printf("\nPlano de sa?de.......: ");
	scanf(" %c",&plano_saude);
	printf("\nPlano Odontol?gico...: ");
	scanf(" %c",&planoodonto);
	
	fflush(stdin);
	
	puts("\n------------------------------");
	
	system("pause");
	
	system("cls");
	
	puts("\n** EMPRESA ESAMC S/A **");
	puts("\nRelat?rio Mensal:");
	puts("\n------------------------------");
	puts("\nDados do Colaborador")	;
	puts("\n------------------------------");
	
	printf("\nColaborador..........: %s", colaborador);
	printf("\nMatr?cula............: %i", matricula);
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
			printf("\nDesnto IRRF.......: R$.2f", irrf=salariobruto*0.15);
		}
		else if(salariobruto>2625.12){
			printf("\nDesconto IRRF....: R$.2f", irrf=salariobruto*27.5);
		}
	
	//Plano de sa?de - calculos
	
		if(planosaude=='s' && conjuge=='s' && quantfilhos==1){
			printf("\nDesconto Plano de Sa?de......: R$.2f", planosaude=80.90+65.90);
		}
		else if(planosaude=='s' && conjuge=='s' && quantfilhos==0){
			printf("\nDesconto Plano de Sa?de......: R$.2f", planosaude=80.90);
		}
		else if(planosaude=='s' && conjuge=='s' && quantfilhos==2){
			printf("\nDesconto Plano de Sa?de......: R$.2f", planosaude=80.90+(65.90*2));
		}
		else if(planosaude=='s' && conjuge=='s' && quantfilhos==3){
			printf("\nDesconto Plano de Sa?de......: R$.2f", planosaude=80.90+(65.90+3));
		}
				else if(planosaude=='s' && conjuge=='n' && quantfilhos==0){
			printf("\nDesconto Plano de Sa?de......: R$.2f", planosaude=21.90);			
		}
		else if(planosaude=='s' && conjuge=='n' && quantfilhos==1){
			printf("\nDesconto Plano de Sa?de......: R$.2f", planosaude=65.90);			
		}
		else if(planosaude='s' && conjuge=='n' && quantfilhos==2){
			printf("\nDesconto Plano de Sa?de......: R$.2f", planosaude=65.90*2);			
		}
		else if(planosaude=='s' && conjuge=='n' && quantfilhos==3){
			printf("\nDesconto Plano de Sa?de......: R$.2f", planosaude=65.90*3);			
		} 
		
	//Plano Odontol?gico - calculos
		if(planoodonto=='s' && conjuge=='s' && quantfilhos==0){
			printf("\nDesconto Plano Odontol?gico..: R$.2f", planoodonto=35.00);
		}
		else if(planoodonto=='s' && conjuge=='n' && quantfilhos==0){
			printf("\nDesconto Plano Odontol?gico..: R$.2f", planoodonto=40.00);			
		}
		else if(planoodonto=='s' && conjuge=='s' && quantfilhos==1){
			printf("\nDesconto Plano Odontol?gico..: R$.2f", planoodonto=(35-5)+(40-5));
		}
		else if(planoodonto=='s' && conjuge=='s' && quantfilhos==2){
			printf("\nDesconto Plano Odontol?gico..: R$.2f", planoodonto=(35-5)+(40-5)+(40-5));			
		}
		else if(planoodonto=='s' && conjuge=='s' && quantfilhos==3){
			printf("\nDesconto Plano Odontol?gico..: R$.2f", planoodonto=(35-5)+(40-5)+(40-5)+(40-5));			
		}
		else if(planoodonto=='s' && conjuge=='n' && quantfilhos==1){
			printf("\nDesconto Plano Odontol?gico..: R$.2f", planoodonto=(40-5)+(40-5));		
		}
		else if(planoodonto=='s' && conjuge=='n' && quantfilhos==2){
			printf("\nDesconto Plano Odontol?gico..: R$.2f", planoodonto=(40-5)+(40-5)+(40-5));	
		}
		else if(planoodonto=='s' && conjuge=='n' && quantfilhos==3){
			printf("\nDesconto Plano Odontol?gico..: R$.2f", planoodonto=(40-5)+(40-5)+(40-5)+(40-5));				
		}		
	
	puts("\n------------------------------");		
	puts("\nVantagens");
	puts("\n------------------------------");		
	
		
	

}
