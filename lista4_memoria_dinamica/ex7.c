#include <stdio.h>
#include <stdlib.h>

int main() {
    int sorteados[6], bilhete[6];
    int *corretos;
    int i, j, acertos = 0;

    printf("=== LOTERIA ===\n\n");
    printf("Digite os 6 numeros sorteados pela loteria:\n");
    for (i = 0; i < 6; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &sorteados[i]);
    }

    printf("\nDigite os 6 numeros do seu bilhete:\n");
    for (i = 0; i < 6; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &bilhete[i]);
    }

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            if (bilhete[i] == sorteados[j]) {
                acertos++;
                break;
            }
        }
    }

    printf("\n=== RESULTADO ===\n");
    printf("Voce acertou %d numero(s)!\n", acertos);

    if (acertos > 0) {
        corretos = (int *) malloc(acertos * sizeof(int));

        if (corretos == NULL) {
            printf("Erro ao alocar memoria!\n");
            return 1;
        }

        int indice = 0;
        for (i = 0; i < 6; i++) {
            for (j = 0; j < 6; j++) {
                if (bilhete[i] == sorteados[j]) {
                    corretos[indice] = bilhete[i];
                    indice++;
                    break;
                }
            }
        }

        printf("\nNumeros sorteados: ");
        for (i = 0; i < 6; i++) {
            printf("%d ", sorteados[i]);
        }

        printf("\nSeus numeros corretos: ");
        for (i = 0; i < acertos; i++) {
            printf("%d ", corretos[i]);
        }
        printf("\n");

        free(corretos);
    } else {
        printf("\nVoce nao acertou nenhum numero.\n");
        
        printf("\nNumeros sorteados: ");
        for (i = 0; i < 6; i++) {
            printf("%d ", sorteados[i]);
        }
        printf("\n");
    }

    return 0;
}
