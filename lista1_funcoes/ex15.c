#include <stdio.h>

int ehTriangulo(float a, float b, float c) {
    int result = 0;
    
    if (a < b + c && b < a + c && c < a + b) {
        result = 1;
    }

    return result;
}

void tipoTriangulo(float a, float b, float c) {
    if (a == b && b == c) {
        printf("Triangulo Equilatero (tem os tres lados iguais)\n");
    } else if (a == b || b == c || a == c) {
        printf("Triangulo Isosceles (tem dois lados iguais)\n");
    } else {
        printf("Triangulo Escaleno (tem tres lados diferentes)\n");
    }
}

int main() {
    float lado1, lado2, lado3;
    
    printf("Digite o primeiro lado do triangulo: ");
    scanf("%f", &lado1);
    
    printf("Digite o segundo lado do triangulo: ");
    scanf("%f", &lado2);
    
    printf("Digite o terceiro lado do triangulo: ");
    scanf("%f", &lado3);
    
    if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0) {
        printf("\nTodos os lados devem ser maiores que zero!\n");
    } else {
        if (ehTriangulo(lado1, lado2, lado3)) {
            printf("\nOs lados formam um triangulo!\n");
            tipoTriangulo(lado1, lado2, lado3);
        } else {
            printf("\nOs lados nao formam um triangulo!\n");
        }
    }
    
    return 0;
}
