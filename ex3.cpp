#include <stdio.h>

int main() {
    int n, pos = 1, pares = 0, impares = 0;
    
    printf("Introduce una secuencia de enteros acabada en 0: "); 

    scanf("%i", &n);
    while (n != 0) {
        if (pos % 2 == 0) {
            pares = pares + n;
        } else {
            impares = impares + n;
        }
        pos++;
        scanf("%i", &n);
    }
    if (pares == impares) {
        printf("Números en posiciones pares e impares suman lo mismo.\n");
    } else {
        printf("Números en posiciones pares e impares NO suman lo mismo.\n");
    }
}
