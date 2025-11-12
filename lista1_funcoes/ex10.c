#include <stdio.h>

int maior(int a, int b) {
    int result;
    
    if (a > b) {
        result = a;
    } else {
        result = b;
    }
    
    return result;
}

int main() {
    int num1, num2, maiorNumero;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    maiorNumero = maior(num1, num2);
    
    printf("\nO maior numero entre %d e %d eh: %d\n", num1, num2, maiorNumero);
    
    return 0;
}