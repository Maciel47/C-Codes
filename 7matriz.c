#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int matriz[4][5], i = 0, j = 0;

int main () {
    setlocale (LC_ALL, "");
    srand(time(NULL));
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 5; j++) {
            matriz[i][j] = rand () % 100;
        }
    }
    printf ("\n        Matriz preenchida: \n\n");
    for (i = 0; i < 4; i++) {
	    for (j = 0; j < 5; j++) {
		    printf("%5d ", matriz[i][j]);
	    }
	    printf("\n");
	}
	printf("\n");  
    printf ("\n    Diagonal principal: \n\n");
	for (i = 0; i < 4; i++){      
	    for (j = 0; j < 5; j++){
	        if (j == i){                   
	            printf("%5d ", matriz[i][j]);
            }
	    }   
    }
    printf ("\n");
}