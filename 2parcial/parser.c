#include<string.h>
#include<stdio.h>
#include "parser.h"
#include "Employee.h"

void parserReadEmpleado(char* archivo,ArrayList* this)
{
    char nombre[51];
    char profesion[51];
    int edad;
    float sueldo;
    int id;
    int leidos;
    int i;
    Employee* aux;
    FILE* pFile;
    pFile=fopen(archivo,"r");

    if(pFile!=NULL)
    {
        for(i=0;!feof(pFile);i++)
        {
            leidos=fscanf(pFile,"%d,%[^,],%f,%d,%[^,\n]\n",&id,nombre,&sueldo,&edad,profesion);
            if(leidos==5)
            {
                aux=employee_new();
                if(aux!=NULL)
                {
                    employee_setId(aux,id);
                    employee_setIsEmpty(aux,0);
                    employee_setSueldo(aux,sueldo);
                    employee_setEdad(aux,edad);
                    employee_setNombre(aux,nombre);
                    employee_setProfesion(aux,profesion);
                    this->add(this,aux);
                }
            }
        }
    }
    fclose(pFile);
}

void parserWriteEmpleado(char* archivo,ArrayList* this)
{
    int i;
    Employee* aux;
    FILE* pFile;

    if(this!=NULL)
    {
        pFile=fopen(archivo,"w");

        if(pFile!=NULL)
        {
            for(i=0;i<this->len(this);i++)
            {
                aux = (Employee*) this->get(this,i);
                fprintf(pFile,"%d,%s,%.2f,%d,%s\n",employee_getId(aux),employee_getNombre(aux),employee_getSueldo(aux),employee_getEdad(aux),employee_getProfesion(aux));
            }
        }
        fclose(pFile);
    }
}






/*ArrayList* depurar(ArrayList* destinatarios,ArrayList* listaNegra)
{
    ArrayList* listaDepurada;
    listaDepurada=al_newArrayList();
    empleado* aux;
    empleado* auxBlack;
    int flag;
    int i;
    int j;
    if(destinatarios!=NULL&&listaNegra!=NULL)
    {
        for(i=0;i<destinatarios->len(destinatarios);i++)
        {
            flag=0;
            aux=destinatarios->get(destinatarios,i);
            for(j=0; j<listaNegra->len(listaNegra); j++)
            {
                auxBlack=listaNegra->get(listaNegra,j);
                if((strcmp(aux->profesion,auxBlack->profesion))==0)
                {
                    flag=1;
                }
            }
            if(flag==0)
            {
                listaDepurada->add(listaDepurada,aux);
            }
        }
    }
    return listaDepurada;
}

void listar(ArrayList* listaDepurada)
{
    int contador=0;
    empleado* aux;
    int i;
    for(i=0;i<listaDepurada->len(listaDepurada);i++)
    {
        aux=listaDepurada->get(listaDepurada,i);
        if(aux!=NULL)
        {
            printf("\n%s %s",aux->nombre,aux->profesion);
            contador=contador+1;
        }
    }
    printf("\nTotal Printeados %d",contador);
}
*/
