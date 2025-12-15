#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int *memoria;
    int tamanhoBytes, tamanhoElementos;
    int opcao, posicao, valor;

    printf("=== Simulador de Memoria ===\n\n");
    printf("Tamanho de um inteiro: %lu bytes\n", sizeof(int));
    printf("Digite o tamanho da memoria em bytes (multiplo de %lu): ", sizeof(int));
    scanf("%d", &tamanhoBytes);

    if (tamanhoBytes % sizeof(int) != 0) {
        printf("Erro: O tamanho deve ser multiplo de %lu bytes!\n", sizeof(int));
        return 1;
    }

    tamanhoElementos = tamanhoBytes / sizeof(int);

    memoria = (int *) calloc(tamanhoElementos, sizeof(int));

    if (memoria == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    printf("\nMemoria alocada com sucesso! (%d posicoes de inteiros)\n", tamanhoElementos);

    do {
        printf("\n=== MENU ===\n");
        printf("1 - Inserir valor em uma posicao\n");
        printf("2 - Consultar valor de uma posicao\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a posicao (0 a %d): ", tamanhoElementos - 1);
                scanf("%d", &posicao);
                
                if (posicao < 0 || posicao >= tamanhoElementos) {
                    printf("Posicao invalida!\n");
                } else {
                    printf("Digite o valor a ser inserido: ");
                    scanf("%d", &valor);
                    memoria[posicao] = valor;
                    printf("Valor %d inserido na posicao %d com sucesso!\n", valor, posicao);
                }
                break;

            case 2:
                printf("Digite a posicao a ser consultada (0 a %d): ", tamanhoElementos - 1);
                scanf("%d", &posicao);
                
                if (posicao < 0 || posicao >= tamanhoElementos) {
                    printf("Posicao invalida!\n");
                } else {
                    printf("Valor na posicao %d: %d\n", posicao, memoria[posicao]);
                }
                break;

            case 0:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    free(memoria);

    return 0;
}
