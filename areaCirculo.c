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
    printf ("O resultado da área é: %.2f.\n", *area);
}

void area_circulo () {
    printf ("\n-----ÁREA DO CÍRCULO-----\n");
    printf ("Digite o número do raio da circunferência: ");
    scanf ("%f", &r);
    r = pi * pow(r, 2);
    area = &r;
}

/*Exercício do professor:
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