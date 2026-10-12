#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "Portuguese");
	
	int qtdEquipes= 3;
	int qtdjogos = 10;
	int i=1;
	int totaldevitorias=0;
	int totaldeDerrotas=0;
	int totaldeEmpates=0;
	int vitorias=0;
	int Derrotas=0;
	int Empates=0;
	int pontos=0;
	int somaPontos=0;
	int qtdExcelente=0;
	int qtdBoa=0;
	int qtdRegular=0;
	int qtdRuim=0;
	int maiorPontuacao=0;
	int menorPontuacao=0;
	int equipeMaior=0;
	int equipeMenor=0;
	int qtdmaior=0;
	int qtdmenor=0;
	int registroCompleto=0;
	
	for(i=1; i <= qtdEquipes; i++){
		
		printf("\nQuantas vitórias a Equipe %d teve?\n", i );
		scanf("%d",&vitorias);
		printf("\nQuantas empates a Equipe %d teve?\n", i );
		scanf("%d",&Empates);
		printf("\nQuantos derrotas a Equipe %d teve?\n", i );
		scanf("%d",&Derrotas);
		
		
		
		while(vitorias < 0 || Empates < 0 || Derrotas < 0 || vitorias + Empates + Derrotas != qtdjogos
		) {
			
			printf("Resultados invalidos! Tente novamente\n");
			
			printf("\nQuantas vitórias a Equipe %d teve?\n", i );
		scanf("%d",&vitorias);
		
		printf("\nQuantos empates a Equipe %d teve?\n", i );
		scanf("%d",&Empates);
		
		printf("\nQuantas derrotas a Equipe %d teve?\n", i );
		scanf("%d",&Derrotas);
		
		}
		totaldevitorias+=vitorias;
		totaldeDerrotas+=Derrotas;
		totaldeEmpates+=Empates;
		pontos = vitorias * 3 + Empates;
		somaPontos += pontos;
	if (pontos >= 15){
		printf("Equipe %d:\n %d Vitorias\n %d empates \n %d derrotas.\n", i, vitorias, Empates, Derrotas);
		printf("Excelente Campanha\n");
		printf("Pontuação: %d", pontos);
		qtdExcelente++;
	}	
		else  if (pontos >= 10 && pontos <= 14){
			printf("Equipe %d:\n %d Vitorias\n %d empates \n %d derrotas.\n", i, vitorias, Empates, Derrotas);
			printf("Boa Campanha\n");
			printf("Pontuação: %d", pontos);
			qtdBoa++;
		}
		else if (pontos <=9 && pontos >5){
			printf("Equipe %d: \n%d Vitorias\n %d empates \n %d derrotas.\n", i, vitorias, Empates, Derrotas);
			printf("Campanha Regular\n");
			printf("Pontuação: %d", pontos);
			 qtdRegular++;
		}
		else {
			printf("Equipe %d: \n %d Vitorias\n %d empates \n %d derrotas.\n", i, vitorias, Empates, Derrotas);
			printf("Campanha Ruim\n");
			printf("Pontuação: %d", pontos);
			qtdRuim++;	
		}
		
		
		if (i == 1 || pontos > maiorPontuacao) {
            maiorPontuacao = pontos;
            equipeMaior = i;
            qtdmaior = 1;
        }
        else if (pontos == maiorPontuacao) {
            qtdmaior++;
        }

    
        if (i == 1 || pontos < menorPontuacao) {
            menorPontuacao = pontos;
            equipeMenor = i;
            qtdmenor = 1;
        }
        else if (pontos == menorPontuacao) {
            qtdmenor++;
        }
    }
    registroCompleto = 1;
    printf("\n--- Conferencia do registro ---\n");
    printf("Registro completo: %d\n", registroCompleto);
    printf("Total de vitorias: %d\n", totaldevitorias);
    printf("Total de empates: %d\n", totaldeEmpates);
    printf("Total de derrotas: %d\n", totaldeDerrotas);
    printf("Soma dos pontos: %d\n", somaPontos);
    printf("Equipes excelentes: %d\n", qtdExcelente);
    printf("Equipes boas: %d\n", qtdBoa);
    printf("Equipes regulares: %d\n", qtdRegular);
    printf("Equipes ruins: %d\n", qtdRuim);
    printf("Maior pontuacao: %d (Equipe %d)\n", maiorPontuacao, equipeMaior);
    printf("Equipes empatadas na maior pontuacao: %d\n", qtdmaior);
    printf("Menor pontuacao: %d (Equipe %d)\n", menorPontuacao, equipeMenor);
    printf("Equipes empatadas na menor pontuacao: %d\n", qtdmenor);	
		

	
	
	
	
	
	
	
	
	return 0;
} 
