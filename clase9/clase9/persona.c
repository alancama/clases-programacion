#include "persona.h"
#include <stdio.h>
#include <string.h>
void init(EPersona lista[], int len)
{
    int i;
    for(i=0; i<len; i++)
    {
        lista[i].isEmpty = 1;
    }
}

int obtenerEspacioLibre(EPersona lista[], int len)
{
    int i;
    int retorno = -1;

    for(i=0; i<len; i++)
    {
        if(lista[i].isEmpty == 1)
        {
            retorno = i;
            break;
        }
    }
    return retorno;
}


void alta(EPersona lista[], int len)
{
    int index;

    index = obtenerEspacioLibre(lista, len);

    if(index != -1)
    {
        printf("\n Ingrese Nombre: ");
        fflush(stdin);
        scanf("%s",lista[index].nombre);

        printf("\n Ingrese Apellido: ");
        fflush(stdin);
        scanf("%s",lista[index].apellido);

        printf("\n Ingrese DNI : ");
        scanf("%ld",&lista[index].dni);

        printf("\n Ingrese Dia de Nacimiento: ");
        scanf("%d",&lista[index].feNac.dia);

        printf("\n Ingrese Mes de Nacimiento: ");
        scanf("%d",&lista[index].feNac.mes);

        printf("\n Ingrese Año de Nacimiento: ");
        scanf("%d",&lista[index].feNac.anio);

        lista[index].isEmpty=0;
    }
    else
    {
        system("cls");
        printf("\n No Hay mas Espacio");
    }

    return;
}

void mostrar(EPersona lista[],int limite)
{
    for(int i=0; i<limite; i++)
    {
        if(lista[i].isEmpty==0)
        {
            printf("\n nombre:%s \n apellido:%s \n Dni: %ld \n dia Nacimiento :%d \n Mes Nacimiento :%d \n Año Nacimiento :%d \n ",lista[i].nombre,lista[i].apellido,lista[i].dni,lista[i].feNac.dia,lista[i].feNac.mes,lista[i].feNac.anio);
        }
    }
}
int buscarPorDni(EPersona lista[], long int dni,int len)
{
    int retorno=-1;

    for(int i; i<len; i++)
    {
        if(lista[i].dni==dni)
        {
            retorno=i;
        }
    }
    return retorno;

}
void baja(EPersona lista[],int len)
{
    int i;
    long int dni;

    mostrar(lista,len);
    printf(" \n Ingrese Dni a borrar: ");
    scanf("%ld",&dni);

    i=buscarPorDni(lista,dni,len);

    if(i==-1)
    {
        system("cls");
        printf("\n ERROR no Encontrado");
    }
    else
    {
        lista[i].isEmpty=1;
        printf("\n DNI Borrado\n\n");
    }
}

void modificacion(EPersona lista[],int len)
{
    int i ;
    long int dni;
    char seguir='s';

    int opcion;

    mostrar(lista,len);
    printf("\nIngrese Dni a buscar: ");
    scanf("%ld",&dni);
    i=buscarPorDni(lista,dni,len);

    if(i==-1)
    {
        system("cls");
        printf("\nERROR,Dni No encontrado\n");
    }
    else
    {


        printf("\n ingrese opcion a modificar\n\n");
        do
        {
            printf("\n 1.Nombre\n");
            printf("\n 2.Apellido\n");
            printf("\n 3.Dni\n");
            printf("\n 4.fecha de nacimiento\n");
            printf("\n 5.salir\n ");

            scanf("%d",&opcion);


            switch(opcion)
            {
            case 1:
                printf("\n ingrese nuevo nombre: ");
                fflush(stdin);
                scanf("%s",lista[i].nombre);

                break;

            case 2:
                printf("\n Ingrese Nuevo Apellido: ");
                fflush(stdin);
                scanf("%s",lista[i].apellido);

                break;

            case 3:
                printf("\n Ingrese Nuevo DNI : ");
                scanf("%ld",&lista[i].dni);

                break;

            case 4:

                printf("\n Ingrese Nuevo Dia de Nacimiento: ");
                scanf("%d",&lista[i].feNac.dia);

                printf("\n Ingrese Nuevo Mes de Nacimiento: ");
                scanf("%d",&lista[i].feNac.mes);

                printf("\n Ingrese Nuevo Año de Nacimiento: ");
                scanf("%d",&lista[i].feNac.anio);

                break;

            case 5:
                seguir='n';
                break;
            }
        }
        while(seguir=='s');
        system("cls");
        mostrar(lista,len);
    }
}

void ordenar(EPersona lista[],int len)
{
    EPersona aux;

    for(int i=0; i < len-1; i++)
    {
        for(int j= i+1; j< len; j++)
        {

            if (strcmp(lista[i].apellido, lista[j].apellido) > 0)
            {
                aux = lista[i];
                lista[i] = lista[j];
                lista[j] = aux;
            }
            else if( lista[i].nombre == lista[j].nombre && strcmp(lista[i].apellido, lista[j].apellido) > 0)
            {
                aux = lista[i];
                lista[i] = lista[j];
                lista[j] = aux;
            }
        }
    }

    mostrar(lista,len);

}

