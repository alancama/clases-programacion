#include <stdio.h>
#include <stdlib.h>


int main()
{
     char nombre[20]= {"ana"};
    char apellido[20] = {"perez"};
    char nombreCompleto[40];

    strcpy(nombreCompleto, nombre);//copia el nombre en nombreCompleto

    strcat(nombreCompleto, " ");//muestra el nombreCompleto con un espacio

    strcat(nombreCompleto, apellido);//muestra el nombre completo y el apellido  incluyendo el espacio.


    printf("%s\n", nombreCompleto);
    return 0;
}
