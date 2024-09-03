#include <stdio.h>
#include <ctype.h> // Para a função tolower

int main() {
    char str[100];
    int count = 0;

    // Solicita a entrada da string
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin); // Usando fgets para permitir espaços e evitar overflow

    // Conta a ocorrência de 'a' ou 'A'
    for (int i = 0; str[i] != '\0'; i++) {
        if (tolower(str[i]) == 'a') {
            count++;
        }
    }

    // Exibe o resultado
    printf("A letra 'a' (maiúscula ou minúscula) ocorre %d vez(es).\n", count);

    return 0;
}



