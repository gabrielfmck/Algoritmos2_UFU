#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;

    printf("Endereco de a: %p\n", &a);
    printf("Endereco de b: %p\n", &b);

    if (&a > &b)
        printf("Maior endereco: %p (a)\n", &a);
    else
        printf("Maior endereco: %p (b)\n", &b);

    return 0;
}
