#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"

//HACER GETTERS Y TERMINAR SETTERS

int employee_compare(void* pEmployeeA,void* pEmployeeB)
{
    int retorno;
    Employee* e1 = (Employee*) pEmployeeA;
    Employee* e2 = (Employee*) pEmployeeB;

    retorno = strcmp(e1->nombre, e2->nombre);

    return retorno;
}


void employee_print(Employee* this)
{
    printf("%d -- %s -- %.2f -- %d -- %s\n",this->id,this->nombre,this->sueldo,this->edad,this->profesion);
}


Employee* employee_new(void)
{

    Employee* returnAux = NULL;
    returnAux = (Employee*) malloc(sizeof(Employee));

    return returnAux;

}

void employee_delete(Employee* this)
{


}

int employee_setId(Employee* this, int id)
{
    int ret=-1;
    if(this!=NULL && id>0)
    {
        ret = 1;
        this->id = id;
    }
    return ret;

}

int employee_setEdad(Employee* this, int edad)
{
    int ret=-1;
    if(this!=NULL && edad>0)
    {
        ret = 1;
        this->edad = edad;
    }
    return ret;

}

int employee_setSueldo(Employee* this, float sueldo)
{
    int ret=-1;
    if(this!=NULL && sueldo>0)
    {
        ret = 1;
        this->sueldo = sueldo;
    }
    return ret;

}

int employee_getId(Employee* this)
{

    return 0;

}


