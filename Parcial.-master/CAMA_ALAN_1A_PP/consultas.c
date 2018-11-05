#include "consultas.h"
#include <stdio.h>
#include <stdlib.h>
#include "juegos.h"
#include "clientes.h"
#include "alquileres.h"
#include "utn.h"
#define TAMJUEGOS 5
#define TAMCLIENTES 6
#define TAMALQUILERES 5


int consultas()
{
    int opcion;
    printf("1-Promedio y total de los importes de juegos alquilados\n");
    printf("2-cantidad de juegos que no superan el promedio de juegos alquilados\n");
    printf("3-listado de clientes que alquilaron un juego determinado\n");
    printf("4-listado de juegos alquilados por un cliente determinado\n");
    printf("5-listado de juegos menos alquilados\n");
    printf("6-listado de juegos mas alquilados\n");
    printf("7-listado de juegos alquilados en una fecha determinada\n");
    printf("8-listado de clientes que realizaron al menos un alquiler en una fecha determinada\n");
    printf("9-listado de juegos ordenados por importe\n");
    printf("10-listado de clientes ordenados por apellido ascendente\n");
    printf("11-Salir\n");

    opcion=getInt("Ingrese opcion: ");

    return opcion;
}

void salarioPromedio(eJuego juegos[],int tamJuego,eAlquiler alquileres[],int tamAlquiler)
{
    float promedio=0;
    float total=0;
    int contadorjuegos=0;
    int contadorimporte=0;

    for(int i=0;i<tamAlquiler;i++)
        {

            if(juegos[i].isEmpty==0)
                {
                    contadorjuegos++;
                    total=total+juegos[i].importe;
                }
        }

        promedio=total/contadorjuegos;

        for(int i=0;i<tamJuego;i++)
            {
              if(juegos[i].isEmpty==0)
                {
                    if(juegos[i].importe>promedio)
                        {
                            contadorimporte++;
                        }
                }
            }

    printf("Total Salarios: %.2f\n", total);
    printf("Promedio Salarios: %.2f\n", promedio);
}



