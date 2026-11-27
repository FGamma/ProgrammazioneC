/* PROGRAMMAZIONE IN C */

/* File: aree_math.c */
/*
Uso d math.h
Si scriva un programma in linguaggio C che, dato un numero reale D immesso da tastiera,
calcoli e stampi:
1. l’area del quadrato di lato D
2. l’area del cerchio di diametro D
3. l’area del triangolo equilatero di lato D
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float d;
    float area_quadrato, area_cerchio, area_triangolo;
    float r;
    float rad3_4;

    rad3_4 = sqrt(3) / 4 ;

    printf("Inserisci il numero reale D: ");
    scanf("%f", &d);

    area_quadrato = pow(d, 2);
    printf("L'area del quadrato di lato D %.2f: %.2f\n", d, area_quadrato);

    r = d/2;
    area_cerchio = M_PI * (r * r);
    printf("L'area del cerchio di diametro D %.2f: %.2f\n", d, area_cerchio);

    area_triangolo = rad3_4 * pow(d, 2 );
    printf("L'area del triangolo equilatero di lato D %.2f: %.2f\n", d, area_triangolo);

    exit(0);
}
