#include <stdio.h>

int main() {
    int INDICE = 12;
    int SOMA = 0;
    int K = 1;

    // Laço while que incrementa K e soma ao valor de SOMA
    while (K < INDICE) {
        K = K + 1;
        SOMA = SOMA + K;
    }

    // Imprime o resultado da soma
    printf("%d\n", SOMA);

    return 0;
}



