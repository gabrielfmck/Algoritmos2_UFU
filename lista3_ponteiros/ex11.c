#include <stdio.h>

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nEnderecos dos valores pares:\n");
    for (int i = 0; i < 5; i++)
        if (arr[i] % 2 == 0)
            printf("arr[%d]: %p\n", i, &arr[i]);

    return 0;
}
