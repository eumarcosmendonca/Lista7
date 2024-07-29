/*
A Entidade, como todos sabem, gosta muito de matemática.
Essa semana ela estava se divertindo com matrizes quadradas e se perguntou que tipo de padrão bonito deve ser formar se ela inverter a diagonal principal, multiplicar a diagonal secundária por dois e achar a transposta da matriz.
Ela está ocupada buscando outros tipos de padrões e gostaria que você fizesse um programa que aplicasse as operações na matriz.
*/

#include <stdio.h>

int main() {

    int ordemMatriz;
    scanf("%d", &ordemMatriz);
    int matriz1[ordemMatriz][ordemMatriz];
    int matriz2[ordemMatriz][ordemMatriz];

    int numero;
    for (int i = 0; i < ordemMatriz; i++) {
        for (int j = 0; j < ordemMatriz; j++) {
            scanf("%d", &numero);
            matriz1[i][j] = numero;
        }
    }

    for (int i = 0; i < ordemMatriz; i++) {
        for (int j = 0; j < ordemMatriz; j++) {
            matriz2[j][i] = matriz1[i][j];
        }
    }

    int linhaMaxima = ordemMatriz - 1;
    int colunaMaxima = ordemMatriz - 1;
    for (int i = 0; i < ordemMatriz; i++) {
        for (int j = 0; j < ordemMatriz; j++) {
            if (i == j) {
                matriz2[linhaMaxima][colunaMaxima] = matriz1[i][j];
                linhaMaxima = linhaMaxima - 1;
                colunaMaxima = colunaMaxima - 1;
            }
        }
    }

    int iInicial = 0;
    int jMaximo = ordemMatriz - 1;
    for (int i = 0; i < ordemMatriz; i++) {
        for (int j = 0; j < ordemMatriz; j++) {
            if (i == iInicial && j == jMaximo) {
                matriz2[iInicial][jMaximo] = matriz2[i][j] * 2;
                iInicial++;
                jMaximo--;
            }
        }
    }

    for (int i = 0; i < ordemMatriz; i++) {
        for (int j = 0; j < ordemMatriz; j++) {
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }

    return 0;

}