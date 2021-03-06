#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED
#include "LinkedList.h"

struct S_Empleado
{
  int id;
  char nombre[128];
  int horasTrabajadas;
  int sueldo;
};
typedef struct S_Empleado Empleado;

Empleado* employee_new();
//Empleado* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr,char* sueldoStr);
Empleado* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr);

int employee_delete(Empleado* this);

int employee_setId(Empleado* this,int id);
int employee_getId(Empleado* this,int* id);

int employee_setNombre(Empleado* this,char* nombre);
int employee_getNombre(Empleado* this,char* nombre);

int employee_setHorasTrabajadas(Empleado* this,int horasTrabajadas);
int employee_getHorasTrabajadas(Empleado* this,int* horasTrabajadas);

int employee_setSueldo(Empleado* this,int sueldo);
int employee_getSueldo(Empleado* this,int* sueldo);

int employee_buscarMaxId(LinkedList* pArrayListEmployee);

int employee_validarEmpleado(Empleado* pEmpleado);

int em_calcularSueldo(void* p);
int criterioSueldo(void* p);

#endif // EMPLEADO_H_INCLUDED
