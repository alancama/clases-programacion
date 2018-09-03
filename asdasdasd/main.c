#include <stdio.h>
#include <stdlib.h>
#include "validaciones.h"


int main()
{
    int edad;
    printf("ingrese edad");
    scanf("%d",&edad);

    while(!validarRango(edad,18,65))
        {
           printf("no puedes trabajar,reingrese edad");
            scanf("%d",&edad);
        }
    printf("puedes trabajar");
    return 0;
}

