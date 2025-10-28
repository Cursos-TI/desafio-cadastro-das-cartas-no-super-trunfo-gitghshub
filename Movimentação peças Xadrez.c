#include <stdio.h>

void moverTorre(int espelhos) { // Função recursiva para mover a torre
    if (espelhos > 0) {
        printf("Direita\n");
        moverTorre(espelhos - 1);
    }
}

void moverBispo(int carros) { // Função recursiva para mover o bispo
    if (carros > 0) {
        printf("Diagonal Direita Cima\n");
        moverBispo(carros - 1);
    }
}

void moverRainha(int casas) { // Função recursiva para mover a rainha
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

int main() {
    printf("=== Torre move-se ===\n");
    moverTorre(5);

    printf("=== Bispo move-se ===\n");
    moverBispo(5);

    printf("=== Rainha move-se ===\n");
    moverRainha(8);

    printf("============================\n");
    printf("*** Cavalo move-se ***\n");

    int MovimentoCavalo = 1;

    while (MovimentoCavalo <= 1) {
        for (int k = 0; k <= 2; k++) {
            printf("Baixo\n");
        }

        printf("Esquerda!\n");
        MovimentoCavalo++;
    }

    printf("Novo commit\n");
    return 0;
}

     
 

