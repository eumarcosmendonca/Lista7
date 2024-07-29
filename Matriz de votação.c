/*
Muito tempo atrás, em um lugar muito, muito distante, foi fundado o Reino Das Princesas Unidas.
Trata-se de um grande Reino formado pela união dos povos liderados pelas princesas da Disney.
Agora este Reino precisa eleger seu representante e é sua tarefa ajudar neste ponto.
A eleição será democrática, na qual os eleitores deverão votar nas princesas, indicando se concordam ou não que elas sejam suas representantes.
Se concordar votam 1, se não concordar votam 0, para cada princesa.
Seu papel será colher os votos e apresentar um relatório com os votos dado a cada princesa.
*/

#include <stdio.h>

int main() {

    int numeroColunas, numeroLinhas;
    scanf("%d", &numeroColunas);
    scanf("%d", &numeroLinhas);

    int matriz[numeroLinhas][numeroColunas];

    for (int i = 0; i < numeroLinhas; i++) {
        for (int j = 0; j < numeroColunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int j = 0; j < numeroColunas; j++) {
        int soma = 0;
        for (int i = 0; i < numeroLinhas; i++) {
            soma = soma + matriz[i][j];
        }
        printf("Princesa %d: %d voto(s)\n", j + 1, soma);
    }

    return 0;

}