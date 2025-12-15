#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 1500

int main() {
    int *vetor;
    int i;
    int contadorZeros = 0;

    vetor = (int *) calloc(TAMANHO, sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    printf("=== Exercicio 8 - CALLOC ===\n\n");

    for (i = 0; i < TAMANHO; i++) {
        if (vetor[i] == 0) {
            contadorZeros++;
        }
    }
    printf("a) Quantidade de zeros no vetor: %d\n", contadorZeros);
    printf("   Verificacao: %s\n\n", (contadorZeros == TAMANHO) ? "PASSOU - Todos os 1500 valores sao zero" : "FALHOU");

    for (i = 0; i < TAMANHO; i++) {
        vetor[i] = i;
    }
    printf("b) Valores dos indices atribuidos aos elementos.\n\n");

    printf("c) Os 10 primeiros elementos do vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("   vetor[%d] = %d\n", i, vetor[i]);
    }

    printf("\n   Os 10 ultimos elementos do vetor:\n");
    for (i = TAMANHO - 10; i < TAMANHO; i++) {
        printf("   vetor[%d] = %d\n", i, vetor[i]);
    }

    free(vetor);

    return 0;
}
