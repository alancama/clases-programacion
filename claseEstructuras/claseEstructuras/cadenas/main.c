#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[20];
    char auxCad[100];

    printf("Ingrese nombre: ");
    fgets(nombre, 19, stdin);

  //  while( strlen(auxCad) > 19){
   //     printf("Error. Nombre demasiado largo. Reingrese nombre; ");
  //      gets(auxCad);
  //  }

  //  strcpy( nombre, auxCad);

    printf("Usted se llama %s\n\n", nombre);


    return 0;
}
