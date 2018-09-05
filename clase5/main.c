#include <stdio.h>
#include <stdlib.h>
#define CANT 3
int main()
{
    int legajo[CANT],i,isEmpty[CANT],legajoAux,j,auxB;
    float salario[CANT];

    for(i =0 ;i<CANT;i++)
        {
            isEmpty[i]=1;
        }

    for(i=0;i<CANT;i++)
        {
            if(isEmpty[i]==1)
                {
                    printf("legajo:");
                    scanf("%d",&legajo[i]);
                    printf("salario:");
                    scanf("%f",&salario[i]);
                }
        }
        for(i=0;i<CANT;i++)
            {
                for(j=i+i;j<CANT;j++)
                    {
                        if(legajo[i]>legajo[j])
                            {
                                auxB=legajo[i];
                                legajo[i]=legajo[j];
                                legajo[j]=auxB;
                            }
                    }
            }

        system("cls");
        for(i=0;i<CANT;i++)
            {printf("legajo:%d\n\n",legajo[i]);
            }

        printf("ingrese legajo a buscar :");
        scanf("%d",&legajoAux);
        for(i=0;i<CANT;i++)
            {
                if(legajoAux==legajo[i])
                        {
                            printf("Dato Encontrado");
                            break;
                        }else
                        {
                            printf("Dato no encontrado");
                        }
            }
    return 0;
}
