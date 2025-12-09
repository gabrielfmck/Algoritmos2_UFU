#include <stdio.h>
#include "operacoes.h"

int main() {
    int opcao, a, b, resultado;

    do {
        printf("\n===== CALCULADORA =====\n");
        printf("1. Soma\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("0. Sair\n");
        printf("=======================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro numero: ");
            scanf("%d", &a);
            printf("Digite o segundo numero: ");
            scanf("%d", &b);

            switch (opcao) {
                case 1:
                    resultado = soma(a, b);
                    printf("Resultado: %d + %d = %d\n", a, b, resultado);
                    break;
                case 2:
                    resultado = subtrai(a, b);
                    printf("Resultado: %d - %d = %d\n", a, b, resultado);
                    break;
                case 3:
                    resultado = multiplica(a, b);
                    printf("Resultado: %d * %d = %d\n", a, b, resultado);
                    break;
                case 4:
                    if (b == 0) {
                        printf("Erro: Divisao por zero!\n");
                    } else {
                        resultado = divide(a, b);
                        printf("Resultado: %d / %d = %d\n", a, b, resultado);
                    }
                    break;
            }
        } else if (opcao != 0) {
            printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    printf("Programa encerrado.\n");

    return 0;
}
