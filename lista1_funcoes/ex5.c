#include <stdio.h>

float volumeEsfera(float raio) {
    float vol;
    vol = (4.0 / 3.0) * 3.14 * raio * raio * raio;
    return vol;
}

int main() {
    float raio, vol;
    
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);
    
    vol = volumeEsfera(raio);
    
    printf("O volume da esfera com raio %.2f eh: %.2f\n", raio, vol);
    
    return 0;
}