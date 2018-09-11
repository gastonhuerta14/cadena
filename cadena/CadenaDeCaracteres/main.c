#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main ()
{
    char nombre[20];
    char apellido[20];
    char nombreCompleto[41];
    char buffer[5698];
    int i;

    printf("\nIngrese nombre: ");
    fflush(stdin);
    gets(buffer);
    while(strlen(buffer)>19)
        {
            printf("\nReingrese nombre: ");
            fflush(stdin);
            gets(nombre);
        }
    strcpy(nombre, buffer);


    printf("\nIngrese apellido: ");
    fflush(stdin);
    gets(buffer);
    while(strlen(buffer)>19)
        {
            printf("\nReingrese apellido: ");
            fflush(stdin);
            gets(apellido);
        }
    strcpy(apellido, buffer);

    strcat(nombreCompleto, apellido);
    strcat(nombreCompleto, ", ");
    strcat(nombreCompleto, nombre);


    strlwr(nombreCompleto);

    nombreCompleto[0]=toupper(nombreCompleto[0]);

    for(i=0; i<strlen(nombreCompleto); i++)
        {
            if(isspace(nombreCompleto[i]))
                {
                    nombreCompleto[i+1]=toupper(nombreCompleto[i+1]);
                }
        }
    puts(nombreCompleto);
    return 0;
}
