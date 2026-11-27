/* PROGRAMMAZIONE IN C */

/* File: precedente_successivo.c */
/*
Si scriva un programma in linguaggio C che legga un valore intero e visualizzi il valore
intero precedente e il successivo.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a;
    int prec, succ;

    printf("Inserisci un numero intero: ");
    scanf("%d", &a);

    prec = a - 1;
    printf("Intero precedente: %d\n", prec);

    succ = a + 1;
    printf("Intero successivo: %d\n", succ);

    exit(0);
}
