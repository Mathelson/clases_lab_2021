#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

typedef struct{
    int dia;
    int mes;
    int anio;
}eFecha;

typedef struct{
    int legajo;
    char nombre[20];
    int edad;
    char sexo;
    float sueldo;
    eFecha fechaIngreso;
    int isEmpty;
}eEmpleado;

//commit agregar algun criterio de ordenamiento tipo si ingresa un nombre nuevo ordenar segun ese nombre
void mostrarEmpleados(eEmpleado lista[],int tam);
void mostrarEmpleado(eEmpleado unEmpleado);
void ordenarEmpleados(eEmpleado lista[], int tam);
void ordenarEmpleadosnombreascendente(eEmpleado lista[], int tam);//de A A Z
void ordenaPorSexoDesYLegAs(eEmpleado lista[],int tam);
void inicializarEmpleados(eEmpleado list[], int tam);
int menu();

#endif // EMPLEADO_H_INCLUDED
