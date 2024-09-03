#include <stdio.h>

// Função para configurar o estado das lâmpadas com base nos interruptores
void configurarLamps(int interruptores[], int lampadas[]) {
    for (int i = 0; i < 3; i++) {
        lampadas[i] = interruptores[i];
    }
}

int main() {
    int lampadas[3] = {0}; // Estado das lâmpadas (0 = apagada, 1 = acesa)
    int interruptores[3];

    // Etapa 1: Ligue o interruptor A e deixe-o ligado por alguns minutos
    interruptores[0] = 1; // A ligado
    interruptores[1] = 0; // B desligado
    interruptores[2] = 0; // C desligado
    configurarLamps(interruptores, lampadas);

    // Simule a ida até as salas das lâmpadas
    printf("Após ligar o interruptor A e esperar:\n");
    for (int i = 0; i < 3; i++) {
        printf("Lâmpada L%d: %s\n", i + 1, lampadas[i] ? "acesa" : "apagada");
    }

    // Etapa 2: Desligue o interruptor A e ligue o interruptor B
    interruptores[0] = 0; // A desligado
    interruptores[1] = 1; // B ligado
    interruptores[2] = 0; // C desligado
    configurarLamps(interruptores, lampadas);

    // Simule a segunda ida à sala
    printf("\nApós ajustar os interruptores:\n");
    for (int i = 0; i < 3; i++) {
        printf("Lâmpada L%d: %s\n", i + 1, lampadas[i] ? "acesa" : "apagada");
    }

    // Identificação das lâmpadas
    printf("\nIdentificação das lâmpadas:\n");
    printf("Lâmpada acesa: Controle pelo interruptor B\n");
    printf("Lâmpada quente e apagada: Controle pelo interruptor A\n");
    printf("Lâmpada fria e apagada: Controle pelo interruptor C\n");

    return 0;
}




