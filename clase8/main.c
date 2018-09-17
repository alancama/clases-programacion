#include <stdio.h>
#include <stdlib.h>
#include "estruc.h"
#include <string.h>
typedef struct
{
    int dia;
    int mes;
    int anio;

}eFecha;
typedef struct
{
    int legajo;
    char nombre [20];
    char sexo;
    float sueldo;
    eFecha fechaIngreso;
}eEmpleado ;
void mostrarEmpleado(eEmpleado employee);
int main()
{
    eFecha unaFecha;
    eEmpleado unEmpleado;
    eEmpleado otroEmpleado;
    eEmpleado emple3={6789,"Jose",'M',15000.5};
    eEmpleado emple4=emple3;


    unEmpleado.legajo=1234;
    strcpy(unEmpleado.nombre,"Juan");
    unEmpleado.sexo='M';
    unEmpleado.sueldo=10000.5;
    unaFecha.dia=17;
    unaFecha.mes=9;
    unaFecha.anio=2018;
    unEmpleado.fechaIngreso=unaFecha;

    otroEmpleado.legajo=4321;
    strcpy(otroEmpleado.nombre,"Mariana");
    otroEmpleado.sexo='S';
    otroEmpleado.sueldo=20000.5;

    mostrarEmpleado(unEmpleado);
    //mostrarEmpleado(otroEmpleado);
    //mostrarEmpleado(emple3);
    //mostrarEmpleado(emple4);
    return 0;
}

void mostrarEmpleado(eEmpleado employee)
{
    printf("%d  %s   %c   %.2f\n ingreso el: %02d/%02d/%d",employee.legajo,employee.nombre,employee.sexo,employee.sueldo,employee.fechaIngreso);

}
