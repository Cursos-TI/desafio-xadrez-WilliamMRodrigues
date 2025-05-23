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

    printf("\n");

    // ================= CAVALO =================
    // O cavalo se move em "L": duas casas para baixo e uma para a esquerda
    // Utilizando loops aninhados (FOR externo + WHILE interno)
    int casasParaBaixo = 2;
    int casasParaEsquerda = 1;

    printf("Movimento do Cavalo:\n");

    // Loop externo com FOR: simula a repetição do movimento completo em "L"
    for (int movimento = 0; movimento < 1; movimento++) {  // Apenas 1 movimento "L"
        // Loop interno com WHILE: movimento vertical (duas casas para baixo)
        int passo = 0;
        while (passo < casasParaBaixo) {
            printf("Baixo\n");
            passo++;
        }

        // Movimento horizontal (uma casa para a esquerda)
        printf("Esquerda\n");
    }

    return 0;
}
