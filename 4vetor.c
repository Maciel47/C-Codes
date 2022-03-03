#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#define n 50

int v1[n], v2[n], i;

int main () {
    setlocale (LC_ALL, "");
    srand(time(NULL));
    for (i = 0; i < 50; i++) {
        v1[i] = rand() % 100;
    }
    printf ("\nNúmeros do vetor 1:\n");
    for (i = 0; i < 50; i++) {
        printf ("%d | ", v1[i]); 
    }
    printf ("\n\n");
    printf("Números do vetor 2:\n");
    for (i = n - 1; i != -1; i--) {
        v2[i] = v1[i];
        printf ("%d | ", v2[i]);
    }
}