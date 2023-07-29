/***************************************************************************************
Instituto Federal da Paraíba - Campus Campina Grande
Período: 2023.2
ATAL
Prof.: Emanuel Dantas Filho
Aluna: Mércia Regina da Silva

Atividade 1 

LETRA - E

Objetivo: Utilizar um loop para ler os dados dos jogadores e calcular a performance de cada um. 
Vamos criar um vetor de estruturas para armazenar os dados dos jogadores e, ao final, 
ordenar esse vetor com base na performance para exibir o ranking. 
**************************************************************************************/

#include <stdio.h>
#include <string.h>

#define MAX_JOGADORES 100

// Definição da estrutura para os dados dos jogadores
struct Jogador {
    char nome[50];
    int AST;
    int GOL;
    float performance;
};

// Função para ler os dados dos jogadores
void lerDados(struct Jogador jogadores[], int *totalJogadores) {
    int i = 0;
    while (1) {
        printf("Digite o nome do jogador (ou 'FIM' para encerrar): ");
        scanf("%s", jogadores[i].nome);

        // Verifica se o nome é "FIM" para encerrar a leitura
        if (strcmp(jogadores[i].nome, "FIM") == 0) {
            break;
        }

        // Solicita os valores de AST e GOL
        printf("Digite o numero de assistencias: ");
        scanf("%d", &jogadores[i].AST);
        printf("Digite o numero de gols marcados: ");
        scanf("%d", &jogadores[i].GOL);

        // Verifica se os valores são negativos e ajusta para zero se necessário
        if (jogadores[i].AST < 0) {
            jogadores[i].AST = 0;
        }
        if (jogadores[i].GOL < 0) {
            jogadores[i].GOL = 0;
        }

        // Calcula a performance do jogador
        jogadores[i].performance = 0.3 * jogadores[i].AST + 0.7 * jogadores[i].GOL;

        // Incrementa o contador de jogadores
        i++;
    }
    *totalJogadores = i; // Atualiza o total de jogadores no vetor
}

// Função para ordenar o vetor de jogadores com base na performance
void ordenarJogadores(struct Jogador jogadores[], int totalJogadores) {
    struct Jogador temp;
    int i, j;

    for (i = 0; i < totalJogadores - 1; i++) {
        for (j = i + 1; j < totalJogadores; j++) {
            if (jogadores[i].performance < jogadores[j].performance) {
                temp = jogadores[i];
                jogadores[i] = jogadores[j];
                jogadores[j] = temp;
            }
        }
    }
}

// Função para exibir o ranking dos jogadores mais decisivos
int exibirRanking(struct Jogador jogadores[], int totalJogadores) {
    printf("\nRanking dos jogadores mais decisivos:\n");
    for (int i = 0; i < totalJogadores; i++) {
        printf("%dº Lugar: %s (Performance: %.2f)\n", i + 1, jogadores[i].nome, jogadores[i].performance);
    }
}

int main() {
    struct Jogador jogadores[MAX_JOGADORES];
    int totalJogadores;

    printf("Digite os dados dos jogadores:\n");
    lerDados(jogadores, &totalJogadores);

    ordenarJogadores(jogadores, totalJogadores);

    exibirRanking(jogadores, totalJogadores);

    return 0;
}
