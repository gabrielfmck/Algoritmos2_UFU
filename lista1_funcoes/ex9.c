#include <stdio.h>

float volumeCilindro(float raio, float altura) {
    float volume;
    volume = 3.141592 * raio * raio * altura;
    return volume;
}

int main() {
    float raio, altura, volume;
    
    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);
    
    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);
    
    volume = volumeCilindro(raio, altura);
    
    printf("\nO volume do cilindro com raio %.2f e altura %.2f eh: %.2f\n", raio, altura, volume);
    
    return 0;
}
