#include <stdio.h>
#include <stdlib.h>
#include "string.h"

typedef struct
{
    int codigo;
    char marca[20];
    int capacidad;
    float precio;

} ePendrive;

void mostrarPendrive(ePendrive* pen );
int cargarPendrive(ePendrive* pen);
int cargarPendriveParam(ePendrive* pen,int codigo,char marca[],int capacidad,float precio);

int main()
{
    int opcion;
    char seguir='s';
    int flag=0;
    ePendrive pendrive;
    do
    {
        printf("1.Cargar Pendrive\n");
        printf("2.Mostrar Pendrive\n");
        printf("3.Salir\n");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            flag=cargarPendriveParam(&pendrive,564,"hola",64,500);
            system("pause");
            break;

        case 2:
            if(flag==1)
            {
                mostrarPendrive(&pendrive);
            }else
            {
                printf("error\n");
            }
            system("pause");
            break;

        case 3:
            seguir='n';
            system("pause");
            break;
        }
    }
    while(seguir=='s');
    return 0;
}

int cargarPendrive(ePendrive* pen)
{
    int flag=0;


    if(pen!=NULL)
    {
        flag=1;
        printf("\ningrese codigo:");
        scanf("%d",&pen->codigo);

        printf("\ningrese Marca:");
        fflush(stdin);
        gets(pen->marca);

        printf("\ningrese capacidad:");
        scanf("%d",&pen->capacidad);

        printf("\ningrese precio:");
        scanf("%f",&pen->precio);

        flag=1;

        system("pause");


    }
    else
    {
        printf("ERROR");
    }

    return flag;
}

void mostrarPendrive(ePendrive* pen )
{
    if(pen!=NULL)
    {
        system("cls");
        printf("%d  %s  %d  %.2f\n ",pen->codigo,pen->marca,pen->capacidad,pen->precio);
    }
}

int cargarPendriveParam(ePendrive* pen,int codigo,char marca[],int capacidad,float precio)
{
    int flag=0;

    if(pen!=NULL)
    {
        pen->codigo=codigo;
        strcpy(pen->marca,marca);
        pen->capacidad=capacidad;
        pen->precio=precio;

        flag=1;
    }

    return flag;
}
