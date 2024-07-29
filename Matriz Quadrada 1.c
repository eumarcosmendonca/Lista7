/*
Escreva um algoritmo que leia um inteiro N (0 ≤ N ≤ 100), correspondente a ordem de uma matriz M de inteiros, e construa a matriz de acordo com o exemplo abaixo.
*/

#include <stdio.h>

void print(int parametro, int matriz[][parametro]) {
    for (int i = 0; i < parametro; i++) {
        for (int j = 0; j < parametro; j++) {
            if (j == parametro - 1) {
                printf("%d", matriz[i][j]);
            }
            else {
                printf("%d ", matriz[i][j]);
            }
        }
        printf("\n");
    }
}

int primeiroZero(int parametro, int matriz[][parametro]) {
    for (int i = 0; i < parametro; i++) {
        if (matriz[i][i] == 0) {
            return i;
        }
    }
    return -1;
}

void preenchimento(int inicio, int final, int matriz[][final], int contador) {
    for (int i = inicio; i < final; i++) {
        if (matriz[inicio][i] == 0) {
            matriz[inicio][i] = contador;
        }
    }
    for (int i = 0; i < final; i++) {
        if (matriz[i][inicio] == 0) {
            matriz[i][inicio] = contador;
        }
    }
    for (int i = 0; i < final; i++) {
        if (matriz[inicio + i][final - inicio - 1] == 0) {
            matriz[inicio + i][final - inicio - 1] = contador;
        }
    }
    for (int i = 0; i < final; i++) {
        if (matriz[final - 1 - inicio][i] == 0) {
            matriz[final - 1 - inicio][i] = contador;
        }
    }
    int posicaoZero = primeiroZero(final, matriz);
    if (posicaoZero == -1) {
        return;
    }
    return preenchimento(posicaoZero, final, matriz, contador + 1);
}

int main() {

    int numero;
    scanf("%d", &numero);

    while (numero != 0) {
        
        int matriz[numero][numero];

        for (int i = 0; i < numero; i++) {
            for (int j = 0; j < numero; j++) {
                matriz[i][j] = 0;
            }
        }

        int posicaoZero = primeiroZero(numero, matriz);
        preenchimento(posicaoZero, numero, matriz, 1);
        print(numero, matriz);
        printf("\n");
        scanf("%d", &numero);
    }

    return 0;

}