/*
O jogo de Sudoku espalhou-se rapidamente por todo o mundo, tornando-se hoje o passatempo mais popular em todo o planeta.
Muitas pessoas, entretanto, preenchem a matriz de forma incorreta, desrespeitando as restrições do jogo.
Sua tarefa neste problema é escrever um programa que verifica se uma matriz preenchida é ou não uma solução para o problema.
A matriz do jogo é uma matriz de inteiros 9 x 9.
Para ser uma solução do problema, cada linha e coluna deve conter todos os números de 1 a 9.
Além disso, se dividirmos a matriz em 9 regiões 3 x 3, cada uma destas regiões também deve conter os números de 1 a 9.
O exemplo abaixo mostra uma matriz que é uma solução do problema. 
*/

#include <stdio.h>

int verificadorBloco(int matriz[][3]) {

    int contador = 0;
    int verificadorNumero1 = 0;
    int verificadorNumero2 = 0;
    int verificadorNumero3 = 0;
    int verificadorNumero4 = 0;
    int verificadorNumero5 = 0;
    int verificadorNumero6 = 0;
    int verificadorNumero7 = 0;
    int verificadorNumero8 = 0;
    int verificadorNumero9 = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] == 1 && verificadorNumero1 == 0) {
                contador++;
            }
            if (matriz[i][j] == 2 && verificadorNumero2 == 0) {
                contador++;
            }
            if (matriz[i][j] == 3 && verificadorNumero3 == 0) {
                contador++;
            }
            if (matriz[i][j] == 4 && verificadorNumero4 == 0) {
                contador++;
            }
            if (matriz[i][j] == 5 && verificadorNumero5 == 0) {
                contador++;
            }
            if (matriz[i][j] == 6 && verificadorNumero6 == 0) {
                contador++;
            }
            if (matriz[i][j] == 7 && verificadorNumero7 == 0) {
                contador++;
            }
            if (matriz[i][j] == 8 && verificadorNumero8 == 0) {
                contador++;
            }
            if (matriz[i][j] == 9 && verificadorNumero9 == 0) {
                contador++;
            }
        }
    }

    if (contador == 9) {
        return 0;
    }
    else {
        return 1;
    }

}

