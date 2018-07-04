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


void employee_print(Employee* this);
Employee* employee_new(void);
int funcionQueFiltra(void* item);

int employee_setId(Employee* this, int id);
int employee_setEdad(Employee* this, int edad);
int employee_setSueldo(Employee* this, float sueldo);
int employee_setIsEmpty(Employee* this, int isEmpty);
int employee_setNombre(Employee* this, char* nombre);
int employee_setProfesion(Employee* this, char* profesion);

int employee_getId(Employee* this);
int employee_getEdad(Employee* this);
float employee_getSueldo(Employee* this);
int employee_getIsEmpty(Employee* this);
char* employee_getNombre(Employee* this);
char* employee_getProfesion(Employee* this);


void employee_delete(Employee* this);
int employee_compare(void* pEmployeeA,void* pEmployeeB);
#endif // _EMPLOYEE_H



