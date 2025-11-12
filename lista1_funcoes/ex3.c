#include <stdio.h>

int verificarNumero(int numero) {
    if (numero > 0) {
        return 1;
    } else if (numero < 0) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    int num, result;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    result = verificarNumero(num);
    
    if (result == 1) {
        printf("O numero %d eh positivo.", num);
    } else if (result == -1) {
        printf("O numero %d eh negativo.", num);
    } else {
        printf("O numero eh zero.");
    }
    
    return 0;
}
