#include <stdio.h>

int somaEntre(int num1, int num2) {
    int soma = 0;
    int menor, maior;
    
    if (num1 < num2) {
        menor = num1;
        maior = num2;
    } else {
        menor = num2;
        maior = num1;
    }

    for (int i = menor + 1; i < maior; i++) {
        soma = soma + i;
    }
    
    return soma;
}

int main() {
    int num1, num2, result;
    
    printf("Digite o primeiro numero positivo: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo numero positivo: ");
    scanf("%d", &num2);
    
    if (num1 <= 0 || num2 <= 0) {
        printf("\nOs numeros devem ser positivos!\n");
    } else {
        result = somaEntre(num1, num2);
        printf("\nA soma dos numeros entre %d e %d eh: %d\n", num1, num2, result);
    }
    
    return 0;
}
