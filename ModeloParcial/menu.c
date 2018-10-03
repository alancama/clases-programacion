#include "menu.h"
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int menuOpciones()
{
    int opcion;
    printf("1-Alta");
    printf("\n2-Baja");
    printf("\n\ningrese una opcion:");
    scanf("%d",&opcion);

    return opcion;
}
void initMenu(eMenu menues[],int tamMenu)
{
    for(int i =0; i<tamMenu; i++)
    {
        menues[i].isEmpty=0;
    }
}
int buscarLibre(eMenu menues[],int tamMenu)
{
    int indice=-1;
    for(int i=0; i<tamMenu; i++)
    {
        if(menues[indice].isEmpty==1)
        {
            indice=i;
            break;
        }
    }
    return indice;
}

void altaMenu(eMenu menues[],int tamMenu)
{
    eMenu aux;
    int id;
    int indice;

    indice=buscarLibre(menues,tamMenu);

    if(indice==-1)
    {
        printf("ERROR");
    }
    else
    {
        aux.id=siguienteID(menues,tamMenu);

        printf("ingrese un menu de comida");
        fflush(stdin);
        gets(aux.descripcion);

        printf("Ingrese el importe");
        scanf("%f",&aux.importe);

        aux.isEmpty=1;
        menues[indice]=aux;

    }
}

int buscarMenu(eMenu menues[],int tamMenu,int id)
{
    int indice=-1;

    for(int i =0; i<tamMenu; i++)
    {
        if(menues[i].id==id && menues[i].isEmpty==1)
        {
            indice=i;
            break;
        }

    }
    return indice;
}

int siguienteID(eMenu menues[],int tamMenu)
{
    int retorno = 0;
    int i;

    for(i=0; i<tamMenu; i++)
    {
        if(menues[i].isEmpty == 1)
        {
            if(menues[i].id>retorno)
            {
                retorno=menues[i].id;
            }

        }
    }

    return retorno+1;
}
