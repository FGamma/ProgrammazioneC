/* PROGRAMMAZIONE IN C */

/* File: somma.c */
/*
Si scriva un programma in linguaggio C che legga due valori interi e visualizzi la loro
somma.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a;
    int b;
    int c;

    printf("Inserisci il primo numero intero: ");
    scanf("%d", &a);

    printf("Inserisci il secondo numero intero: ");
    scanf("%d", &b);

    c = a + b;
    printf("La somma di %d + %d: %d\n", a, b, c);

    exit(0);
}

