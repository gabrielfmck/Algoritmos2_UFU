#include <stdio.h>

float calcularHipotenusa(float a, float b) {
    float hip = 0;
    float soma = a * a + b * b;
    
    for (float i = 0; i * i <= soma; i += 0.0001) {
        if (i * i <= soma) {
            hip = i;
        }
    }
    
    return hip;
}

int main() {
    float a, b, hip;
    
    printf("Digite o valor do cateto A: ");
    scanf("%f", &a);
    
    printf("Digite o valor do cateto B: ");
    scanf("%f", &b);
    
    hip = calcularHipotenusa(a, b);
    
    printf("\nA hipotenusa do triangulo com os catetos %.2f e %.2f eh: %.2f\n", a, b, hip);
    
    return 0;
}
