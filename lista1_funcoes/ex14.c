#include <stdio.h>

void analiseConsumo(float distancia, float litros) {
    float consumo;
    
    if (litros > 0) {
        consumo = distancia / litros;
        
        printf("\nConsumo: %.2f km/l\n", consumo);
        
        if (consumo < 8) {
            printf("Venda o carro, ele gasta demais!\n");
        } else if (consumo >= 8 && consumo <= 14) {
            printf("Carro economico!\n");
        } else {
            printf("Carro muito economico!\n");
        }
    } else {
        printf("Quantidade de litros de combustivel invalida!\n");
    }
}

int main() {
    float distancia, litros;
    
    printf("Digite a distancia percorrida pelo carro (em km): ");
    scanf("%f", &distancia);
    
    printf("Digite a quantidade de litros que foram consumidos: ");
    scanf("%f", &litros);
    
    analiseConsumo(distancia, litros);
    
    return 0;
}