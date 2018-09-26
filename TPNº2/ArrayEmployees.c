#include "ArrayEmployees.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int initEmployees(Employee list[], int len)
{

        for(int i=0; i<len; i++)
        {
            list[i].isEmpty=1;
        }

    return  0;
}

void addEmployee(Employee list[],int len,int index)
{



        printf("\n ingrese Nombre:");
        fflush(stdin);
        gets(list[index].name);
        printf("Ingrese Apellido\n");
        fflush(stdin);
        gets(list[index].lastName);
        printf("Ingrese Salario");
        scanf("%f",&list[index].salary);
        printf("Ingrese Sector");
        scanf("%d",&list[index].sector);


}

int obtenerEspacioLibre(Employee list[], int len)
{
    int i;
    int retorno = -1;

    for(i=0; i<len; i++)
    {
        if(list[i].isEmpty == 1)
        {
            retorno = i;
            break;
        }
    }
    return retorno;
}

int menu()

{
    int opcion;

        printf("\n1-ALTA\n");
        printf("2-MODIFICAR\n");
        printf("3-BAJA\n");
        printf("4-INFORMAR\n");
        printf("5-Salir\n");

        scanf("%d",&opcion);

   return opcion;
}
