#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* alocarString(int tamanho) {
    char *str = (char *) malloc((tamanho + 1) * sizeof(char));
    if (str == NULL) {
        printf("Erro ao alocar memoria!\n");
        return NULL;
    }
    return str;
}

int ehVogal(char c) {
    char vogais[] = "aeiouAEIOU";
    for (int i = 0; i < 10; i++) {
        if (c == vogais[i]) {
            return 1;
        }
    }
    return 0;
}

void imprimirSemVogais(char *str) {
    printf("String sem vogais: ");
    for (int i = 0; str[i] != '\0'; i++) {
        if (!ehVogal(str[i])) {
            printf("%c", str[i]);
        }
    }
    printf("\n");
}

int main() {
    char *string;
    int tamanho;

    printf("Digite o tamanho da string: ");
    scanf("%d", &tamanho);
    getchar();

    string = alocarString(tamanho);
    if (string == NULL) {
        return 1;
    }

    printf("Digite o conteudo da string: ");
    fgets(string, tamanho + 1, stdin);
    
    int len = strlen(string);
    if (len > 0 && string[len - 1] == '\n') {
        string[len - 1] = '\0';
    }

    imprimirSemVogais(string);

    free(string);

    return 0;
}
