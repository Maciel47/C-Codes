#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int matriz[6][4], i = 0, j = 0, soma[6];

int main () {
    setlocale (LC_ALL, "");
    srand(time(NULL));
    for(i = 0; i < 6; i++) {
        for(j = 0; j < 4; j++) {
            matriz[i][j] = rand () % 1000;
        }
    }
    printf ("\n     Matriz preenchida: \n\n");
    for (i = 0; i < 6; i++) {
	    for (j = 0; j < 4; j++) {
		    printf("%5d ", matriz[i][j]);
	    }
	    printf("\n");
	} 
	for (i = 0; i < 6; i++){      
	    for (j = 0; j < 4; j++){
            soma[i] += matriz[i][j];
	    }   
    }
    printf ("\n\nResultado da soma das linhas: \n");
    for (i = 0; i < 4; i++) {
        printf ("\n%dª linha: %d\n", i+1, soma[i]);
    }
    printf ("\n");
}