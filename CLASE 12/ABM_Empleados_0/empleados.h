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
/** \brief  devuelve un entero si se pudo dar de alta
 *
 * \param lista[] eEmpleado ARRAY DE EMPLEADO
 * \param tam int TAMANIO
 * \return int 1 se pudo dar de alta 0 no se pudo dar de alta
 *
 */
int altaEmpleado(eEmpleado lista[], int tam, int* punteroId);

/** \brief busca la Primer Estructura Libre
 *
 * \param lista[] eEmpleado ARRAY AL CUAL LLAMAMOS LISTA DENTRO DE LA FUNCION
 * \param tam int TAMANIO
 * \return int -1 si el array esta lleno, es decir que no hay mas lugar
 *
 */
int buscarLibre(eEmpleado lista[],int tam);
int menu();

#endif // EMPLEADO_H_INCLUDED
