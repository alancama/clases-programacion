#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

typedef struct
{
    int id;
    char descripcion[30];
    float importe;
    int isEmpty;

}eMenu;

int menuOpciones();

void initMenu(eMenu menues[],int tamMenu);
int buscarLibre(eMenu menues[],int tamMenu);
void altaMenu(eMenu menues[],int tamMenu);
int buscarMenu(eMenu menues[],int tamMenu,int id);
int siguienteID(eMenu menues[],int tamMenu);
#endif // MENU_H_INCLUDED
