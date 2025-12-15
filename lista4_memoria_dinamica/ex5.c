#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor;
    int n, x, i;
    int contadorMultiplos = 0;

    printf("Digite o tamanho do vetor (N): ");
    scanf("%d", &n);

    vetor = (int *) malloc(n * sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    printf("\nDigite os %d valores do vetor:\n", n);
    for (i = 0; i < n; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite o numero X para encontrar seus multiplos: ");
    scanf("%d", &x);

    printf("\nMultiplos de %d no vetor:\n", x);
    for (i = 0; i < n; i++) {
        if (vetor[i] % x == 0) {
            printf("%d ", vetor[i]);
            contadorMultiplos++;
        }
    }

    printf("\n\nTotal de multiplos de %d encontrados: %d\n", x, contadorMultiplos);

    free(vetor);

    return 0;
}
