#include <stdio.h>
#include <stdlib.h>
#define A 3

typedef struct
{
    int legajo;
    char nombre[53];
    float altura;
    int nota;
}sAlumno;

void cargarListadoDeAlumnos(sAlumno[], int);

void ordenarListadoDeAlumno(sAlumno[], int);

void mostrarListadoDeAlumnos(sAlumno[], int);

void mostrarUnAlumno(sAlumno);
sAlumno cargarUnAlumno;

int main()
{
  sAlumno listadoMain[A];
  int i;

  do
    {

        printf("a. Alta de alumno.\no. Ordenar lista de estado.\nm. Mostrar lista de estado.\n");
        printf("Ingrese una opcion: ");
        opcion = getche();
        switch(opcion)
        {
        case 'a':
            cargarListadoDeAlumnos(listadoMain, A);
            break;
        case 'o':
            ordenarListadoDeAlumno(listadoMain, A);
            break;
        case 'm':
            mostrarListadoDeAlumnos(listadoMain, A);
            break;

        }


    }while(opcion!='a')

  cargarListadoDeAlumnos(listadoMain, A);
  mostrarListadoDeAlumnos(listadoMain, A);


  sAlumno miAlumno;


    printf("ingrese legajo: ");
    scanf("%d", &miAlumno.legajo);
    printf("ingrese nombre: ");
    fflush(stdin);
    scanf("%c", &miAlumno.nombre);
    printf("ingrese altura: ");
    scanf("%f", &miAlumno.altura);
    printf("ingrese altura: ");
    scanf("%d", &miAlumno.nota);

    otroAlumno = miAlumno;

    printf("%d--%c--%f--%d\n", miAlumno.legajo, miAlumno.nombre, miAlumno.altura, miAlumno.nota);

    return sAlumno
}

sAlumno cargarUnAlumno()
{

}

void mostrarUnAlumno(sAlumno)
{
    printf("%d--%c--%f--%d\n", miAlumno.legajo, miAlumno.nombre, miAlumno.altura, miAlumno.nota);
}

void cargarListadoDeAlumnos(sAlumno listado[], int tam)
{
  int i;
  for(i=0;i<A;i++)
    {
        listadoMain[i]=cargarUnAlumno();
    }
}

void mostrarListadoDeAlumnos(sAlumno listado[], int tam)
{
    for(i=0;i<A;i++)
    {
        mostrarUnAlumno(listadoMain[i]);
    }
}
