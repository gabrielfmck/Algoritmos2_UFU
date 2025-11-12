#include <stdio.h>

void mostrarData(int dia, int mes, int ano) {
    printf("%d de ", dia);
    
    switch(mes) {
        case 1: 
            printf("janeiro de %d", ano);
            return;
        case 2: 
            printf("fevereiro de %d", ano);
            return;
        case 3: 
            printf("marco de %d", ano);
            return;
        case 4: 
            printf("abril de %d", ano);
            return;
        case 5: 
            printf("maio de %d", ano);
            return;
        case 6: 
            printf("junho de %d", ano);
            return;
        case 7: 
            printf("julho de %d", ano);
            return;
        case 8: 
            printf("agosto de %d", ano);
            return;
        case 9: 
            printf("setembro de %d", ano);
            return;
        case 10: 
            printf("outubro de %d", ano);
            return;
        case 11: 
            printf("novembro de %d", ano);
            return;
        case 12: 
            printf("dezembro de %d", ano);
            return;
        default: 
            printf("mes inválido de %d", ano);
            return;
    }
}

int main() {
    int dia, mes, ano;
    
    printf("Digite o dia: ");
    scanf("%d", &dia);
    
    printf("Digite o mes: ");
    scanf("%d", &mes);
    
    printf("Digite o ano: ");
    scanf("%d", &ano);
    
    printf("\nData: %02d/%02d/%d\n", dia, mes, ano);
    mostrarData(dia, mes, ano);
    
    return 0;
}