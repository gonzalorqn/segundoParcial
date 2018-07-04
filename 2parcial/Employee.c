#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayList.h"
#include "Employee.h"

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

int funcionQueFiltra(void* item)
{
    Employee* aux = NULL;
    int ret = 0;
    if(item!=NULL)
    {
        aux = (Employee*) item;
        if(aux->edad > 30 && strcmp(aux->profesion, "programador")==0)
        {
            ret = 1;
        }
    }
    return ret;
}

void employee_delete(Employee* this)
{

}

int employee_setId(Employee* this, int id)
{
    int ret = -1;
    if(this!=NULL && id>0)
    {
        ret = 0;
        this->id = id;
    }
    return ret;
}

int employee_setEdad(Employee* this, int edad)
{
    int ret = -1;
    if(this!=NULL && edad>0)
    {
        ret = 0;
        this->edad = edad;
    }
    return ret;
}

int employee_setSueldo(Employee* this, float sueldo)
{
    int ret = -1;
    if(this!=NULL && sueldo>0)
    {
        ret = 0;
        this->sueldo = sueldo;
    }
    return ret;
}

int employee_setIsEmpty(Employee* this, int isEmpty)
{
    int ret = -1;
    if(this!=NULL && isEmpty>0)
    {
        ret = 0;
        this->isEmpty = isEmpty;
    }
    return ret;
}

int employee_setNombre(Employee* this, char* nombre)
{
    int ret = -1;
    if(this!=NULL && nombre!=NULL && strlen(nombre)>2)
    {
        ret = 0;
        strcpy(this->nombre, nombre);
    }
    return ret;
}

int employee_setProfesion(Employee* this, char* profesion)
{
    int ret = -1;
    if(this!=NULL && profesion!=NULL && strlen(profesion)>2)
    {
        ret = 0;
        strcpy(this->profesion, profesion);
    }
    return ret;
}

int employee_getId(Employee* this)
{
    int ret = -1;
    if(this!=NULL)
    {
        ret = this->id;
    }
    return ret;
}

int employee_getEdad(Employee* this)
{
    int ret = -1;
    if(this!=NULL)
    {
        ret = this->edad;
    }
    return ret;
}

float employee_getSueldo(Employee* this)
{
    float ret = -1;
    if(this!=NULL)
    {
        ret = this->sueldo;
    }
    return ret;
}

int employee_getIsEmpty(Employee* this)
{
    int ret = -1;
    if(this!=NULL)
    {
        ret = this->isEmpty;
    }
    return ret;
}

char* employee_getNombre(Employee* this)
{
    char* ret = NULL;
    if(this!=NULL)
    {
        ret = this->nombre;
    }
    return ret;
}

char* employee_getProfesion(Employee* this)
{
    char* ret = NULL;
    if(this!=NULL)
    {
        ret = this->profesion;
    }
    return ret;
}

