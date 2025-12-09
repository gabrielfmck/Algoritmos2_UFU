#include "operacoes.h"

int soma(int a, int b) {
    return a + b;
}

int subtrai(int a, int b) {
    return a - b;
}

int multiplica(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        return 0; // Retorna 0 em caso de divisão por zero
    }
    return a / b;
}
