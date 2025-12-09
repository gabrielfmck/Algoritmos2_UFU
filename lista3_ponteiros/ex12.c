#include <stdio.h>

void frac(float num, int *inteiro, float *frac)
{
    *inteiro = (int)num;
    *frac = num - *inteiro;
}

int main()
{
    float num;
    int inteiro;
    float fracionario;

    printf("Digite um numero real: ");
    scanf("%f", &num);

    frac(num, &inteiro, &fracionario);

    printf("Parte inteira: %d\n", inteiro);
    printf("Parte fracionaria: %.4f\n", fracionario);

    return 0;
}
