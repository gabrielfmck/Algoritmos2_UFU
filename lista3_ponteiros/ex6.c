#include <stdio.h>

int somadobro(int *a, int *b)
{
    *a = *a * 2;
    *b = *b * 2;
    return *a + *b;
}

int main()
{
    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    int soma = somadobro(&a, &b);

    printf("Dobro de a: %d\n", a);
    printf("Dobro de b: %d\n", b);
    printf("Soma dos dobros: %d\n", soma);

    return 0;
}
