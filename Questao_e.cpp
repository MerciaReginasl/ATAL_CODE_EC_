#include <stdio.h>

typedef struct {
    char nome[50];
    int ast;
    int gol;
} Jogador;

float calcular_desempenho(Jogador jogador) {
    return 0.3 * jogador.ast + 0.7 * jogador.gol;
}

int main() {
    Jogador jogadores[100];
    int num_jogadores = 0;
    
    while (1) {
        printf("Digite o nome do jogador (ou 'FIM' para encerrar): ");
        scanf("%s", jogadores[num_jogadores].nome);
        
        if (strcmp(jogadores[num_jogadores].nome, "FIM") == 0) {
//função strcmp devolve um valor inteiro que indica o relacionamento entre string1 e string2: 
//Um valor menor que zero significa que string1 é menor que string2. Um valor zero significa que ambas as strings são iguais. 
//Um valor maior que zero significa que string1 é maior que string2.

            break;
        }
        
        printf("Digite a quantidade de assistências do jogador: ");
        scanf("%d", &jogadores[num_jogadores].ast);
        
        printf("Digite a quantidade de gols do jogador: ");
        scanf("%d", &jogadores[num_jogadores].gol);
        
        if (jogadores[num_jogadores].ast < 0 || jogadores[num_jogadores].gol < 0) {
            printf("Erro: Não são aceitos valores negativos para assistências e gols.\n");
            continue;
        }
        
        num_jogadores++;
    }
    
    // Ordenar os jogadores pelo desempenho
    for (int i = 0; i < num_jogadores; i++) {
        for (int j = i + 1; j < num_jogadores; j++) {
            if (calcular_desempenho(jogadores[j]) > calcular_desempenho(jogadores[i])) {
                Jogador temp = jogadores[i];
                jogadores[i] = jogadores[j];
                jogadores[j] = temp;
            }
        }
    }
    
    printf("\nRanking dos jogadores mais decisivos:\n");
    for (int i = 0; i < num_jogadores; i++) {
        printf("%d. %s - Assistências: %d - Gols: %d\n", i+1, jogadores[i].nome, jogadores[i].ast, jogadores[i].gol);
    }
    
    return 0;
}
