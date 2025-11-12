#include <stdio.h>

int fat(int n) {
    int result = 1;
    
    for (int i = 1; i <= n; i++) {
        result = result * i;
    }
    
    return result;
}

int main() {
    int n, result;
    
    printf("Digite um numero positivo: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("\nO numero deve ser positivo\n");
    } else {
        result = fat(n);
        printf("\n%d! = %d\n", n, result);
    }
    
    return 0;
}