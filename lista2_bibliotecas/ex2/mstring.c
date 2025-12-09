#include "mstring.h"

// Retorna o tamanho da string (sem contar o '\0')
int mstrlen(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

// Copia a string orig para dest
void mstrcpy(char dest[], char orig[]) {
    int i = 0;
    while (orig[i] != '\0') {
        dest[i] = orig[i];
        i++;
    }
    dest[i] = '\0';
}

// Concatena orig ao final de dest
void mstrcat(char dest[], char orig[]) {
    int i = 0;
    int j = 0;
    
    // Encontra o final de dest
    while (dest[i] != '\0') {
        i++;
    }
    
    // Copia orig para o final de dest
    while (orig[j] != '\0') {
        dest[i] = orig[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}

// Compara duas strings: <0 se a<b, 0 se igual, >0 se a>b
int mstrcmp(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i]) {
            return a[i] - b[i];
        }
        i++;
    }
    return a[i] - b[i];
}

// Essa transforma a string em maiúsculas
void mstrupper(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 'a' + 'A';
        }
        i++;
    }
}

// Transforma a string em minúsculas
void mstrlower(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] - 'A' + 'a';
        }
        i++;
    }
}

// Função de auxilio para verificar se é vogal
int eh_vogal(char c) {
    // Converte para minúscula se for maiúscula
    if (c >= 'A' && c <= 'Z') {
        c = c - 'A' + 'a';
    }
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

// Conta o número de vogais na string
int mcount_vogais(char s[]) {
    int i = 0;
    int count = 0;
    while (s[i] != '\0') {
        if (eh_vogal(s[i])) {
            count++;
        }
        i++;
    }
    return count;
}

// Função auxiliar para converter caractere para minúscula
char para_minuscula(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c - 'A' + 'a';
    }
    return c;
}

// Verifica se a string é um palíndromo (ignora maiúsculas/minúsculas e espaços)
int meh_palindromo(char s[]) {
    int inicio = 0;
    int fim = mstrlen(s) - 1;
    
    while (inicio < fim) {
        // Pula espaços no início
        while (inicio < fim && s[inicio] == ' ') {
            inicio++;
        }
        // Pula espaços no fim
        while (inicio < fim && s[fim] == ' ') {
            fim--;
        }
        
        // Compara caracteres (ignorando maiúsculas/minúsculas)
        if (para_minuscula(s[inicio]) != para_minuscula(s[fim])) {
            return 0;
        }
        inicio++;
        fim--;
    }
    return 1;
}

// Remove todos os espaços da string (deslocando os caracteres)
void mremove_espacos(char s[]) {
    int i = 0;
    int j = 0;
    
    while (s[i] != '\0') {
        if (s[i] != ' ') {
            s[j] = s[i];
            j++;
        }
        i++;
    }
    s[j] = '\0';
}
