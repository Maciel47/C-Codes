#include <stdio.h>

void ordenaValores(int *pa, int *pb, int *pc);

int main(void)
{

    int a, b, c;

    a = 1;

    b = 3;

    c = 2;

    ordenaValores(&a, &b, &c);

    printf("%d -> %d -> %d", a, b, c);

}

void ordenaValores(int *pa, int *pb, int *pc)

{

    int aux;

    for (int i = 0; i < 1; i++){

        if (*pa >= *pb){

            aux = *pa; *pa = *pb; *pb = aux;

            i = -1;

        }

        if (*pb >= *pc){

            aux = *pb; *pb = *pc; *pc = aux;

            i = -1;

        }

    }

}

/* MEU EXERCICIO
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

void ordem ();
int A, B, C, *p1, *p2, *p3;

int main (void) {
    setlocale (LC_ALL, "");
    ordem (A, B, C);
    if (A > B && B > C && A > C) {
        printf ("%d \n%d \n%d", *p1, *p2, *p3);
    }else if (A > C && C > B && A > B) {
        printf ("%d \n%d \n%d", *p1, *p2, *p3);
    }else if (B > A && A > C && B > C) {
        printf ("%d \n%d \n%d",*p1, *p2, *p3);
    }else if (B > C && C > A && B > C) {
        printf ("%d \n%d \n%d", *p1, *p2, *p3);
    }else if (C > A && A > B && C > B) {
        printf ("%d \n%d \n%d", *p1, *p2, *p3);
    }else {
        printf ("%d \n%d \n%d", *p1, *p2, *p3);
    }
}

void ordem () {
    printf ("\n-----ORDEM CRESCENTE-----\n");
    printf ("Digite o 1° número: ");
    scanf ("%d", &A);
    printf ("Digite o 2° número: ");
    scanf ("%d", &B);
    printf ("Digite o 3° número: ");
    scanf ("%d", &C);
    if (A > B && B > C && A > C) {
        p1 = &C;
        p2 = &B;
        p3 = &A;
    }else if (A > C && C > B && A > B) {
        p1 = &B;
        p2 = &C;
        p3 = &A;
    }else if (B > A && A > C && B > C) {
        p1 = &C;
        p2 = &A;
        p3 = &B;
    }else if (B > C && C > A && B > C) {
        p1 = &A;
        p2 = &C;
        p3 = &B;
    }else if (C > A && A > B && C > B) {
        p1 = &B;
        p2 = &A;
        p3 = &C;
    }else {
        p1 = &A;
        p2 = &B;
        p3 = &C;
    }
}

