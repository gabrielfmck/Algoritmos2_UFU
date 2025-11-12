#include <stdio.h>

float converterTemp(float celsius) {
    float fahrenheit;
    fahrenheit = celsius * (9.0 / 5.0) + 32.0;
    return fahrenheit;
}

int main() {
    float celsius, fahrenheit;
    
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    
    fahrenheit = converterTemp(celsius);
    
    printf("%.2f graus Celsius equivale a %.2f graus Fahrenheit\n", celsius, fahrenheit);
    
    return 0;
}
