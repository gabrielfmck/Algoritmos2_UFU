#include <stdio.h>

int contarPrimos(int n) {
    int quantidade = 0;
    
    for (int i = 2; i < n; i++) {
        int ehPrimo = 1;
        
        if (i < 2) {
            ehPrimo = 0;
        } else {
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    ehPrimo = 0;
                }
            }
        }
        
        if (ehPrimo) {
            quantidade++;
        }
    }
    
    return quantidade;
}

int main() {
    int n, quantidade;
    
    printf("Digite um numero N: ");
    scanf("%d", &n);
    
    quantidade = contarPrimos(n);
    
    printf("\nQuantidade de numeros primos abaixo de %d: %d\n", n, quantidade);
    
    return 0;
}
