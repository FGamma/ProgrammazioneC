/* PROGRAMMAZIONE IN C */

/* File: aree.c */
/*
Si scriva un programma in linguaggio C che, dato un numero reale D immesso da tastiera,
calcoli e stampi:
1. l’area del quadrato di lato D
2. l’area del cerchio di diametro D
3. l’area del triangolo equilatero di lato D
*/

#include <stdio.h>
#include <stdlib.h>

#define PIGRECO  3.14159265358979
#define RADICE_3 1.7320508075688772

int main(void)
{
    double d;
    double area_quadrato, area_cerchio, area_triangolo;

    printf("Inserisci il numero reale D: ");
    scanf("%lf", &d);

    area_quadrato = d*d;
    printf("L'area del quadrato di lato D %.2f: %.2f\n", d, area_quadrato);

    area_cerchio = (d/2)*(d/2)*PIGRECO;
    printf("L'area del cerchio di diametro D %.2f: %.2f\n", d, area_cerchio);

    area_triangolo = (RADICE_3 / 4.0) * d * d;
    printf("L'area del triangolo equilatero di lato D %.2f: %.2f\n", d, area_triangolo);

    exit(0);
}
