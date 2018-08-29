#include <stdio.h>
#include <stdlib.h>
int suma(int,int);

int main()
{
    int nro1,nro2,result;

    printf("ingrese primero operando");
    scanf("%d",&nro1);
    printf("ingrese segundo operando");
    scanf("%d",&nro2);

    result=suma(nro1,nro2);
    system("cls");
    printf("el resultado es : %d",result);

    return 0;
}
int suma(int oP1, int oP2)
{
    int resultado;
    resultado=oP1+oP2;
    return resultado;
}
