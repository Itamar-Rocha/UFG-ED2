#include <stdio.h>
#include <math.h>
#define N 10 // Em caso de alteração de N, altere também o vetor

int main() {
    int vetor[N] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, temp;

    for (i = 0; i < floor(N/2); i++) { // Inverte um vetor de N elementos
        temp = vetor[i];
        vetor[i] = vetor[N - i - 1];
        vetor[N - i - 1] = temp;
    }

    printf("Vetor invertido:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
