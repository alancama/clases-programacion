#ifndef EMPLEADOS_H_INCLUDED
#define EMPLEADOS_H_INCLUDED
#include "fechas.h"

typedef struct
{
    int legajo;
    char apellido[20];
    char nombre[20];
    char sexo;
    float salario;
    int idSector;
    eFecha feNac;
    int isEmpty;

}eEmpleado;



#endif // EMPLEADOS_H_INCLUDED
