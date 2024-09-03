#include <stdio.h>
#define ROWS 3
#define COLUMNS 3

int main() {
    int matriz[COLUMNS][ROWS];
    int i, j, soma = 0;

    printf("Insira os elementos da matriz 3x3:\n");
    for (i = 0; i < COLUMNS; i++) {
        for (j = 0; j < ROWS; j++) {
            scanf("%d", &matriz[i][j]);
            if (i == j) {
                soma += matriz[i][j];
            }
        }
    }

    printf("Soma dos elementos da diagonal principal: %d\n", soma);
    return 0;
}
