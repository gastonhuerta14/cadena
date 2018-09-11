#include <stdio.h>
#include <string.h>
#define MAX 10

void main(void)
{
    char nombre[MAX];
    char apellido[MAX];
    int i,x,z;

    printf("\ningrese nombre: ");
    gets(nombre);
    x=strlen(nombre);

    printf("\ningrese apellido: ");
    gets(apellido);
    i=strlen(apellido);

    z=i+x;

    printf("\nla cantidad de letras es %d: ",z);
}
