#include <stdio.h>
#include <stdlib.h>
#include "almuerzos.h"
#include "empleados.h"
#include "fechas.h"
#include "menu.h"
#define TAM 2


int main()
{

    eMenu lista[TAM];
    initMenu(lista,TAM);

    switch(menuOpciones())
    {
    case 1:
            altaMenu(lista,TAM);
            system("pause");
            break;
    }

    return 0;
}
