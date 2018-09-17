#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int legajo;
    char nombre [20];
    char sexo;
    float sueldo;
}eEmpleado;

void mostrarEmpleado(eEmpleado employee);

int main()
{
    eEmpleado empleado;
    printf("ingrese nombre\n");
    fflush(stdin);
    gets(empleado.nombre);

    printf("ingrese legajo\n");
    scanf("%d",&empleado.legajo);

    printf("ingrese sexo\n");
    fflush(stdin);
    scanf("%c",&empleado.sexo);

    printf("ingrese sueldo\n");
    scanf("%f",&empleado.sueldo);

    mostrarEmpleado(empleado);

    //printf("\n nombre:%s\n legajo:%d\n sexo:%c\n sueldo:%.2f\n",empleado.nombre,empleado.legajo,empleado.sexo,empleado.sueldo);
    return 0;
}

void mostrarEmpleado(eEmpleado employee)
{
    printf("\n nombre:%s\n legajo:%d\n sexo:%c\n sueldo:%.2f\n",employee.nombre,employee.legajo,employee.sexo,employee.sueldo);
}

