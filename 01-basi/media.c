/* PROGRAMMAZIONE IN C */

/* File: media.c */
/*
Si scriva un programma in linguaggio C che legga due valori interi e visualizzi la loro media
aritmetica.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a;
    int b;
    float somma;
    float media;

    printf("Inserisci il primo numero intero: ");
    scanf("%d", &a);

    printf("Inserisci il secondo numero intero: ");
    scanf("%d", &b);

    somma = a + b;
    media = somma / 2;
    printf("La media di %d e %d: %.2f\n", a, b, media);

    exit(0);
}

