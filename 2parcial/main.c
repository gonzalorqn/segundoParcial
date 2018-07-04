#include <stdio.h>
#include <stdlib.h>
#include "parser.h"
#include "Employee.h"

int main()
{
    ArrayList* empleados;
    ArrayList* listaFiltrada;
    empleados = al_newArrayList();
    int i;

    parserReadEmpleado("empleados.csv",empleados);

    for(i=0;i<empleados->len(empleados);i++)
    {
        employee_print(empleados->pElements[i]);
    }

    listaFiltrada = al_filter(empleados,funcionQueFiltra);

    for(i=0;i<listaFiltrada->len(listaFiltrada);i++)
    {
        employee_print(listaFiltrada->pElements[i]);
    }

    parserWriteEmpleado("out.csv", listaFiltrada);

    return 0;
}
