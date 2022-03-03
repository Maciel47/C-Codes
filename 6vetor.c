#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

/*float A[5], x, y;
int a[5], i, j, aux;

void ordem () {
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (a[i] < a[j]) {
                aux = a[i]; a[i] = a[j]; a[j] = aux;
            }
        }
    }
}

int main (void) {
    setlocale (LC_ALL, "");
    srand(time(NULL)); 
    for (i = 0; i < 5; i++) {
        a[i] = rand () % 1000;
    }
    for (y = 0; y < 5; y++) {
        y = rand () % 1000;
        A[5] = rand () % 100000 / y;
    }
    ordem (5, a);
    for (i = 0; i < 5; i++) {
        printf ("%d \n", a[i]);
    }
}*/

//Código do professor

#include <stdio.h>

#include <stdlib.h>

#include <time.h>

#define N 5



int main(){

float vetor[N], aux;
int i, j;

srand(time(NULL));

for (i = 0; i < N; i++)

{

vetor[i] = rand()%100/5.0;

printf("%g\t",vetor[i]);

}

printf("\n\n");

printf(" Vetor Ordenado\n");

for (i = 0; i < N-1; i++)

{

for (j = i+1; j < N; j++)

{

if(vetor[i]>=vetor[j]){

aux = vetor[i];

vetor[i] = vetor[j];

vetor[j] = aux;

}

}

}

for (i = 0; i < N; i++)

{

printf("%g\t",vetor[i]);

}

}

