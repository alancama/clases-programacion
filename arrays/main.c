#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>//biblioteca


void mostrarArrayChar(char vec[],int tam );
void ordenarArray(char vec[],int tam,int criterio);
/*tolower();cambia la letra mayuscula a minuscula.
toupper();cambia la letra minuscula a mayuscula. */

int main()
{
    char letras[]= {'a','b','j','c','A','C','B','D'};

    mostrarArrayChar(letras,8);

    ordenarArray(letras,8,1);

    mostrarArrayChar(letras,8);


    return 0;
}
void mostrarArrayChar(char  vec[],int tam )
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("%c",vec[i]);
    }
    printf("\n\n");
}

void ordenarArray(char vec[],int tam,int criterio)
{
    int aux;
    for(int i=0; i<tam-1; i++)
    {
        for(int j=i+1; j<tam; j++)
        {
            if(criterio==1)
            {
                if(vec[i]>vec[j])
                {
                    aux=vec[i];
                    vec[i]=vec[j];
                    vec[j]=aux;
                }
            }
            else
            {
                if(vec[i]<vec[j])
                {
                    aux=vec[i];
                    vec[i]=vec[j];
                    vec[j]=aux;
                }
            }
        }
    }
}
