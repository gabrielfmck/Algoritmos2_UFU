#include <stdio.h>
#include "pessoa.h"

// Função para remover o '\n' do fgets
void remove_newline(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] == '\n') {
            s[i] = '\0';
            break;
        }
        i++;
    }
}

int main() {
    char nome[50];
    int idade;
    Pessoa p;

    printf("===== CADASTRO DE PESSOA =====\n");

    printf("Digite o nome: ");
    fgets(nome, 50, stdin);
    remove_newline(nome);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    // Cria a pessoa usando a função da biblioteca
    p = criarPessoa(nome, idade);

    // Mostra os dados usando a função da biblioteca
    mostrarPessoa(p);

    return 0;
}
