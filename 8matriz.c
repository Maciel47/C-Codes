#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int matriz[5][4], i = 0, j = 0, soma[4];

int main () {
    setlocale (LC_ALL, "");
    srand(time(NULL));
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 4; j++) {
            matriz[i][j] = rand () % 1000;
        }
    }
    printf ("\n     Matriz preenchida: \n\n");
    for (i = 0; i < 5; i++) {
	    for (j = 0; j < 4; j++) {
		    printf("%5d ", matriz[i][j]);
	    }
	    printf("\n");
	} 
	for (i = 0; i < 5; i++){      
	    for (j = 0; j < 4; j++){
            soma[j] += matriz[i][j];
	    }   
    }
    printf ("\n\nResultado da soma das colunas: \n");
    for (j = 0; j < 4; j++) {
        printf ("\n%dª Coluna: %d\n", j+1, soma[j]);
    }
    printf ("\n");
}