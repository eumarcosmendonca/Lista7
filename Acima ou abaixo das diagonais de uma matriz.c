/*
Em programação, por vezes, é necessário processar partes de uma matriz quadrada.
Faça um programa que opere sobre os elementos de uma matriz da seguinte forma:
Receba do usuário se você deve analisar acima ou abaixo da diagonal principal, de acordo com so exemplos.
Você deve verificar se a soma dos elementos especificados pelos parâmetros são maiores que um limiar informado pelo usuário
*/

#include <stdio.h>
#include <string.h>

int main() {

    char string[10];
    scanf("%s", string);

    int limiar;
    scanf("%d", &limiar);
    
    int ordemMatriz;
    scanf("%d", &ordemMatriz);
    int matriz[ordemMatriz][ordemMatriz];

    int numero;
    for (int i = 0; i < ordemMatriz; i++) {
        for (int j = 0; j < ordemMatriz; j++) {
            scanf("%d", &numero);
            matriz[i][j] = numero;
        }
    }

    int soma = 0;

    if (strcmp(string, "acima") == 0) {
        for (int i = 0; i < ordemMatriz; i++) {
            for (int j = 0; j < ordemMatriz; j++) {
                if (j > i) {
                    soma = soma + matriz[i][j];
                }
            }
        }
    }

    if (strcmp(string, "abaixo") == 0) {
        for (int i = 0; i < ordemMatriz; i++) {
            for (int j = 0; j < ordemMatriz; j++) {
                if (j < i) {
                    soma = soma + matriz[i][j];
                }
            }
        }
    }

    if (soma > limiar) {
        printf("True");
    }

    if (soma < limiar) {
        printf("False");
    }

    return 0;

}