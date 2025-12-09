#include <stdio.h>

int main()
{
    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Endereco de a: %p\n", &a);
    printf("Endereco de b: %p\n", &b);

    if (&a > &b)
        printf("Conteudo do maior endereco: %d\n", a);
    else
        printf("Conteudo do maior endereco: %d\n", b);

    return 0;
}
