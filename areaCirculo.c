#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define pi 3.14

void area_circulo ();
float *area, r;

int main (void) {
    setlocale (LC_ALL, "");
    area_circulo (r);
    printf ("O resultado da �rea �: %.2f.\n", *area);
}

void area_circulo () {
    printf ("\n-----�REA DO C�RCULO-----\n");
    printf ("Digite o n�mero do raio da circunfer�ncia: ");
    scanf ("%f", &r);
    r = pi * pow(r, 2);
    area = &r;
}

/*Exerc�cio do professor:
#include <stdio.h>

void calcularArea(float *area);

int main(){

    float area;

    calcularArea(&area);

    printf("Area: %g",area);

}

void calcularArea(float *pArea){

    float raio;

    printf("Digite o raio: ");

    scanf("%f",&raio);

    *pArea = 3.14159*raio*raio;

} */ 