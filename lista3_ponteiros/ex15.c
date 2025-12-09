#include <stdio.h>
#include <math.h>

int raizes(float A, float B, float C, float *X1, float *X2)
{
    if (A == 0)
        return -1;

    float delta = B * B - 4 * A * C;

    if (delta < 0)
        return 0;
    else if (delta == 0)
    {
        *X1 = -B / (2 * A);
        *X2 = *X1;
        return 1;
    }
    else
    {
        *X1 = (-B + sqrt(delta)) / (2 * A);
        *X2 = (-B - sqrt(delta)) / (2 * A);
        return 2;
    }
}

int main()
{
    float a, b, c, x1, x2;

    printf("Digite o coeficiente A: ");
    scanf("%f", &a);

    printf("Digite o coeficiente B: ");
    scanf("%f", &b);

    printf("Digite o coeficiente C: ");
    scanf("%f", &c);

    int n = raizes(a, b, c, &x1, &x2);

    if (n == -1)
        printf("A deve ser diferente de zero.\n");
    else if (n == 0)
        printf("Nao existem raizes reais.\n");
    else if (n == 1)
        printf("Uma raiz real: X = %.2f\n", x1);
    else
        printf("Duas raizes reais: X1 = %.2f, X2 = %.2f\n", x1, x2);

    return 0;
}
