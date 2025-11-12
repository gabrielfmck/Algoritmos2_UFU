#include <stdio.h>

void gerarExclamacoes(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("!");
        }
        printf("\n");
    }
}

int main() {
    int n;
    
    printf("Digite um valor: ");
    scanf("%d", &n);
    
    printf("\n");
    gerarExclamacoes(n);
    
    return 0;
}