int verificadorColuna(int matriz[][9], int i) {

    for (int j1 = 0; j1 < 9; j1++) {
        if (matriz[i][j1] == 1) {
            for (int j2 = 0; j2 < 9; j2++) {
                if (matriz[i][j2] == 2) {
                    for (int j3 = 0; j3 < 9; j3++) {
                        if (matriz[i][j3] == 3) {
                            for (int j4 = 0; j4 < 9; j4++) {
                                if (matriz[i][j4] == 4) {
                                    for (int j5 = 0; j5 < 9; j5++) {
                                        if (matriz[i][j5] == 5) {
                                            for (int j6 = 0; j6 < 9; j6++) {
                                                if (matriz[i][j6] == 6) {
                                                    for (int j7 = 0; j7 < 9; j7++) {
                                                        if (matriz[i][j7] == 8) {
                                                            for (int j8 = 0; j8 < 9; j8++) {
                                                                if (matriz[i][j8] == 9) {
                                                                    return 0;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 1;

}

int verificadorLinha(int matriz[][9], int j) {

    for (int i1 = 0; i1 < 9; i1++) {
        if (matriz[i1][j] == 1) {
            for (int i2 = 0; i2 < 9; i2++) {
                if (matriz[i2][j] == 2) {
                    for (int i3 = 0; i3 < 9; i3++) {
                        if (matriz[i3][j] == 3) {
                            for (int i4 = 0; i4 < 9; i4++) {
                                if (matriz[i4][j] == 4) {
                                    for (int i5 = 0; i5 < 9; i5++) {
                                        if (matriz[i5][j] == 5) {
                                            for (int i6 = 0; i6 < 9; i6++) {
                                                if (matriz[i6][j] == 6) {
                                                    for (int i7 = 0; i7 < 9; i7++) {
                                                        if (matriz[i7][j] == 8) {
                                                            for (int i8 = 0; i8 < 9; i8++) {
                                                                if (matriz[i8][j] == 9) {
                                                                    return 0;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 1;

}

int main() {

    int matriz[9][9];

    int quantidade;
    scanf("%d", &quantidade);

    for (int a = 0; a < quantidade; a++) {
        
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                scanf("%d", &matriz[i][j]);
            }
        }

        int resultadoLinha1 = verificadorLinha(matriz, 0);
        int resultadoLinha2 = verificadorLinha(matriz, 1);
        int resultadoLinha3 = verificadorLinha(matriz, 2);
        int resultadoLinha4 = verificadorLinha(matriz, 3);
        int resultadoLinha5 = verificadorLinha(matriz, 4);
        int resultadoLinha6 = verificadorLinha(matriz, 5);
        int resultadoLinha7 = verificadorLinha(matriz, 6);
        int resultadoLinha8 = verificadorLinha(matriz, 7);
        int resultadoLinha9 = verificadorLinha(matriz, 8);

        int resultadoColuna1 = verificadorColuna(matriz, 0);
        int resultadoColuna2 = verificadorColuna(matriz, 1);
        int resultadoColuna3 = verificadorColuna(matriz, 2);
        int resultadoColuna4 = verificadorColuna(matriz, 3);
        int resultadoColuna5 = verificadorColuna(matriz, 4);
        int resultadoColuna6 = verificadorColuna(matriz, 5);
        int resultadoColuna7 = verificadorColuna(matriz, 6);
        int resultadoColuna8 = verificadorColuna(matriz, 7);
        int resultadoColuna9 = verificadorColuna(matriz, 8);

        int subBloco1[3][3];
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                subBloco1[i][j] = matriz[i][j];
            }
        }
        int resultadoBloco1 = verificadorBloco(subBloco1);

        int m = 0;
        int arrayBloco2[9];
        int subBloco2[3][3];
        for (int i = 0; i < 3; i++) {
            for (int j = 3; j < 6; j++) {
                arrayBloco2[m] = matriz[i][j];
                m++;
            }
        }
        m = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                subBloco2[i][j] = arrayBloco2[m];
                m++;
            }
        }
        int resultadoBloco2 = verificadorBloco(subBloco2);

        m = 0;
        int arrayBloco3[9];
        int subBloco3[3][3];
        for (int i = 0; i < 3; i++) {
            for (int j = 6; j < 9; j++) {
                arrayBloco3[m] = matriz[i][j];
                m++;
            }
        }
        m = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                subBloco3[i][j] = arrayBloco3[m];
                m++;
            }
        }
        int resultadoBloco3 = verificadorBloco(subBloco3);

        m = 0;
        int arrayBloco4[9];
        int subBloco4[3][3];
        for (int i = 3; i < 6; i++) {
            for (int j = 0; j < 3; j++) {
                arrayBloco4[m] = matriz[i][j];
                m++;
            }
        }
        m = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                subBloco4[i][j] = arrayBloco4[m];
                m++;
            }
        }
        int resultadoBloco4 = verificadorBloco(subBloco4);

        m = 0;
        int arrayBloco5[9];
        int subBloco5[3][3];
        for (int i = 3; i < 6; i++) {
            for (int j = 3; j < 6; j++) {
                arrayBloco5[m] = matriz[i][j];
                m++;
            }
        }
        m = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                subBloco5[i][j] = arrayBloco5[m];
                m++;
            }
        }
        int resultadoBloco5 = verificadorBloco(subBloco5);

        m = 0;
        int arrayBloco6[9];
        int subBloco6[3][3];
        for (int i = 3; i < 6; i++) {
            for (int j = 6; j < 9; j++) {
                arrayBloco6[m] = matriz[i][j];
                m++;
            }
        }
        m = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                subBloco6[i][j] = arrayBloco6[m];
                m++;
            }
        }
        int resultadoBloco6 = verificadorBloco(subBloco6);

        m = 0;
        int arrayBloco7[9];
        int subBloco7[3][3];
        for (int i = 6; i < 9; i++) {
            for (int j = 0; j < 3; j++) {
                arrayBloco7[m] = matriz[i][j];
                m++;
            }
        }
        m = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                subBloco7[i][j] = arrayBloco7[m];
                m++;
            }
        }
        int resultadoBloco7 = verificadorBloco(subBloco7);

        m = 0;
        int arrayBloco8[9];
        int subBloco8[3][3];
        for (int i = 6; i < 9; i++) {
            for (int j = 3; j < 6; j++) {
                arrayBloco8[m] = matriz[i][j];
                m++;
            }
        }
        m = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                subBloco8[i][j] = arrayBloco8[m];
                m++;
            }
        }
        int resultadoBloco8 = verificadorBloco(subBloco8);

        m = 0;
        int arrayBloco9[9];
        int subBloco9[3][3];
        for (int i = 6; i < 9; i++) {
            for (int j = 6; j < 9; j++) {
                arrayBloco9[m] = matriz[i][j];
                m++;
            }
        }
        m = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                subBloco9[i][j] = arrayBloco9[m];
                m++;
            }
        }
        int resultadoBloco9 = verificadorBloco(subBloco9);

        if (resultadoLinha1 == 0 && resultadoLinha2 == 0 &&
        resultadoLinha3 == 0 && resultadoLinha4 == 0 &&
        resultadoLinha5 == 0 && resultadoLinha6 == 0 &&
        resultadoLinha7 == 0 && resultadoLinha8 == 0 &&
        resultadoLinha9 == 0 && resultadoColuna1 == 0 &&
        resultadoColuna2 == 0 && resultadoColuna2 == 0 &&
        resultadoColuna3 == 0 && resultadoColuna4 == 0 &&
        resultadoColuna5 == 0 && resultadoColuna6 == 0 &&
        resultadoColuna7 == 0 && resultadoColuna8 == 0 &&
        resultadoColuna9 == 0 && resultadoBloco1 == 0 &&
        resultadoBloco2 == 0 && resultadoBloco3 == 0 &&
        resultadoBloco4 == 0 && resultadoBloco5 == 0 &&
        resultadoBloco6 == 0 && resultadoBloco7 == 0 &&
        resultadoBloco8 == 0) {
            printf("Instancia %d\n", a + 1);
            printf("SIM\n");
            printf("\n");
        }

        else {
            printf("Instancia %d\n", a + 1);
            printf("NAO\n");
            printf("\n");
        }
    }

    return 0;

}