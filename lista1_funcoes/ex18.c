#include <stdio.h>

int potencia(int x, int z) {
    int result = 1;
    
    for (int i = 0; i < z; i++) {
        result = result * x;
    }
    
    return result;
}

int main() {
    int x, z, result;
    
    printf("Digite o valor da base X: ");
    scanf("%d", &x);
    
    printf("Digite o valor do expoente Z: ");
    scanf("%d", &z);
    
    result = potencia(x, z);
    
    printf("\n%d elevado a %d = %d\n", x, z, result);
    
    return 0;
}