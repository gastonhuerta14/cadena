#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define T 3

int main()
{
    int legajos[T];
    char nombres[T][21];
    int notas[T];
    float alturas[T];
    int i;

    for(i=0;i<T;i++)
        {
            printf("ingresar legajo: \n");
            scanf("%d", &legajos[i]);
            printf("ingresar nombre: \n");
            fflush(stdin);
            gets(nombres[i]);
            printf("ingresar nota: \n");
            scanf("%d", &notas[i]);
            printf("ingresar altura: \n");
            scanf("%f", &alturas[i]);

        }
        printf("%4s %20s %2s %5s" , "Legajo", "Nombre" , "Nota" , "Altura\n");

        for(i=0;i<T;i++)
        {
            printf("%4d %20s %2d %5f", &legajos[i], &nombres[i], &notas[i], &alturas[i]);
        }



}
