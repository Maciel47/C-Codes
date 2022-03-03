#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int multi;
void multiplicacao (int  n1, int n2); //protótipo
void divisao (float n1, float n2);
void subtracao (int n1, int n2);
void soma (int n1, int n2);

int main (void) {
    int v1, v2;
    printf ("Digite dois valores: \n");
    scanf ("%d %d", &v1, &v2);
    multiplicacao (v1, v2); //chamada da função
    divisao (v1, v2);
    subtracao (v1, v2);
    soma (v1, v1);
    return 0;
}
void multiplicacao (int n1, int n2) { //construção da função
    printf ("Resultado: %d \n", n1 * n2);
}
void divisao (float n1, float n2) { 
    printf ("Resultado: %.2f \n", n1 / n2);
}
void subtracao (int n1, int n2) { 
    printf ("Resultado: %d \n", n1 - n2);
}
void soma (int n1, int n2) { 
    printf ("Resultado: %d \n", n1 + n2);
}