#include <stdio.h>

// Função que gera um triângulo de altura n e base 2*n-1
void triangulo(int n) {
    for (int i = 1; i <= n; i++) {
        // Imprime espaços para centralizar
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        // Imprime asteriscos (2*i-1 asteriscos na linha i)
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        
        printf("\n");
    }
}

int main() {
    int n;
    
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    printf("\n");
    triangulo(n);
    
    return 0;
}
