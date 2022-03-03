#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 25

int v1[n], v2[n], i;
int main () {
    srand (time(NULL));
    for (i = 0; i < n; i++) {
        v1[i] = rand ()%100;
        v2 [i] = v1[i] * 3;
    }
    for (i = 0; i < n; i++) {
        printf (" Vetor 1: %d | Vetor 2 (triplo): %d \n", v1[i], v2[i]);
    }
}
