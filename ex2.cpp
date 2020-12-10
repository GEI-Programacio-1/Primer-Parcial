#include <stdio.h>
#include<ctype.h>

int main() {
    char p, c;
    int cont = 0;
    bool rep = false;
    
    printf("Introduce una secuencia de caracteres acabada en '.': "); 
    scanf("%c", &p);
    if (isalpha(p)) {
        p = tolower(p);
        scanf("%c", &c);
        while (c != '.' && !rep) {
            c = tolower(c);
            if (c == p) {
                cont++;
            }
            if (cont > 3) {
                rep = true;
            } else {
                scanf("%c", &c);
            }
        }
        if (rep) {
            printf("El primer carácter se repite más de 3 veces.\n");
        } else {
            printf("El primer carácter NO se repite más de 3 veces.\n");
        }
    } else {
        printf("El primer carácter no es una letra o la secuencia es vacía.\n");
    }
}
