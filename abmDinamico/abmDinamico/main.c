#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;
    int idSector;
    int isEmpty;
} eEmpleado;

typedef struct
{
    int id;
    char descripcion[20];
}eSector;


void inicializarEmpleados( eEmpleado x[], int tam);
int buscarLibre( eEmpleado x[], int tam);
int buscarEmpleado(eEmpleado x[], int tam, int legajo);
void mostrarEmpleado(eEmpleado emp,eSector sectores[],int tamSector);
void mostrarEmpleados(eEmpleado nomina[], int tam,eSector sectores[],int tamSector);
int elejirSector(eSector sectores[],int tam);
void cargarDescripcion(eSector sectores [],int tamSector ,int idSector ,char cadena[]);
void agregarEmpleado(eEmpleado empleados[], int tam,eSector sectores[],int tamSector);
void eliminarEmpleado(eEmpleado empleados[], int tam,eSector sectores[],int tamSector);
void modificarEmpleado(eEmpleado empleados[], int tam,eSector sectores[],int tamSector);
void listarEmpleadosPorSector(eEmpleado x[],int tam,eSector sectores[],int tamSector);
//-void harcodearEmpleados(eEmpleado[]);
void ordenarEmpleadosAlfabeticamente(eEmpleado x[],int tam,eSector sectores[],int tamSectores);

int menu();

int main()
{

    char seguir = 's';
    eEmpleado lista[10];

    eSector sectores[]=
    {
        {1,"RRHH"},
        {2,"Ventas"},
        {3,"Compras"},
        {4,"Contable"},
        {5,"Sistema"}
    };

    inicializarEmpleados(lista, 10);


    do
    {
        switch(menu())
        {

        case 1:
            agregarEmpleado(lista, 10,sectores,5);
            system("pause");
            break;
        case 2:
            eliminarEmpleado(lista, 10,sectores,5);
            break;
        case 3:
            modificarEmpleado(lista, 10,sectores,5);
            break;
        case 4:
            mostrarEmpleados(lista, 10,sectores,5);
            system("pause");
            break;
        case 5:
                listarEmpleadosPorSector(lista,10,sectores,5);
                system("pause");
                break;
        case 6:
                ordenarEmpleadosAlfabeticamente(lista,10,sectores,5);
                system("pause");
                break;

        case 10:
            seguir = 'n';
            break;
        }

    }
    while(seguir == 's');



    return 0;
}

void inicializarEmpleados( eEmpleado x[], int tam)
{
    for(int i=0; i < tam; i++)
    {
        x[i].isEmpty = 0;
    }
}

