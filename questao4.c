#include <stdio.h>
#include <math.h>

int main() {
    // Sequência (a): 1, 3, 5, 7, ___
    int a_current = 7;
    printf("Próximo elemento da sequência (a): %d\n", a_current + 2);

    // Sequência (b): 2, 4, 8, 16, 32, 64, ____
    int b_current = 64;
    printf("Próximo elemento da sequência (b): %d\n", b_current * 2);

    // Sequência (c): 0, 1, 4, 9, 16, 25, 36, ____
    int c_current = 36;
    int c_next = sqrt(c_current) + 1;
    printf("Próximo elemento da sequência (c): %d\n", c_next * c_next);

    // Sequência (d): 4, 16, 36, 64, ____
    int d_current = 64;
    int d_next = sqrt(d_current) + 2;
    printf("Próximo elemento da sequência (d): %d\n", d_next * d_next);

    // Sequência (e): 1, 1, 2, 3, 5, 8, ____
    int e_last = 8;
    int e_second_last = 5;
    printf("Próximo elemento da sequência (e): %d\n", e_last + e_second_last);

    // Sequência (f): 2, 10, 12, 16, 17, 18, 19, ____
    int f_current = 19;
    int f_next = f_current + 1;
    while (f_next % 3 == 0) {
        f_next++;
    }
    printf("Próximo elemento da sequência (f): %d\n", f_next);

    return 0;
}



