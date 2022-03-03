#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int matriz[5][5], i = 0, j = 0, x, y, aux;

void ordem () {
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            for (x = 0; x < 5; x++) {
                for (y = 0; y < 5; y++) {
                    if (matriz[i][j] < matriz[x][y]) {
                        aux = matriz[i][j]; matriz[i][j] = matriz[x][y]; matriz[x][y] = aux;
                    }
                }
            }   
        }   
    }
}

int main (void) {
    setlocale (LC_ALL, "");
    srand(time(NULL));
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            matriz[i][j] = rand () % 1000;
        }
    }
    ordem (5, matriz);
    printf ("\n\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf ("%5d", matriz[i][j]);
        }
        printf ("\n\n");
    }        
}