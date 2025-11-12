#include <stdio.h>

int somaAlgarismos(int numero) {
    int soma = 0;
    
    for (; numero > 0; numero = numero / 10) {
        soma = soma + (numero % 10);
    }
    
    return soma;
}

int main() {
    int numero, soma;
    
    printf("Digite um numero maior que zero: ");
    scanf("%d", &numero);
    
    if (numero <= 0) {
        printf("Numero invalido\n");
    } else {
        soma = somaAlgarismos(numero);
        printf("A soma de %d eh: %d\n", numero, soma);
    }
    
    return 0;
}