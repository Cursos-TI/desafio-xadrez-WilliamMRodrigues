#include <stdio.h>

int main() {
    // Quantidade de casas a serem percorridas por cada peça
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;

    // ================= TORRE =================
    // A torre se move em linha reta horizontal (para a direita)
    // Utilizando estrutura de repetição FOR
    printf("Movimento da Torre:\n");
    for (int i = 0; i < movimentoTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // ================= BISPO =================
    // O bispo se move na diagonal (para cima e à direita)
    // Utilizando estrutura de repetição WHILE
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < movimentoBispo) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    // ================= RAINHA =================
    // A rainha se move em qualquer direção (para a esquerda neste caso)
    // Utilizando estrutura de repetição DO-WHILE
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < movimentoRainha);

    return 0;
}
