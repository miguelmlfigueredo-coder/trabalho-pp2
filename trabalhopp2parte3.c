#include <stdio.h>

int main() {

int quantidadeEquipes;
int jogosPorEquipe;
int opcaoMenu = 0;
int registroCompleto = 0; 

int totalVitorias = 0;
int totalEmpates = 0;
int totalDerrotas = 0;
int somaPontos = 0;

int qtdExcelente = 0;
int qtdBoa = 0;
int qtdRegular = 0;
int qtdRuim = 0;

int maiorPontuacao = 0;
int equipeMaior = 0;
int empatadosMaior = 0;

int menorPontuacao = 0;
int equipeMenor = 0;
int empatadosMenor = 0;

int qtdSimulacoes = 0;
int simVitorias = 0;
int simEmpates = 0;
int simDerrotas = 0;
int simPontos = 0;
int simulacaoAtual = 0;


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
            // parte do William
            break;
        case 2:
            if (registroCompleto == 0) {
                printf("\nRegistre os resultados primeiro.\n");
            } else {
            printf("\n=== RESUMO DO CAMPEONATO ===\n");
            printf("Quantidade de equipes: %d\n", quantidadeEquipes);
            printf("Jogos por equipe: %d\n", jogosPorEquipe);

            printf("\n--- Resultados gerais ---\n");
            printf("Total de vitorias: %d\n", totalVitorias);
            printf("Total de empates: %d\n", totalEmpates);
            printf("Total de derrotas: %d\n", totalDerrotas);
            printf("Soma dos pontos: %d\n", somaPontos);
            printf("Media de pontos: %.2f\n", (float)somaPontos / quantidadeEquipes);

            printf("\n--- Classificacao das equipes ---\n");
            printf("Excelentes: %d\n", qtdExcelente);
            printf("Boas: %d\n", qtdBoa);
            printf("Regulares: %d\n", qtdRegular);
            printf("Ruins: %d\n", qtdRuim);

            printf("\n--- Maior pontuacao ---\n");
            printf("Pontuacao: %d\n", maiorPontuacao);
            printf("Primeira equipe: %d\n", equipeMaior);
            printf("Equipes empatadas: %d\n", empatadosMaior);

            printf("\n--- Menor pontuacao ---\n");
            printf("Pontuacao: %d\n", menorPontuacao);
            printf("Primeira equipe: %d\n", equipeMenor);
            printf("Equipes empatadas: %d\n", empatadosMenor);
            }
        
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
            printf("\n=== SIMULAR CAMPANHA ===\n");
            printf("Quantas simulacoes deseja realizar (1 a 5)? ");
            scanf("%d", &qtdSimulacoes);

            while (qtdSimulacoes < 1 || qtdSimulacoes > 5) {
                printf("Quantidade invalida! Digite de 1 a 5: ");
                scanf("%d", &qtdSimulacoes);
            }

            for (simulacaoAtual = 1; simulacaoAtual <= qtdSimulacoes; simulacaoAtual++) {
            printf("\n--- Simulacao %d ---\n", simulacaoAtual);
                printf("Digite as vitorias: ");
                scanf("%d", &simVitorias);
                printf("Digite os empates: ");
                scanf("%d", &simEmpates);
                printf("Digite as derrotas: ");
                scanf("%d", &simDerrotas);

                while (simVitorias < 0 || simEmpates < 0 || simDerrotas < 0 || simVitorias + simEmpates + simDerrotas != jogosPorEquipe) {
                printf("\nResultados invalidos!\n");
                printf("A soma precisa ser igual a %d jogos.\n", jogosPorEquipe);
                printf("Digite as vitorias: ");
                scanf("%d", &simVitorias);
                printf("Digite os empates: ");
                scanf("%d", &simEmpates);
                printf("Digite as derrotas: ");
                scanf("%d", &simDerrotas);
                }

                simPontos = simVitorias * 3 + simEmpates;
                printf("\nVitorias: %d\n", simVitorias);
                printf("Empates: %d\n", simEmpates);
                printf("Derrotas: %d\n", simDerrotas);
                printf("Pontos: %d\n", simPontos);

                if (simPontos >= 15) {
                    printf("Situacao: Excelente campanha\n");
                } else if (simPontos >= 10) {
                    printf("Situacao: Boa campanha\n");
                } else if (simPontos >= 5) {
                    printf("Situacao: Campanha regular\n");
                } else {
                    printf("Situacao: Campanha ruim\n");
                }
            }
            break;
        case 5:
            printf("\nSistema encerrado com sucesso.\n");
            printf("Obrigado por utilizar o sistema.\n");
            break;
        default:
            printf("Opcao invalida!\n");
    }
}
return 0;
}