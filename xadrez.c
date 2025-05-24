#include <stdio.h>

// ======== Funções Recursivas ========

// TORRE - Movimento para a Direita
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);  // Chamada recursiva
}

// RAINHA - Movimento para a Esquerda
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);  // Chamada recursiva
}

// BISPO - Movimento Diagonal com Recursão + Loops Aninhados
void moverBispoRecursivo(int linha, int max) {
    if (linha >= max) return;

    for (int coluna = 0; coluna < max; coluna++) {
        if (linha == coluna) {
            printf("Cima Direita\n");
        }
    }

    moverBispoRecursivo(linha + 1, max);  // Próxima linha recursivamente
}

// ======== Movimento do Cavalo com Loops Complexos ========
void moverCavalo(int movimentosMaximos) {
    for (int i = 0; i < movimentosMaximos; i++) {
        for (int cima = 0; cima <= 2; cima++) {
            if (cima == 2) {
                for (int direita = 0; direita <= 1; direita++) {
                    if (direita == 1) {
                        printf("Cima\n");
                        printf("Cima\n");
                        printf("Direita\n");
                        break;
                    } else {
                        continue;
                    }
                }
            }
        }
    }
}

int main() {
    // Entradas definidas diretamente no código
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;
    int movimentosCavalo = 2;

    // ================= TORRE =================
    printf("Movimento da Torre:\n");
    moverTorre(movimentoTorre);
    printf("\n");

    // ================= BISPO =================
    printf("Movimento do Bispo:\n");
    moverBispoRecursivo(0, movimentoBispo);
    printf("\n");

    // ================= RAINHA =================
    printf("Movimento da Rainha:\n");
    moverRainha(movimentoRainha);
    printf("\n");

    // ================= CAVALO =================
    printf("Movimento do Cavalo:\n");
    moverCavalo(movimentosCavalo);
    printf("\n");

    return 0;
}
