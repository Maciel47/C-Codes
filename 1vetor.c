#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 50

int v1[n], v2[n], i, soma;
int main () {
    srand (time(NULL));
    for (i = 0; i < n; i++) {
        v1[i] = rand ()%100;
        v2 [i] = rand ()%100;
    }
    for (i = 0; i < n; i++) {
        soma = v1[i] + v2[i];
        printf ("%d + %d = %d\n", v1[i], v2[i], soma);
    }
}
