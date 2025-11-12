#include <stdio.h>

int converterSeg(int hrs, int min, int seg) {
    int totalSeg;
    totalSeg = hrs * 3600 + min * 60 + seg;
    return totalSeg;
}

int main() {
    int hrs, min, seg, total;
    
    printf("Digite as horas: ");
    scanf("%d", &hrs);
    
    printf("Digite os minutos: ");
    scanf("%d", &min);
    
    printf("Digite os segundos: ");
    scanf("%d", &seg);
    
    total = converterSeg(hrs, min, seg);
    
    printf("\n%d:%d:%d equivale a %d segundos\n", hrs, min, seg, total);
    
    return 0;
}