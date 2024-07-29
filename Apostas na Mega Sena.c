/*
Um grupo grande de pessoas fez várias apostas na Mega Sena e precisa de um programa para ajudá-los a conferir se houve ganhadores.
Você foi encarregado de fazer uma versão inicial do programa que indica apenas quantos foram os apostadores que acertaram os 6 números.
Nesta versão inicial, são permitidas apenas apostas contendo no máximo 10 números.
*/

#include <stdio.h>

int main() {

    int numero;
    scanf("%d", &numero);
    int matriz[numero][10];

    for (int i = 0; i < numero; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%d", &matriz[i][j]);
            int aux = getchar();
            if (aux == '\n') {
                break;
            }
        }
    }

    int resultados[6];
    for (int i = 0; i < 6; i++) {
        scanf("%d", &resultados[i]);
    }

    int contador = 0;
    int total = 0;
    for (int i = 0; i < numero; i++) {

        contador = 0;
        
        for (int j = 0; j < 10; j++) {

            for (int m = 0; m < 6; m++) {

                if (matriz[i][j] == resultados[m]) {

                    contador++;

                    if (contador == 6) {

                    total++;

                    }

                }

            }

        }

    }

    printf("Total de ganhadores: %d", total);

    return 0;

}