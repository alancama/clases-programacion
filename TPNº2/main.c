#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "ArrayEmployees.h"
#define TAM 2

int main()
{

    char seguir='s';
    int index;


    Employee empleado[TAM];
    initEmployees(empleado,TAM);

    do
    {

        switch(menu())
        {
        case 1:
            index= obtenerEspacioLibre(empleado,TAM);
            if(index!=-1)
                {
                    addEmployee(empleado,TAM,index);
                    break;
                }else
                {
                    printf("ERROR,no hay lugar");
                }
                break;

        case 5:
                seguir='n';
                break;

        }
    }while(seguir=='s');

    return 0;
}
