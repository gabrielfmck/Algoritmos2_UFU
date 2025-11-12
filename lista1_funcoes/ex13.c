#include <stdio.h>

float calcular(float num1, float num2, char operacao) {
    float result = 0;
    
    if (operacao == '+') {
        result = num1 + num2;
    } else if (operacao == '-') {
        result = num1 - num2;
    } else if (operacao == '*') {
        result = num1 * num2;
    } else if (operacao == '/') {
        if (num2 != 0) {
            result = num1 / num2;
        } else {
            printf("Erro: A divisao foi por zero!\n");
        }
    }
    
    return result;
}

int main() {
    float num1, num2, result;
    char operacao;
    
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    
    printf("Digite agora o segundo numero: ");
    scanf("%f", &num2);
    
    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);
    
    result = calcular(num1, num2, operacao);
    
    if (operacao == '/' && num2 == 0) {
    } else {
        printf("\n%.2f %c %.2f = %.2f\n", num1, operacao, num2, result);
    }
    
    return 0;
}
