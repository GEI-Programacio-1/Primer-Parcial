/*
Donada una seqüència de números enters positius acabada en un número negatiu, mostra "Si" per pantalla si la suma dels números en la posició num % N és parell per alguna de les 0 <= i <= N posicions, "No" altrament.
*/
#include<stdio.h>

#define N 5

int main() {
    int num, pos;
    int t[N] = {0};
    int i;
    bool b;
    
    printf("Introduce una secuencia de int positivos acabada en un int negativo: ");	
    scanf("%i", &num);
    while (num >= 0) {
        pos = num % N;
        t[pos] = t[pos] + num;
        scanf("%i", &num);
    }
    
    b = false;
    i = 0;
    while (i < N && b == false){
        if (t[i] % 2 == 0) {
            b = true;
        } else {
            i++;
        }
    }
          
    if (b == true) {
        printf("Si\n");
    } else {
        printf("No\n");
    }
}
