#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int matriz[10000][10000], nl = 0, nc = 0, i = 0, j = 0, maior;

int main () {
    setlocale (LC_ALL, "");
    srand(time(NULL));
    printf ("Quantas linhas deseja em sua matriz?\n");
    scanf ("%d", &nl);
    printf ("Quantas colunas deseja em sua matriz?\n");
    scanf ("%d", &nc);
    for(i = 0; i < nl; i++) {
        for(j = 0; j < nc; j++) {
            matriz[i][j] = rand () % 1000;
            if (i == 0 && j ==0) {
                maior = matriz[0][0];
            } else if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }
    printf ("\n     Matriz preenchida: \n\n");
    for (i = 0; i < nl; i++) {
	    for (j = 0; j < nc; j++) {
		    printf("%5d ", matriz[i][j]);
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
	    }
        printf ("\n\n");
	}
    printf("\nO maior valor da matriz é: %d", maior); 
}

/*-----------------------------------------------------------------------------
                                    DESAFIO 
 ------------------------------------------------------------------------------*/

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