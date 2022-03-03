#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#define prod 5
#define merc 5
#define mes 2

float matriz[prod][merc][mes], soma = 0, posi;
char meses[mes][10] = {"Janerio", "Fevereiro"};
int i, j, k;

void preencherMatriz ();
void somaL ();
void somaC ();
void mostrar ();
void produto ();
void mercado ();
void mensal ();

int main (void) {
    setlocale (LC_ALL, "");
    srand(time(NULL));
    preencherMatriz (matriz[i][j][k]);
    somaL (matriz[i][j][k]);
    somaC (matriz[i][j][k]);
    printf ("\n\n                         Resultado do cálculo:\n");
    mostrar (matriz[i][j][k]);
    produto (posi);
    mercado (posi);
    mensal (matriz[i][j][k]);
    return 0;
}

void preencherMatriz () {
    for (k = 0; k < mes; k++) {
        printf ("\n         %s: \n\n", meses[k]);
        for (i = 0; i < prod - 1; i++) {
            for (j = 0; j < merc - 1; j++) {
                matriz[i][j][k] = rand () % 10000 / 10.5;
                printf ("%.2f\t", matriz [i][j][k]);
            }
            printf ("\n");
        }
        printf ("\n");
    }
}

void somaL () {
    for (k = 0; k < mes; k++) { 
        for (i = 0; i < prod - 1; i++) {
            for (j = 0; j < merc - 1; j++) {
                soma += matriz[i][j][k];
            }
            matriz[i][merc - 1][k] = soma;
            soma = 0;
        }
    }
}

void somaC () {
    for (k = 0; k < mes; k++) { 
        for (j = 0; j < prod - 1; j++) {
            for (i = 0; i < merc - 1; i++) {
                soma += matriz[i][j][k];
            }
            matriz[prod - 1][j][k] = soma;
            soma = 0;
        }
    }
}

void mostrar () {
    for (k = 0; k < mes; k++) {
        printf ("\n%s: \n\n", meses[k]);
        for (i = 0; i < prod; i++) {
            for (j = 0; j < merc; j++) {
                printf ("%7.2f \t", matriz [i][j][k]);
            }
            printf ("\n");
        }
        printf ("\n");
    } 
}

void produto () {
    soma = 0;
    for (k = 0; k < mes; k ++) {
        for (i = 0; i < prod - 1; i ++) {
            if (soma <= matriz[i][prod - 1][k]) {
                soma = matriz[i][prod - 1][k]; posi = i;
            }
        }
    }
}

void mercado () {
    soma = 0;
    posi = 0;
    for (k = 0; k < mes; k++) {
        for (j = 0; j < prod - 1; j++) {
            if (soma <= matriz[prod - 1][j][k]) {
                soma = matriz[prod - 1][j][k]; posi = i;
            }
        }
    }
}

void mensal () {
    for (k = 0; k < mes; k++) {
        printf ("\n\n  %s\n", meses[k]);
        for (j = 0; j < merc - 1; j++) {
            printf ("\n%d° mercado: %.2f\n", j+1, matriz[prod - 1][j][k]);
        }
    }
}