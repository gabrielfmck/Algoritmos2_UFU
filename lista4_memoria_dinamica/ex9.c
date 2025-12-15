#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor = NULL;
    int numero;
    int quantidade = 0;
    int i;

    printf("=== Leitura com REALLOC ===\n");
    printf("Digite numeros inteiros (numero negativo para parar):\n\n");

    while (1) {
        printf("Numero %d: ", quantidade + 1);
        scanf("%d", &numero);

        if (numero < 0) {
            break;
        }

        vetor = (int *) realloc(vetor, (quantidade + 1) * sizeof(int));

        if (vetor == NULL) {
            printf("Erro ao alocar memoria!\n");
            return 1;
        }

        vetor[quantidade] = numero;
        quantidade++;
    }

    if (quantidade > 0) {
        printf("\n=== Vetor lido ===\n");
        printf("Total de elementos: %d\n\n", quantidade);
        
        for (i = 0; i < quantidade; i++) {
            printf("vetor[%d] = %d\n", i, vetor[i]);
        }

        free(vetor);
    } else {
        printf("\nNenhum numero foi armazenado.\n");
    }

    return 0;
}
