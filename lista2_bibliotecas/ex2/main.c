#include <stdio.h>
#include "mstring.h"

#define MAX_STR 256

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
    int opcao;
    char str1[MAX_STR], str2[MAX_STR], resultado[MAX_STR * 2];

    do {
        printf("\n========== MANIPULACAO DE STRINGS ==========\n");
        printf("1. Tamanho da string (mstrlen)\n");
        printf("2. Copiar string (mstrcpy)\n");
        printf("3. Concatenar strings (mstrcat)\n");
        printf("4. Comparar strings (mstrcmp)\n");
        printf("5. Converter para maiusculas (mstrupper)\n");
        printf("6. Converter para minusculas (mstrlower)\n");
        printf("7. Contar vogais (mcount_vogais)\n");
        printf("8. Verificar palindromo (meh_palindromo)\n");
        printf("9. Remover espacos (mremove_espacos)\n");
        printf("0. Sair\n");
        printf("=============================================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar(); // Limpa o buffer do '\n'

        switch (opcao) {
            case 1:
                printf("Digite uma string: ");
                fgets(str1, MAX_STR, stdin);
                remove_newline(str1);
                printf("Tamanho: %d caracteres\n", mstrlen(str1));
                break;

            case 2:
                printf("Digite a string origem: ");
                fgets(str1, MAX_STR, stdin);
                remove_newline(str1);
                mstrcpy(resultado, str1);
                printf("String copiada: \"%s\"\n", resultado);
                break;

            case 3:
                printf("Digite a primeira string: ");
                fgets(str1, MAX_STR, stdin);
                remove_newline(str1);
                printf("Digite a segunda string: ");
                fgets(str2, MAX_STR, stdin);
                remove_newline(str2);
                mstrcpy(resultado, str1);
                mstrcat(resultado, str2);
                printf("Resultado da concatenacao: \"%s\"\n", resultado);
                break;

            case 4:
                printf("Digite a primeira string: ");
                fgets(str1, MAX_STR, stdin);
                remove_newline(str1);
                printf("Digite a segunda string: ");
                fgets(str2, MAX_STR, stdin);
                remove_newline(str2);
                int cmp = mstrcmp(str1, str2);
                if (cmp < 0) {
                    printf("\"%s\" < \"%s\"\n", str1, str2);
                } else if (cmp > 0) {
                    printf("\"%s\" > \"%s\"\n", str1, str2);
                } else {
                    printf("As strings sao iguais!\n");
                }
                break;

            case 5:
                printf("Digite uma string: ");
                fgets(str1, MAX_STR, stdin);
                remove_newline(str1);
                mstrupper(str1);
                printf("Em maiusculas: \"%s\"\n", str1);
                break;

            case 6:
                printf("Digite uma string: ");
                fgets(str1, MAX_STR, stdin);
                remove_newline(str1);
                mstrlower(str1);
                printf("Em minusculas: \"%s\"\n", str1);
                break;

            case 7:
                printf("Digite uma string: ");
                fgets(str1, MAX_STR, stdin);
                remove_newline(str1);
                printf("Numero de vogais: %d\n", mcount_vogais(str1));
                break;

            case 8:
                printf("Digite uma string: ");
                fgets(str1, MAX_STR, stdin);
                remove_newline(str1);
                if (meh_palindromo(str1)) {
                    printf("\"%s\" eh um palindromo!\n", str1);
                } else {
                    printf("\"%s\" NAO eh um palindromo.\n", str1);
                }
                break;

            case 9:
                printf("Digite uma string: ");
                fgets(str1, MAX_STR, stdin);
                remove_newline(str1);
                mremove_espacos(str1);
                printf("Sem espacos: \"%s\"\n", str1);
                break;

            case 0:
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}
