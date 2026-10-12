#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "Portuguese");
	
	int qtdEquipes= 3;
	int qtdjogos = 18;
	int i=1;
	int totaldevitorias=0;
	int totaldeDerrotas=0;
	int totaldeEmpates=0;
	
	int vitorias=0;
	int Derrotas=0;
	int Empates=0;
	int pontos=0;
	
	for(i=1; i <= qtdEquipes; i++){
		
		printf("\nQuantas vitórias a Equipe %d teve?\n", i );
		scanf("%d",&vitorias);
		
		printf("\nQuantas empates a Equipe %d teve?\n", i );
		scanf("%d",&Empates);
		
		printf("\nQuantos derrotas a Equipe %d teve?\n", i );
		scanf("%d",&Derrotas);
		
		totaldevitorias+=vitorias;
		totaldeDerrotas+=Derrotas;
		totaldeEmpates+=Empates;
		
		while(vitorias < 0 || Empates < 0 || Derrotas < 0 || vitorias + Empates + Derrotas != qtdjogos
		) {
			
			printf("Resultados invalidos! Tente novamente\n");
			
			printf("\nQuantas vitórias a Equipe %d teve?\n", i );
		scanf("%d",&vitorias);
		
		printf("\nQuantos empates a Equipe %d teve?\n", i );
		scanf("%d",&Empates);
		
		printf("\nQuantas derrotas a Equipe %d teve?\n", i );
		scanf("%d",&Derrotas);
		
		totaldevitorias+=vitorias;
		totaldeDerrotas+=Derrotas;
		totaldeEmpates+=Empates;
		
		}
		
		pontos = vitorias * 3 + Empates;
		
	if (pontos >= 15){
		printf("Excelente Campanha\n");
		printf("Pontuação: %d", pontos);
		
	}	
		else  if (pontos >= 10 && pontos < 14){
			printf("Boa Campanha\n");
			printf("Pontuação: %d", pontos);
		}
		else if (pontos <=9 && pontos >5){
			printf("Campanha Regular/n");
			printf("Pontuação: %d", pontos);
		}
		else {
			
			printf("Campanha Ruim\n");
			printf("Pontuação: %d", pontos);	
		}
		
		
		printf("Equipe %d: %d Vitorias, %d empates e %d derrotas.\n", i, vitorias, Empates, Derrotas);
		
		
		
	}
	
	
	
	
	
	
	
	
	return 0;
} 
