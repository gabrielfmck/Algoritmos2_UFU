#include <stdio.h>

void soma(int *a, int b)
{
    *a = *a + b;
}

int main()
{
    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    soma(&a, b);

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
