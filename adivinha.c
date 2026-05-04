#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto, palpite;

    srand(time(NULL));
    numeroSecreto = rand() % 100 + 1;

    printf("Jogo: Adivinhe o Numero (1 a 100)\n");

    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);

        if (palpite > numeroSecreto) {
            printf("Muito alto!\n");
        } else if (palpite < numeroSecreto) {
            printf("Muito baixo!\n");
        } else {
            printf("Acertou!\n");
        }

    } while (palpite != numeroSecreto);

    return 0;
}