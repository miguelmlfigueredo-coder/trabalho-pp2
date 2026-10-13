#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "Portuguese");

/*
  Trabalho N1AT2 - Sistema de Controle de Campeonato
  Integrantes: Miguel de Medeiros, Willian Ferreira, Thiago Neres.
*/



int quantidadeEquipes;
int jogosPorEquipe;
int opcaoMenu = 0;
int registroCompleto = 0;

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
	
	 


printf("Qual a quantidade de equipes (3 a 10): ");
scanf("%d", &quantidadeEquipes);
while (quantidadeEquipes < 3 || quantidadeEquipes > 10) {
    printf("Valor invalido, digite de novo (3 a 10): ");
    scanf("%d", &quantidadeEquipes);
}


printf("Qual a quantidade de jogos por equipe (1 a 10): ");
scanf("%d", &jogosPorEquipe);
while (jogosPorEquipe < 1 || jogosPorEquipe > 10) {
    printf("Valor invalido, digite de novo (1 a 10): ");
    scanf("%d", &jogosPorEquipe);
}


while (opcaoMenu != 5) {
    printf("\n1 - Registrar resultados do campeonato\n");
    printf("2 - Mostrar resumo do campeonato\n");
    printf("3 - Mostrar regulamento\n");
    printf("4 - Simular campanha de uma equipe\n");
    printf("5 - Encerrar sistema\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcaoMenu);

    switch (opcaoMenu) {
        case 1:
    
	for(i=1; i <= quantidadeEquipes; i++){
		
		printf("\nQuantas vitórias a Equipe %d teve?\n", i );
		scanf("%d",&vitorias);
		printf("\nQuantas empates a Equipe %d teve?\n", i );
		scanf("%d",&Empates);
		printf("\nQuantos derrotas a Equipe %d teve?\n", i );
		scanf("%d",&Derrotas);
		
		
		
		while(vitorias < 0 || Empates < 0 || Derrotas < 0 || vitorias + Empates + Derrotas != jogosPorEquipe) {
			
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
    
            break;
        case 2:
            // parte do thiago
            break;
        case 3:
            printf("\nREGULAMENTO\n");
            printf("Vitoria = 3 pontos\n");
            printf("Empate = 1 ponto\n");
            printf("Derrota = 0 pontos\n");
            printf("15 ou mais pontos: Excelente campanha\n");
            printf("10 a 14 pontos: Boa campanha\n");
            printf("5 a 9 pontos: Campanha regular\n");
            printf("Menos de 5 pontos: Campanha ruim\n");
            printf("Equipes: de 3 a 10\n");
            printf("Jogos por equipe: de 1 a 10\n");
            break;
        case 4:
            // parte do thiago
            break;
        case 5:
            // parte do thiago
            break;
        default:
            printf("Opcao invalida!\n");
    }
}
return 0;
}







	