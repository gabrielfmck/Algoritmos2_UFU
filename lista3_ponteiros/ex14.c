#include <stdio.h>

void lerNotas(float *n1, float *n2)
{
    do
    {
        printf("Digite a nota 1 (0 a 10): ");
        scanf("%f", n1);
    } while (*n1 < 0 || *n1 > 10);

    do
    {
        printf("Digite a nota 2 (0 a 10): ");
        scanf("%f", n2);
    } while (*n2 < 0 || *n2 > 10);
}

void calcMedias(float n1, float n2, float *simples, float *ponderada)
{
    *simples = (n1 + n2) / 2;
    *ponderada = (n1 + n2 * 2) / 3;
}

int main()
{
    float n1, n2, simples, ponderada;

    lerNotas(&n1, &n2);
    calcMedias(n1, n2, &simples, &ponderada);

    printf("\nMedia simples: %.2f\n", simples);
    printf("Media ponderada: %.2f\n", ponderada);

    return 0;
}