int buscarLibre( eEmpleado x[], int tam)
{
    int indice = -1;

    for(int i=0; i< tam; i++)
    {

        if( x[i].isEmpty == 0)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

int buscarEmpleado(eEmpleado x[], int tam, int legajo)
{
    int indice = -1;
    for(int i=0; i < tam; i++)
    {


        if( x[i].legajo == legajo && x[i].isEmpty == 1)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

int menu()
{
    int opcion;
    system("cls");
    printf("***Menu de Opciones***\n\n");
    printf("1- Alta\n");
    printf("2- Baja\n");
    printf("3- Modificar\n");
    printf("4- Listar\n");
    printf("5- Listar Todos los Empleados de un Sector\n");
    printf("6- Mostrar empleados por sector ordenados alfabeticamente");
    printf("10- Salir\n");
    printf("Ingrese opcion: ");
    fflush(stdin);
    scanf("%d", &opcion);

    return opcion;
}

void agregarEmpleado(eEmpleado empleados[], int tam,eSector sectores[],int tamSector)
{
    eEmpleado nuevoEmpleado;
    int indice;
    int esta;
    int legajo;

    indice = buscarLibre(empleados, tam);

    if(indice == -1)
    {
        printf("No hay lugar\n\n");
    }
    else
    {
        printf("Ingrese legajo: ");
        scanf("%d", &legajo);

        esta = buscarEmpleado(empleados, tam, legajo);

        if(esta != -1)
        {
            printf("Existe un empleado con el legajo %d\n", legajo);
            mostrarEmpleado( empleados[esta],sectores,tamSector);
        }
        else{
            nuevoEmpleado.legajo = legajo;

            printf("Ingrese nombre: ");
            fflush(stdin);
            gets(nuevoEmpleado.nombre);

            printf("Ingrese sexo: ");
            fflush(stdin);
            scanf("%c", &nuevoEmpleado.sexo);

            printf("Ingrese sueldo: ");
            fflush(stdin);
            scanf("%f", &nuevoEmpleado.sueldo);

            nuevoEmpleado.idSector=elejirSector(sectores,5);

            nuevoEmpleado.isEmpty = 1;

            empleados[indice] = nuevoEmpleado;

        }
    }

}

void mostrarEmpleado(eEmpleado emp,eSector sectores[],int tamSector)
{
    char descripcion[30];
    cargarDescripcion(sectores,tamSector,emp.idSector,descripcion);
    printf("%d %s %c %.2f  %s \n\n", emp.legajo, emp.nombre, emp.sexo, emp.sueldo,descripcion);

}


void mostrarEmpleados(eEmpleado nomina[], int tam,eSector sectores[],int tamSector)
{
    for(int i=0; i< tam; i++)
    {
        if( nomina[i].isEmpty == 1)
        {
            mostrarEmpleado(nomina[i],sectores,tamSector);
        }
    }
}

void eliminarEmpleado(eEmpleado empleados[], int tam,eSector sectores[],int tamSector){

int legajo;
int indice;
char borrar;

printf("Ingrese legajo: ");
scanf("%d", &legajo);

indice = buscarEmpleado(empleados, tam, legajo);

if( indice == -1){
    printf("No hay ningun empleado con el legajo %d\n", legajo);
}
else{
    mostrarEmpleado( empleados[indice],sectores,tamSector);

    printf("\nConfirma borrado?: ");
    fflush(stdin);
    scanf("%c", &borrar);
    if(borrar != 's'){
        printf("Borrado cancelado\n\n");
    }
    else{
        empleados[indice].isEmpty = 0;
        printf("Se ha eliminado el empleado\n\n");
    }
    system("pause");
}

}

void modificarEmpleado(eEmpleado empleados[], int tam,eSector sectores[],int tamSector)
{

int legajo;
int indice;
char modificar;
float nuevoSueldo;

printf("Ingrese legajo: ");
scanf("%d", &legajo);

indice = buscarEmpleado(empleados, tam, legajo);

if( indice == -1){
    printf("No hay ningun empleado con el legajo %d\n", legajo);
}
else{
    mostrarEmpleado( empleados[indice],sectores,tamSector);

    printf("\nModifica sueldo?: ");
    fflush(stdin);
    scanf("%c", &modificar);
    if(modificar != 's'){
        printf("Modificacion cancelada\n\n");
    }
    else{
            printf("Ingrese nuevo sueldo: ");
            scanf("%f", &nuevoSueldo);

        empleados[indice].sueldo = nuevoSueldo;
        printf("Se ha modificado el sueldo con exito\n\n");
    }

    system("pause");
}



}

int elejirSector(eSector sectores[],int tam)
{
    int idSector;
    printf("\n SECTORES\n\n");
    for(int i=0;i<tam;i++)
        {
            printf("%d %s\n",sectores[i].id,sectores[i].descripcion);
        }
    printf("\nSeleccione Sector: ");
    scanf("%d",&idSector);

    return idSector;
}

void cargarDescripcion(eSector sectores [],int tamSector ,int idSector ,char cadena[])
{
    for(int i=0;i<tamSector;i++)
        {
            if(sectores[i].id==idSector)
                {
                    strcpy(cadena,sectores[i].descripcion);
                    break;
                }
        }
}

void listarEmpleadosPorSector(eEmpleado x[],int tam,eSector sectores[],int tamSector)
{
    int opcion;
    int flag=-1;
    opcion=elejirSector(sectores,tamSector);

    for(int i=0;i<tam;i++)
        {
            if(x[i].idSector==opcion &&x[i].isEmpty==1)
                {
                     mostrarEmpleado(x[i],sectores,tamSector);
                     flag=1;
                }
        }
   if(flag==-1)
    {
        printf("no hay empleados en este sector");
    }
}

/*void harcodearEmpleados(eEmpleado[])
{
    eEmpleado aux;

    aux[]=
    {

    }

}*/

void ordenarEmpleadosAlfabeticamente(eEmpleado empleados[],int tam,eSector sectores[],int tamSectores)
{
    eEmpleado aux;
    char descripcionI[20];
    char descripcionJ[20];

    for(int i=0;i<tam-1;i++)
        {
            for(int j=i+1;j<tam;j++)
                {
                    cargarDescripcion(sectores,tamSectores,empleados[i].idSector,descripcionI);
                    cargarDescripcion(sectores,tamSectores,empleados[j].idSector,descripcionJ);

                            if(strcmp(descripcionI,descripcionJ)>0)
                                {
                                    aux=empleados[i];
                                    empleados[i]=empleados[j];
                                    empleados[j]=aux;
                                }else if(strcmp(descripcionI,descripcionJ)==0 && strcmp(empleados[i].nombre,empleados[j].nombre)>0)
                                {

                                    aux=empleados[i];
                                    empleados[i]=empleados[j];
                                    empleados[j]=aux;
                                }

                }
        }

}

