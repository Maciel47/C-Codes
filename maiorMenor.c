#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

void maior_menor (int v1, int v2);
int n1, n2, *maior, *menor;

int main (void) {
    setlocale (LC_ALL, "");
    printf ("\n-----MAIOR E MENOR-----\n");
    maior_menor (n1, n2);
    printf ("O maior número digitado: %d. \nO menor número digitado: %d.\n\n", *maior, *menor);
}

void maior_menor (int v1, int v2) {
    printf ("Digite dois números:\n");
    scanf ("%d %d", &n1, &n2);
    if (n1 > n2) {
        maior = &n1;
        menor = &n2;
    }else if (n2 > n1) {
        maior = &n2;
        menor = &n1;
    }
}

