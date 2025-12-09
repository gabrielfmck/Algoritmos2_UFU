#ifndef PESSOA_H
#define PESSOA_H

typedef struct {
    char nome[50];
    int idade;
} Pessoa;

Pessoa criarPessoa(char nome[], int idade);
void mostrarPessoa(Pessoa p);

#endif
