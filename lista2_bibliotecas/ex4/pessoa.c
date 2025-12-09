#include <stdio.h>
#include "pessoa.h"

// Função auxiliar para copiar string sem usar string.h
void copiar_string(char dest[], char orig[]) {
    int i = 0;
    while (orig[i] != '\0') {
        dest[i] = orig[i];
        i++;
    }
    dest[i] = '\0';
}

// Cria e retorna uma struct Pessoa preenchida
Pessoa criarPessoa(char nome[], int idade) {
    Pessoa p;
    copiar_string(p.nome, nome);
    p.idade = idade;
    return p;
}

// Imprime
void mostrarPessoa(Pessoa p) {
    printf("\n===== DADOS DA PESSOA =====\n");
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d anos\n", p.idade);
    printf("===========================\n");
}
