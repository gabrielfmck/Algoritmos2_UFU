#include <stdio.h>

int quadradoPerfeito(int numero) {
    int result = 0;
    
    if (numero >= 0) {
        for (int i = 0; i * i <= numero; i++) {
            if (i * i == numero) {
                result = 1;
            }
        }
    }
    
    return result;
}

int main() {
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if (quadradoPerfeito(num)) {
        printf("%d eh um quadrado perfeito.\n", num);
    } else {
        printf("%d nao eh um quadrado perfeito.\n", num);
    }
    
    return 0;
}
