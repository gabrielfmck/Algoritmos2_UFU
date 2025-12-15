#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int matricula;
    char sobrenome[50];
    int anoNascimento;
} Aluno;

int main() {
    Aluno *alunos;
    int numAlunos;
    int i;

    printf("=== Cadastro de Alunos ===\n\n");

    printf("Digite o numero de alunos a serem cadastrados: ");
    scanf("%d", &numAlunos);

    if (numAlunos <= 0) {
        printf("Numero invalido de alunos!\n");
        return 1;
    }

    alunos = (Aluno *) malloc(numAlunos * sizeof(Aluno));

    if (alunos == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    printf("\n--- Entrada de dados ---\n");
    for (i = 0; i < numAlunos; i++) {
        printf("\nAluno %d:\n", i + 1);
        
        printf("  Matricula: ");
        scanf("%d", &alunos[i].matricula);
        
        printf("  Sobrenome: ");
        scanf("%s", alunos[i].sobrenome);
        
        printf("  Ano de nascimento: ");
        scanf("%d", &alunos[i].anoNascimento);
    }

    printf("\n\n=== Dados dos Alunos Cadastrados ===\n");
    printf("%-10s %-20s %-15s\n", "Matricula", "Sobrenome", "Ano Nasc.");
    printf("--------------------------------------------------\n");
    
    for (i = 0; i < numAlunos; i++) {
        printf("%-10d %-20s %-15d\n", 
               alunos[i].matricula, 
               alunos[i].sobrenome, 
               alunos[i].anoNascimento);
    }

    free(alunos);
    printf("\nMemoria liberada com sucesso!\n");

    return 0;
}
