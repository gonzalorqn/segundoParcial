#include <stdio.h>
#include <stdlib.h>
#include "parser.h"
#include "Employee.h"

int main()
{
    ArrayList* empleados;
    empleados = al_newArrayList();
    int i;

    parserReadEmpleado("empleados.csv",empleados);

    for(i=0;i<empleados->len(empleados);i++)
    {
        employee_print(empleados->pElements[i]);
    }

    return 0;
}
