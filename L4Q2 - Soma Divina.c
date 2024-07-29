/*
Em uma aula extra, Silvio precisa escrever a soma de duas matrizes quadradas.
Como o quadro da sala é muito pequeno, a soma não pode ser feita adequadamente.
Em troca de 0,125 pontos, Zé aluno do CIn se oferece para resolver o problema, e precisa de sua ajuda.
Sua tarefa é escrever um programa que dadas duas matrizes, realize a soma entre elas.
*/

#include <stdio.h>

int main() {

    int numeroOrdem, numero, soma;
    scanf("%d", &numeroOrdem);
    
    if (numeroOrdem == 0) {
        printf("Vazia");
    }

    int matriz1[numeroOrdem][numeroOrdem];
    int matriz2[numeroOrdem][numeroOrdem];

    for (int i = 0; i < numeroOrdem; i++) {
        for (int j = 0; j < numeroOrdem; j++) {
            scanf("%d", &numero);
            matriz1[i][j] = numero;
        }
    }

    for (int i = 0; i < numeroOrdem; i++) {
        for (int j = 0; j < numeroOrdem; j++) {
            scanf("%d", &numero);
            matriz2[i][j] = numero;
        }
    }

    for (int i = 0; i < numeroOrdem; i++) {
        for (int j = 0; j < numeroOrdem; j++) {
            soma = matriz1[i][j] + matriz2[i][j];
            printf("%d\n", soma);
        }
    }

    return 0;

}