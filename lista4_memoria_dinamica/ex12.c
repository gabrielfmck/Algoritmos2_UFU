#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int codigo;
    char nome[51];
    int quantidade;
    float preco;
} Produto;

int main() {
    Produto *produtos;
    int n;
    int i;
    int indiceMaiorPreco = 0;
    int indiceMaiorQuantidade = 0;

    printf("=== Cadastro de Produtos - Estoque ===\n\n");

    printf("Digite o numero de produtos a cadastrar: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Numero invalido de produtos!\n");
        return 1;
    }

    produtos = (Produto *) malloc(n * sizeof(Produto));

    if (produtos == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    printf("\n--- Cadastro dos Produtos ---\n");
    for (i = 0; i < n; i++) {
        printf("\nProduto %d:\n", i + 1);
        
        printf("  Codigo: ");
        scanf("%d", &produtos[i].codigo);
        
        printf("  Nome: ");
        getchar();
        fgets(produtos[i].nome, 51, stdin);
        int len = strlen(produtos[i].nome);
        if (len > 0 && produtos[i].nome[len - 1] == '\n') {
            produtos[i].nome[len - 1] = '\0';
        }
        
        printf("  Quantidade em estoque: ");
        scanf("%d", &produtos[i].quantidade);
        
        printf("  Preco de venda: ");
        scanf("%f", &produtos[i].preco);
    }

    for (i = 1; i < n; i++) {
        if (produtos[i].preco > produtos[indiceMaiorPreco].preco) {
            indiceMaiorPreco = i;
        }
    }

    for (i = 1; i < n; i++) {
        if (produtos[i].quantidade > produtos[indiceMaiorQuantidade].quantidade) {
            indiceMaiorQuantidade = i;
        }
    }

    printf("\n\n=== Produtos Cadastrados ===\n");
    printf("%-10s %-30s %-12s %-10s\n", "Codigo", "Nome", "Quantidade", "Preco");
    printf("--------------------------------------------------------------\n");
    
    for (i = 0; i < n; i++) {
        printf("%-10d %-30s %-12d R$ %.2f\n", 
               produtos[i].codigo, 
               produtos[i].nome, 
               produtos[i].quantidade, 
               produtos[i].preco);
    }

    printf("\n=== Resultados ===\n");
    
    printf("\nProduto com MAIOR PRECO de venda:\n");
    printf("  Codigo: %d\n", produtos[indiceMaiorPreco].codigo);
    printf("  Nome: %s\n", produtos[indiceMaiorPreco].nome);
    printf("  Quantidade: %d\n", produtos[indiceMaiorPreco].quantidade);
    printf("  Preco: R$ %.2f\n", produtos[indiceMaiorPreco].preco);

    printf("\nProduto com MAIOR QUANTIDADE em estoque:\n");
    printf("  Codigo: %d\n", produtos[indiceMaiorQuantidade].codigo);
    printf("  Nome: %s\n", produtos[indiceMaiorQuantidade].nome);
    printf("  Quantidade: %d\n", produtos[indiceMaiorQuantidade].quantidade);
    printf("  Preco: R$ %.2f\n", produtos[indiceMaiorQuantidade].preco);

    free(produtos);

    return 0;
}
