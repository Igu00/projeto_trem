#include <stdio.h>
#include <conio.h>
#include "BibliotecaViana.c"

char nome[30];
int i, qtdPassagem, qtdEconomica=0, qtdExecutiva=0, classe, passagemEconomica = 50, passagemExecutiva = 0;
int valor, vagaoExecutiva, vagaoEconomica;

void menuDados(){
	inicio:
	printf("1 - Comprar Passagem");
	printf("\n2 - Visualizar quantidade total de passagens vendidas");
	printf("\n3 - Visualizar quantidade de assentos disponiveis");
	scanf("%i", &valor);
	
	
	switch (valor)
	{
		case 1: 		
			for (i=0; i<4; i++){
			fflush(stdin);
			printf("\nInforme o seu nome: ");
			scanf("%c", &nome);
			fflush(stdin);
			
			printf("\nInforme o numero de passagens: ");
			scanf("%i", &qtdPassagem);
			
			printf("Informe a classe que deseja");
			printf("\n1 - Economica");
			printf("\n2 - Executiva\n");
			scanf("%i", &classe);
			
			if ( classe == 1){
				qtdEconomica += qtdPassagem;
				if (qtdEconomica > 100){
				printf("\n\nA classe economica esta cheia.");
				}else {
				printf("Ainda restam %i assentos na classe Economica",100-qtdEconomica);
				}
			} else if (classe == 2){
				qtdExecutiva += qtdPassagem;						
				if (qtdExecutiva >50){
				printf("\n\nA classe executiva esta cheia");
				}else {
				printf("Ainda restam %i assentos na classe Executiva",50-qtdExecutiva);
				}
			}
				
				vagaoEconomica= 10-qtdEconomica;
				vagaoExecutiva= 10-qtdExecutiva;
				
				getch();
				system("cls");
				goto inicio;
				
			}			
		
		case 2:	
			printf("\nClasse Economica = %i passagens vendidas", qtdEconomica);
			printf("\nClasse Executiva = %i passagens vendidas\n", qtdExecutiva);
			getch();
			system("cls");
			goto inicio;
		
		case 3:	 
			if (qtdExecutiva > 10){
				printf("\nVagao 1 cheio");
			} else if(qtdExecutiva < 10 && qtdExecutiva > 0) {
				printf("\nVagao 1 tem %i assentos disponiveis", qtdExecutiva-10);
			}
			
			if (qtdExecutiva > 20){
				printf("\nVagao 2 cheio");
			} else if(qtdExecutiva < 20 && qtdExecutiva > 10) {
				printf("\nVagao 2 tem %i assentos disponiveis", qtdExecutiva-10);
			}
			
			if (qtdExecutiva > 30){
				printf("\nVagao 3 cheio");
			} else if(qtdExecutiva < 30 && qtdExecutiva > 20) {
				printf("\nVagao 3 tem %i assentos disponiveis", qtdExecutiva-10);
			}
			
			if (qtdExecutiva > 40){
				printf("\nVagao 4 cheio");
			} else if(qtdExecutiva < 40 && qtdExecutiva > 30) {
				printf("\nVagao 4 tem %i assentos disponiveis", qtdExecutiva-10);
			}
			
			if (qtdExecutiva > 50){
				printf("\nVagao 5 cheio");
			} else if(qtdExecutiva < 50 && qtdExecutiva > 40) {
				printf("\nVagao 5 tem %i assentos disponiveis", qtdExecutiva-10);//fim executiva
			}
			
			
			if (qtdEconomica > 60){
				printf("\nVagao 6 cheio");
			} else if(qtdEconomica < 60 && qtdEconomica > 50) {
				printf("\nVagao 6 tem %i assentos disponiveis", qtdEconomica-10);
			}
			
			if (qtdEconomica > 70){
				printf("\nVagao 7 cheio");
			} else if(qtdEconomica < 70 && qtdEconomica > 60) {
				printf("\nVagao 7 tem %i assentos disponiveis", qtdEconomica-10);
			}
			
			if (qtdEconomica > 80){
				printf("\nVagao 8 cheio");
			} else if(qtdEconomica < 80 && qtdEconomica > 70) {
				printf("\nVagao 8 tem %i assentos disponiveis", qtdEconomica-10);
			}
			
			if (qtdEconomica > 90){
				printf("\nVagao 9 cheio");
			} else if(qtdEconomica < 90 && qtdEconomica > 80) {
				printf("\nVagao 9 tem %i assentos disponiveis", qtdEconomica-10);
			}
			
			if (qtdEconomica > 90){
				printf("\nVagao 10 cheio");
			} else if(qtdEconomica < 100 && qtdEconomica > 90) {
				printf("\nVagao 10 tem %i assentos disponiveis", qtdEconomica-10);//fim economica
			}
						
			getch();
			system("cls");
			goto inicio;
				
	}
}
int main(){
	menuDados();	
	
}
