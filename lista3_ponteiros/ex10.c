#include <stdio.h>

int main()
{
    int arr[5];
    int *p = arr;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite arr[%d]: ", i);
        scanf("%d", p + i);
    }

    printf("\nDobro dos valores:\n");
    for (int i = 0; i < 5; i++)
        printf("%d\n", *(p + i) * 2);

    return 0;
}
