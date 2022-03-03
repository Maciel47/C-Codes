#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int vet[15], i;
void vetor () {
    for (i = 0; i < 15; i++){
        vet[i] = rand() % 100;
    }
}
int main (void) {
    srand(time(NULL));
    setlocale (LC_ALL, "");
    vetor(vet[i]);
    printf("Números do vetor:\n");
    for (i = 0; i < 15; i++) {
        printf ("%d\n", vet[i]);
    }
    printf("----------------------------\n");
    for (i = 0; i < 15; i++) {
        if (vet[i]%2==0) {
            printf ("%d\n", vet[i]);
        }
    }
}