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
	char requisitos, tipoBeneficio;
	int soma=0,soma1=0;
	float salario01, salario02, salario03, salario;
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
			case 1 ...2:
				if(tipoBeneficio==1){//Trabalhador Formal Pergunta
					printf("\nFoi dispensado sem justa causa?\n%c ",272);
					scanf("%d",&requisitos);
				}else{//Bolsa de qualifica��o - requisitos para ter o seguro : Sim, Sim - 2 pontos
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
				}
				printf("\nRecebeu o Seguro-Desemprego nos ultimos 16 meses?\n%c",272);
				scanf("%d",&soma1);
				if(requisitos==1 && tipoBeneficio==1 && soma1==2 || soma==2 && soma1==2){
					//requisitos para ter o seguro (ignorar a demiss�o indireta): Sim, Sim, sim, N�o, N�o, Sim - 6 pontos
					if(tipoBeneficio==1){
						printf("\nFoi dispensado tamb�m por demiss�o indireta?\n%c ",272);
						scanf("%d",&requisitos);
						printf("\nEst� no momento desempregado?\n%c ",272);
						scanf("%d",&requisitos);
						if(requisitos==1){
							soma++;
						}
						printf("\nEst� dentro do per�odo aquisitivo (16 meses a partir da �ltima dispensa)?\n%c ",272);
						scanf("%d",&requisitos);
						if(requisitos==1){
							soma++;
						}
					}
					printf("\nRecebeu mais de 6 meses de sal�rio consecutivamente?\n%c ",272);
					scanf("%d",&requisitos);
					if(requisitos==1){
						soma++;
						soma1++;
					}
					printf("\nPossui alguma renda pr�pria suficiente para manter seu sustento e de seus familiares?\n%c ",272);
					scanf("%d",&requisitos);
					if(requisitos==2){
						soma++;
						soma1++;
					}
					printf("\nEst� participando de outro benef�cio previdenci�rio (exceto aux�lio-acidente e pens�o por morte)?\n%c ",272);
					scanf("%d",&requisitos);
					if(requisitos==2){
						soma++;
						soma1++;
					}
					printf("\nEsteve trabalhando por pelo menos 1 ano (12 meses) nesses �ltimos 3 anos (36 meses)\n%c ",272);
					scanf("%d",&requisitos);
					if(requisitos==1){
						soma++;
						soma1++;
					}
					if(soma==6||soma1==4){
						system("clear||cls");
						printf("---------------------------------------------------------------------------\n");
						printf("     O usu�rio atende aos requisitos para receber o Seguro-Desemprego");
						printf("\n---------------------------------------------------------------------------\n");
						printf("\nComplete as inform��es abaixo para o calculo de parcelas e valor a receber:\n");
						printf("\nQuantos meses trabalhados nos ultimos 36 meses? [insira um valor inteiro]\n%c",272);
						scanf("%d",&tipoBeneficio);
						system("clear||cls");
						//Solicitando dados de sal�rio
						printf("\nEm seu �ltimo vinculo empregat�cio, trabalhou quantos meses remunerado? de 1(m�nimo) a 3(m�ximo)??\n%c",272);
						scanf("%d",&requisitos);
						system("clear||cls");
						printf("Informe os valores solicitados abaixo:\nsal�rio do �ltimo m�s?\n%c",272);
						scanf("%f",&salario01);
						switch(requisitos){
						case 1:
							if (salario01<1686.80)
								salario01=(salario01*0.80);							
							else if(salario01<2811.61)
								salario01=((salario01-1686.79)*0.5+1349.43);
							else{
								salario01=1911.84;
							}
							salario=salario01;
							break;
							if (salario<1100.00)
								salario=1100.00;
							
						case 2:
							printf("Sal�rio do pen�ltimo m�s?\n%c",272);
							scanf("%f",&salario02);
							salario02=(salario01+salario02)/2;
							if (salario02<1686.80)
								salario02=(salario02*0.80);							
							else if(salario02<2811.61)
								salario02=((salario02-1686.79)*0.5+1349.43);
							else{
								salario02=1911.84;
							}
							salario=salario02;
							if (salario<1100.00)
								salario=1100.00;
							break;
						case 3:
							printf("Sal�rio do pen�ltimo m�s?\n%c",272);
							scanf("%f",&salario02);
							printf("Sal�rio do antepen�ltimo m�s?\n%c",272);
							scanf("%f",&salario03);
							salario03=(salario01+salario02+salario03)/3;
							if (salario03<1686.80)
								salario03=(salario03*0.80);							
							else if(salario03<2811.61)
								salario03=((salario03-1686.79)*0.5+1349.43);
							else{
								salario03=1911.84;
							}
							salario=salario03;
							if (salario<1100.00)
								salario=1100.00;
							break;
						}
						//Escolher a quantidade de parcelas
						switch(tipoBeneficio){
							case 6 ... 11: //tr�s parcelas
								soma=3;
								break;
							case 12 ... 23://quatro parcelas
								soma=4;
								break;
							case 0 ... 5:  //quantidade invalida
								printf("\nQuantidade de meses inferior a 6 \n");
								break;
							default:     //cinco parcelas
								soma=5;
								break;
						}
						system("clear||cls");
						printf("\nPara os dados Informados o beneficio ser� de %d parcelas de R$ %.2f no total de R$ %.2f.\n",soma,salario,soma*salario);
						printf("--------------------------------------------------------------------------------------------\n");
					}
					else{
						system("clear||cls");
						printf("----------------------------------------------------------------------\n");
						printf("O usu�rio N�O atende aos requisitos para receber o Seguro-Desemprego");
						printf("\n----------------------------------------------------------------------");
						break;
					}		
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
				//https://www.gov.br/trabalho/pt-br/assuntos/trabalhador/seguro-desemprego/seguro-desemprego-empregado-domestico
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
					printf("\nDe acordo com a Lei n.� 10.208 de 23 de mar�o de 2001 e pela Lei Complementar n� 150, de 02 de junho de 2014.\n");
					printf("\nVoc� tem direito � 3 parcelas no valor de R$ 1.100,00 no total de R$ 3.300,00 reais.");
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
					printf("\nDe acordo com a LEI N� 10.779, DE 25 DE NOVEMBRO DE 2003.\n");
					printf("\nVoc� tem direito ao benef�cio do seguro-desemprego durante o per�odo de defeso de atividade pesqueira para a preserva��o da esp�cie com parcelas no valor de R$ 1.100,00.");
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
					printf("\nDe acordo com a Lei N'�' 10.608, DE 20 DE DEZEMBRO DE 2002.\n");
					printf("\nVoc� tem direito � 3 parcelas no valor de R$ 1.100,00 no total de R$ 3.300,00 reais.");
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
				system("clear||cls");
				printf("\n Para receber o seguro-desemprego � necess�rio se enquadrar em uma das condi��es das op��es de 1 a 5.\n");
				printf("---------------------------------------------------------------------------------------------------------");
				break;
			default:
				system("clear||cls");
				printf("\n          ########  Op��o invalida  #######\n_______________________________________________________");					
				break;
		}
		printf("\n\n\n          Deseja realizar uma nova consulta?\n");
		printf("\n  %c Digite o n�mero 1 para sim ou o n�mero 2 para n�o:\n  %c ",272,272);
		scanf("%d",&tipoBeneficio);
		switch(tipoBeneficio){
			case 1:
				system("clear||cls");
				teste=true;
				soma=0;
				break;
			case 2:
				system("clear||cls");
				printf("\n\n\n\n\n\n\n        Agradecemos a prefer�ncia! \n\n\n\n\n\n\n");
				return (0);
				getch();
				break;
			default :
				teste=true;
				printf("\n          ########  Op��o invalida  #######\n_______________________________________________________");
			break;
		}
	}while(teste==true);
}
