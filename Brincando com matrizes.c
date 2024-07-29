/*
Escreva um programa que leia uma matriz 3 x 3 de inteiros da entrada padrão e calcule a média de todos seus valores, o maior valor lido, o valor delta e a soma dos elementos da diagonal princial.
O delta é igual a 1 se o maior valor for positivo, -1 se for negativo e zero se for zero.
*/

#include <stdio.h>

int main() {

    int matriz[3][3];
    int soma = 0;
    int delta, somaDiagonal;
    double media;
    int maiorValor = -999;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            soma = soma + matriz[i][j];
            if (matriz[i][j] >= maiorValor) {
                maiorValor = matriz[i][j];
            }
        }
    }

    media = (double) soma / 9.0;

    if (maiorValor > 0) {
        delta = 1;
    }
    if (maiorValor == 0) {
        delta = 0;
    }
    if (maiorValor < 0) {
        delta = -1;
    }

    somaDiagonal = matriz[0][0] + matriz[1][1] + matriz[2][2];

    printf("%.2lf ", media);
    printf("%d ", maiorValor);
    printf("%d ", delta);
    printf("%d ", somaDiagonal);

    return 0;

}