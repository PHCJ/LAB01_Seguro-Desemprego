#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	char tipoBeneficio;
	bool teste;
	
	printf("Descubra se vo�� tem direito ao benef�cio do Seguro-Desemprego\n");
	printf("______________________________________________________________\n");
	do{	
		printf("\n  ******* Insira um dos n�meros abaixo para continuar *******\n");
		printf("______________________________________________________________");
		printf("\n %c 1 - Trabalhador Formal",272);
		printf("\n--------------------------------------------------------------");
		printf("\n %c 2 - Bolsa de Qualifica��o(licen�a n�o-remunerada)",272);
		printf("\n--------------------------------------------------------------");
		printf("\n %c 3 - Empregado Dom�stico",272);
		printf("\n--------------------------------------------------------------");
		printf("\n %c 4 - Pescador Artesanal",272);
		printf("\n--------------------------------------------------------------");
		printf("\n %c 5 - Trabalhador Resgatado (escravid�o)",272);
		printf("\n--------------------------------------------------------------");
		printf("\n %c 6 - Nenhuma das op��es\n",272);
		printf("______________________________________________________________\n");
		scanf("%d",&tipoBeneficio);
		system("clear||cls");
		switch(tipoBeneficio){
			teste=false;
			case 1:
				printf("Voc� escolheu: %d",tipoBeneficio);
				break;
			case 2:
				printf("Voc� escolheu: %d",tipoBeneficio);
				break;
			case 3:
				printf("Voc� escolheu: %d",tipoBeneficio);
				break;
			case 4:
				printf("Voc� escolheu: %d",tipoBeneficio);
				break;
			case 5:
				printf("Voc� escolheu: %d",tipoBeneficio);
				break;
			case 6:
				printf("Voc� escolheu: %d",tipoBeneficio);
				break;
			default:
				printf("\n ####Op��o invalida, deseja tentar novamente?####\n");
				printf("\nDigite o n�mero 1 para sim ou o n�mero 2 para n�o:\n");
				scanf("%d",&tipoBeneficio);
				if(tipoBeneficio==1){
					system("clear||cls");
					teste=true;
				}	
				else{
					system("clear||cls");
					printf("\n\n\n\n\n\n\n       %c%c%c%c Agradecemos a prefer�ncia! %c%c%c%c\n\n\n\n\n\n\n", 259,3,259,3,259,3,259,3);
					return (0);
				}
					
				break;
		}
	}while(teste==true);
	return (0);
}
