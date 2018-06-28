#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H
struct
{
    int id;
    char nombre[51];
    float sueldo;
    char profesion[51];
    int edad;
    int isEmpty;

}typedef Employee;


int employee_compare(void* pEmployeeA,void* pEmployeeB);
void employee_print(Employee* this);
Employee* employee_new(void);
void employee_delete(Employee* this);
int employee_setId(Employee* this, int id);
int employee_getId(Employee* this);
int employee_setEdad(Employee* this, int edad);
int employee_setSueldo(Employee* this, float sueldo);
#endif // _EMPLOYEE_H



