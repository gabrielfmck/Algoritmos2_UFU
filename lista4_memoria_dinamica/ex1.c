#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numeros;
    int i;

    numeros = (int *) malloc(5 * sizeof(int));

    if (numeros == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    printf("Digite 5 numeros inteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nOs numeros digitados foram:\n");
    for (i = 0; i < 5; i++) {
        printf("Numero %d: %d\n", i + 1, numeros[i]);
    }

    free(numeros);

    return 0;
}
