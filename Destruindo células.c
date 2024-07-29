/*Ambrósio precisa eliminar alguns elementos de uma tabela.
Como Ambrósio é preguiçoso, lhe pediu para fazer um programa que dado um array bidimensional e a quantidade de eliminações, destrua as células da tabela.
As células podem ter valor 1 (Viva) ou 0 (Morta).
Se a célula estiver viva, ela pode ser destruída.
Caso uma célula seja destruída, troque o valor dela de 1 para 0.
Note que se o número de linhas for par, você deve eliminar células linha por linha, da esquerda para a direita e de cima para baixo.
Já se o número de linhas for ímpar você deve eliminar células coluna por coluna, de cima para baixo e da esquerda para a direita.
Observe também que pode haver mais eliminações do que células disponíveis para destruir, sendo assim, irão restar eliminações.*/

#include <stdio.h>

int main() {

    int linhas, colunas;
    scanf("%d %d", &linhas, &colunas);
    int matriz[linhas][colunas];

    int numero;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &numero);
            matriz[i][j] = numero;
        }
    }

    int eliminacoes;
    scanf("%d", &eliminacoes);

    if (linhas % 2 == 0) {
        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                if (matriz[i][j] == 1) {
                    matriz[i][j] = 0;
                    eliminacoes--;
                    if (eliminacoes == 0) {
                        break;
                    }
                }
            }
            if (eliminacoes == 0) {
                break;
            }
        }
    }

    if (linhas % 2 != 0) {
        for (int j = 0; j < colunas; j++) {
            for (int i = 0; i < linhas; i++) {
                if (matriz[i][j] == 1) {
                    matriz[i][j] = 0;
                    eliminacoes--;
                    if (eliminacoes == 0) {
                        break;
                    }
                }
            }
            if (eliminacoes == 0) {
                break;
            }
        }
    }

    int quantidadeCelulasVivas = 0;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] == 1) {
                quantidadeCelulasVivas++;
            }
        }
    }

    int jMaximo = colunas - 1;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (j == jMaximo) {
                printf("%d", matriz[i][j]);
            }
            else {
                printf("%d ", matriz[i][j]);
            }
        }
        printf("\n");
    }

    printf("%d %d", eliminacoes, quantidadeCelulasVivas);

    return 0;

}