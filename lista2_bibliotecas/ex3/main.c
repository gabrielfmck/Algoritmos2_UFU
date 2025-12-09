#include <stdio.h>
#include "conversor.h"

int main() {
    int opcao;
    float temperatura, resultado;

    do {
        printf("\n===== CONVERSOR DE TEMPERATURAS =====\n");
        printf("1 - Converter Celsius -> Fahrenheit\n");
        printf("2 - Converter Fahrenheit -> Celsius\n");
        printf("0 - Sair\n");
        printf("=====================================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a temperatura em Celsius: ");
                scanf("%f", &temperatura);
                resultado = celsius_fahrenheit(temperatura);
                printf("%.2f C = %.2f F\n", temperatura, resultado);
                break;

            case 2:
                printf("Digite a temperatura em Fahrenheit: ");
                scanf("%f", &temperatura);
                resultado = fahrenheit_celsius(temperatura);
                printf("%.2f F = %.2f C\n", temperatura, resultado);
                break;

            case 0:
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}