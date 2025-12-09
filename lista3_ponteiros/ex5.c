#include <stdio.h>

void ordena(int *a, int *b)
{
    if (*a < *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main()
{
    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    ordena(&a, &b);

    printf("Maior (a): %d\n", a);
    printf("Menor (b): %d\n", b);

    return 0;
}
