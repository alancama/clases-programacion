#ifndef ARRAYEMPLOYEES_H_INCLUDED
#define ARRAYEMPLOYEES_H_INCLUDED

struct
{
 int id;
 char name[51];
 char lastName[51];
 float salary;
 int sector;
 int isEmpty;
}typedef Employee;

struct
{
    int id;
    char descripcion[50];
}typedef eSector;


/** \brief To indicate that all position in the array are empty,
 * this function put the flag (isEmpty) in TRUE in all
 * position of the array
 * \param list Employee* Pointer to array of employees
 * \param len int Array length
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 *
 */
int initEmployees(Employee list[], int len);
int obtenerEspacioLibre(Employee list[], int len);
void addEmployee(Employee list[],int len,int index);
int menu();




#endif // ARRAYEMPLOYEES_H_INCLUDED
