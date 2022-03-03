#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#define n 10

int vet1[n], vet2[n], vet3[n], i;

void vetor () {
    for (i = 0; i < 10; i++){
        vet1[i] = rand() % 100;
        vet2[i] = rand() % 100;
    }
}

int main (void) {
    setlocale (LC_ALL, "");
    srand(time(NULL));
    vetor ();
    printf ("\nNúmeros do vetor 1:\n");
    for (i = 0; i < 10; i++) {
        printf ("%d | ", vet1[i]); 
    }
    printf ("\n\nNúemros do vetor 2:\n");
    for (i = 0; i < 10; i++) {
        printf ("%d | ", vet2[i]); 
    }
    printf ("\n\n");
    printf("Números do vetor 3:\n");
    for (i = 0; i < 10; i++){
        if (i==0 || i==2 || i==4 || i==6 || i==8 || i==10) {
            vet3[i] = vet1[i];
        } else {
            vet3[i] = vet2[i];
        }
        printf ("%d | ", vet3[i]);
    }
}