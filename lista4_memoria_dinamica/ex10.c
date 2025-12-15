#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    double *vetor;
    int tamanho;
    int i;

    srand(time(NULL));

    printf("=== Vetor de Double com MALLOC ===\n\n");

    do {
        printf("Digite o tamanho do vetor (minimo 10): ");
        scanf("%d", &tamanho);

        if (tamanho < 10) {
            printf("Erro: O tamanho deve ser maior ou igual a 10!\n\n");
        }
    } while (tamanho < 10);

    vetor = (double *) malloc(tamanho * sizeof(double));

    if (vetor == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    printf("\nMemoria alocada para %d elementos de double.\n", tamanho);

    for (i = 0; i < 10; i++) {
        vetor[i] = (double)(rand() % 10001) / 100.0;
    }

    printf("\nOs 10 primeiros elementos do vetor (valores aleatorios entre 0 e 100):\n");
    for (i = 0; i < 10; i++) {
        printf("vetor[%d] = %.2lf\n", i, vetor[i]);
    }

    free(vetor);

    return 0;
}
