/*************************************/
/* Aluno1: Bruna Ciriaco Benedito */
/* Aluno2: Fernanda Gon�alves Lima */
/* Aluno3: Jo�o Pedro Oliveira Gon�alves */
/* Aluno4: Paulo Henrique Cardoso de Jesus */
/* Aluno4: Vicente Santos Gon�alves */
/* Algoritmo e L�gica de Programa��o */
/* Prof. Eliane */
/*************************************/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	char tipoBeneficio;
	int requisitos, soma=0;
	bool teste;
	
	printf("Descubra se voc� tem direito ao benef�cio do Seguro-Desemprego\n");
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
		printf("______________________________________________________________\n %c ",272);
		scanf("%d",&tipoBeneficio);
		system("clear||cls");
		printf("\n\nPara as pr�ximas perguntas responda 1 para SIM e 2 para N�O");
		printf("\n-----------------------------------------------------------------\n");
		switch(tipoBeneficio){
			teste=false;
			case 1:
				printf("\nFoi dispensado sem justa causa?\n%c ",272);
				scanf("%d",&requisitos);
				if(requisitos==2){
					system("clear||cls");
					printf("\n   Voc� n�o possui o direito de receber o benef�cio.\n   -------------------------------------------------");
					break;				
				}
				else if(requisitos==1){ //recebendo as respostas para somatoria de pontos e analise dos requisitos do seguro.
					//requisitos para ter o seguro (ignorar a demiss�o indireta): Sim, Sim, N�o, N�o, Sim - 5 pontos
					printf("\nFoi dispensado tamb�m por demiss�o indireta?\n%c ",272);
					scanf("%d",&requisitos);
					printf("\nRecebeu mais de 6 meses de sal�rio consecutivamente?\n%c ",272);
					scanf("%d",&requisitos);
					if(requisitos==1){
						soma++;
					}
					printf("\nEst� no momento desempregado?\n%c ",272);
					scanf("%d",&requisitos);
					if(requisitos==1){
						soma++;
					}
					printf("\nPossui alguma renda pr�pria suficiente para manter seu sustento e de seus familiares?\n%c ",272);
					scanf("%d",&requisitos);
					if(requisitos==2){
						soma++;
					}
					printf("\nEst� participando de outro benef�cio previdenci�rio (exceto aux�lio-acidente e pens�o por morte)?\n%c ",272);
					scanf("%d",&requisitos);
					if(requisitos==2){
						soma++;
					}
					printf("\nEsteve trabalhando por pelo menos 1 ano (12 meses) nesses ultimos 3 anos (36 meses)\n%c ",272);
					scanf("%d",&requisitos);
					if(requisitos==1){
						soma++;
					}
					if(soma==5){
						system("clear||cls");
						printf("----------------------------------------------------------------------\n");
						printf("O usu�rio atende aos requisitos para receber o Seguro-Desemprego");
						printf("\n----------------------------------------------------------------------");
						break;
					}
					else{
						system("clear||cls");
						printf("----------------------------------------------------------------------\n");
						printf("O usu�rio N�O atende aos requisitos para receber o Seguro-Desemprego");
						printf("\n----------------------------------------------------------------------");
						break;
					}	
				}				
				break;
			case 2:
				//requisitos para ter o seguro : Sim, Sim - 2 pontos
				printf("\nEst� com contrato de trabalho suspenso?\n%c ",272);
				scanf("%d",&requisitos);
				if(requisitos==1){
					soma++;
				}
				printf("\nEst� devidamente matriculado em um curso ou qualifica��o profissional?\n%c ",272);
				scanf("%d",&requisitos);
				if(requisitos==1){
					soma++;
				}
				if(soma==2){
					system("clear||cls");
					printf("----------------------------------------------------------------------\n");
					printf("O usu�rio atende aos requisitos para receber o Seguro-Desemprego");
					printf("\n----------------------------------------------------------------------");
					break;
				}
				else{
					system("clear||cls");
					printf("----------------------------------------------------------------------\n");
					printf("O usu�rio N�O atende aos requisitos para receber o Seguro-Desemprego");
					printf("\n----------------------------------------------------------------------");
					break;
				}
				break;
			case 3:
				//para conseguir o seguro: Sim, Sim, N�o, N�o - 4 pontos
				printf("\nFoi dispensado sem justa causa?\n%c ",272);
				scanf("%d",&requisitos);
				if(requisitos==1){
					soma++;
				}
				printf("\nNos ultimos 2 anos, voc� trabalhou exclusivamente como empregado dom�stico por, no minimo, 15 meses?\n%c ",272);
				scanf("%d",&requisitos);
				if(requisitos==1){
					soma++;
				}
				printf("\nPossui renda pr�pria suficiente para sustentar a voc� e seus familiares?\n%c ",272);
				scanf("%d",&requisitos);
				if(requisitos==2){
					soma++;
				}
				printf("\nEst� participando de outro benef�cio previdenci�rio (exceto aux�lio-acidente e pens�o por morte)?\n%c ",272);
				scanf("%d",&requisitos);
				if(requisitos==2){
					soma++;
				}
				if(soma==4){
					system("clear||cls");
					printf("----------------------------------------------------------------------\n");
					printf("O usu�rio atende aos requisitos para receber o Seguro-Desemprego");
					printf("\n----------------------------------------------------------------------");
					break;
				}
				else{
					system("clear||cls");
					printf("----------------------------------------------------------------------\n");
					printf("O usu�rio N�O atende aos requisitos para receber o Seguro-Desemprego");
					printf("\n----------------------------------------------------------------------");
					break;
				}
				break;
			case 4:
				//requisitos para ter o beneficio: Sim, Sim, N�o, Sim, N�o - 5
				printf("\nPossui inscri��o no INSS como segurado especial ?\n%c ",272);
				scanf("%d",&requisitos);
				if(requisitos==1){
					soma++;
				}
				printf("\nPossui comprova��o de venda do pescado para o adquirente dos �ltimos 12 meses?\n%c",272);
				scanf("%d",&requisitos);
				if(requisitos==1){
					soma++;
				}
				printf("\nEst� participando de outro benef�cio previdenci�rio (exceto aux�lio-acidente e pens�o por morte)?\n%c ",272);
				scanf("%d",&requisitos);
				if(requisitos==2){
					soma++;
				}
				printf("\nVoc� comprova exerc�cio profissional na pesca artesanal e que, se dedica na atividade?\n%c ",272);
				scanf("%d",&requisitos);
				if(requisitos==1){
					soma++;
				}
				printf("\nEst� associado a outro emprego ou outra fonte de renda que n�o seja relacionado a pesca?\n%c ",272);
				scanf("%d",&requisitos);
				if(requisitos==2){
					soma++;
				}
				if(soma==5){
					system("clear||cls");
					printf("----------------------------------------------------------------------\n");
					printf("O usu�rio atende aos requisitos para receber o Seguro-Desemprego");
					printf("\n----------------------------------------------------------------------");
					break;
				}
				else{
					system("clear||cls");
					printf("----------------------------------------------------------------------\n");
					printf("O usu�rio N�O atende aos requisitos para receber o Seguro-Desemprego");
					printf("\n----------------------------------------------------------------------");
					break;
				}
				break;
			case 5:
				//printf("Voc� escolheu: %d",tipoBeneficio);
				//requisitos aceito: sim, n�o, n�o - 3
				printf("\nVoc� comprova ter sido resgatado do trabalho for�ado devido a a��o de fiscaliza��o do MTE?\n%c ",272);
				scanf("%d",&requisitos);
				if(requisitos==1){
					soma++;
				}
				printf("\nEst� participando de outro benef�cio previdenci�rio (exceto aux�lio-acidente e pens�o por morte)?\n%c ",272);
				scanf("%d",&requisitos);
				if(requisitos==2){
					soma++;
				}
				printf("\nPossui renda pr�pria suficiente para sustentar a voc� e seus familiares?\n%c ",272);
				scanf("%d",&requisitos);
				if(requisitos==2){
					soma++;
				}
				if(soma==3){
					system("clear||cls");
					printf("----------------------------------------------------------------------\n");
					printf("O usu�rio atende aos requisitos para receber o Seguro-Desemprego");
					printf("\n----------------------------------------------------------------------");
					break;
				}
				else{
					system("clear||cls");
					printf("----------------------------------------------------------------------\n");
					printf("O usu�rio N�O atende aos requisitos para receber o Seguro-Desemprego");
					printf("\n----------------------------------------------------------------------");
					break;
				}
				break;
			case 6:
				printf("\n Para receber o seguro-desemprego � necess�rio se enquadrar em umas das condi��es das op��es de 1 a 5.\n");
				printf("---------------------------------------------------------------------------------------------------------");
				break;
			default:
				printf("\n          ########  Op��o invalida  #######\n_______________________________________________________");					
				break;
		}
		printf("\n\n\n          Deseja realizar uma nova consulta?\n");
		printf("\n  %c Digite o n�mero 1 para sim ou o n�mero 2 para n�o:\n  %c ",272,272);
		scanf("%d",&tipoBeneficio);
		if(tipoBeneficio==1){
			system("clear||cls");
			teste=true;
			soma=0;
		}	
		else{
			system("clear||cls");
			printf("\n\n\n\n\n\n\n        Agradecemos a prefer�ncia! \n\n\n\n\n\n\n");
			return (0);
			getch();
		}
	}while(teste==true);
}
