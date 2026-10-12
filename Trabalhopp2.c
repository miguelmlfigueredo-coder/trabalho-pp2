/*
  Trabalho N1AT2 - Sistema de Controle de Campeonato
  Integrantes: Miguel de Medeiros, William Ferreira, Thiago Neres.
*/

#include <stdio.h>

int main() {

int quantidadeEquipes;
int jogosPorEquipe;
int opcaoMenu = 0;
int registroCompleto = 0; 


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