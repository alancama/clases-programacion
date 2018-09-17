#include <stdio.h>
#include <stdlib.h>
#define CANT 5
typedef struct
{
    int legajo;
    char nombre [20];
    char sexo;
    float sueldo;
}eEmpleado;

void mostrarEmpleado(eEmpleado employee);
void mostrarEmpleados(eEmpleado lista[], int tam);
void ordenarEmpleados(eEmpleado lista [], int tam);

int main()
{


    eEmpleado empleado[]=
    {
    {1111,"Juan",'m',10000},
    {2222,"Ana",'s',20000},
    {3333,"Mariana",'s',3000},
    {4444,"Jose",'m',40000}
    };
    /*for(int i=0;i<CANT;i++)
    {
    printf("ingrese nombre\n");
    fflush(stdin);
    gets(empleado[i].nombre);

    printf("ingrese legajo\n");
    scanf("%d",&empleado[i].legajo);

    printf("ingrese sexo\n");
    fflush(stdin);
    scanf("%c",&empleado[i].sexo);

    printf("ingrese sueldo\n");
    scanf("%f",&empleado[i].sueldo);

    }*/
    mostrarEmpleados(empleado,CANT);
    ordenarEmpleados(empleado,CANT);
    mostrarEmpleados(empleado,CANT);

    return 0;
}

void mostrarEmpleado(eEmpleado employee)
{
    printf("%d  %s   %c   %.2f\n ",employee.legajo,employee.nombre,employee.sexo,employee.sueldo);

}
void mostrarEmpleados(eEmpleado lista[], int tam)
{
    for(int i=0;i<tam;i++)
        {
            mostrarEmpleado(lista[i]);
        }
}

void ordenarEmpleados(eEmpleado lista [], int tam)
{
    eEmpleado auxEmpleado;

    for(int i =0;i<tam-1;i++)
        {
            for(int j=i+1;j<tam;j++)
                {
                    if(lista[i].sueldo<lista[j].sueldo)
                        {
                            auxEmpleado=lista[i];
                            lista[i]=lista[j];
                            lista[j]=auxEmpleado;
                        }
                }
        }
}


