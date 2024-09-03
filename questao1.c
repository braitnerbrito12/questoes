#include <stdio.h>

// Função para verificar se um número pertence à sequência de Fibonacci
int pertence_fibonacci(int num) {
    int a = 0, b = 1, c;

    if (num == a || num == b) {
        return 1; // O número pertence à sequência
    }

    while (b <= num) {
        c = a + b;
        a = b;
        b = c;

        if (b == num) {
            return 1; // O número pertence à sequência
        }
    }

    return 0; // O número não pertence à sequência
}

int main() {
    int numero;

    // Solicitar ao usuário o número para verificar
    printf("Digite um número para verificar se pertence à sequência de Fibonacci: ");
    scanf("%d", &numero);

    if (pertence_fibonacci(numero)) {
        printf("O número %d pertence à sequência de Fibonacci.\n", numero);
    } else {
        printf("O número %d não pertence à sequência de Fibonacci.\n", numero);
    }

    return 0;
}

