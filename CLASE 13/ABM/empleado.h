#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

typedef struct{
int id;
char descripcion[20];
}eSector;

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
    int idSector;
    int isEmpty;
}eEmpleado;




/** \brief Muestra un array de Empleados
 *
 * \param lista[] eEmpleado recibe por paramtro la estructura
 * \param tam int Tamanio
 * \return void
 *
 */
void mostrarEmpleados(eEmpleado lista[],int tam);

/** \brief Muestra un Empleado
 *
 * \param unEmpleado eEmpleado rebibe por parametro la estructura a ser mostrada
 * \return void
 *
 */
void mostrarEmpleado(eEmpleado unEmpleado);

/** \brief Ordena los empleados por edad
 *
 * \param lista[] eEmpleado empleados a ordenar
 * \param tam int tamanio
 * \return void
 *
 */
void ordenarEmpleados(eEmpleado lista[], int tam);

/** \brief Ordena Empleados de Manera Ascendente  de la A a la Z
 *
 * \param lista[] eEmpleado estructura de empleados
 * \param tam int tamnio del array
 * \return void
 *
 */
void ordenarEmpleadosnombreascendente(eEmpleado lista[], int tam);

/** \brief Ordena Empleados por sexo de manera Descendente y despues por Legajo de manera ascendente
 *
 * \param lista[] eEmpleado estructura de empleados
 * \param tam int Tamanio del Array
 * \return int Retorna un 1 si se pudo ordenar
 *
 */
int ordenaPorSexoDesYLegAs(eEmpleado lista[],int tam);


/** \brief Inicializa Empleados en 1 para declararlos como vacios
 *
 * \param list[] eEmpleado estructura de empleados
 * \param tam int tamanio del array
 * \return void
 *
 */
void inicializarEmpleados(eEmpleado list[], int tam);


/** \brief Menu opciones principal
 *
 * \return retorna la opcion elegida
 *
 */
int menu();

/** \brief Carga un empleado y el sector donde se encuentra
 *
 * \param lista[] eEmpleado Recibe estructura del empleado
 * \param tam int array de empleados
 * \param punteroId int* puntero a ID empleado
 * \param sectores[] eSector Estructura del sector
 * \param tamSec int array de sectores, TAMANIO
 * \return int Retorna un 1 si se pudo ingresar correctamente los datos del nuevo empleado si
 * de lo contrario retornara un 0
 *
 */
int altaEmpleado(eEmpleado lista[], int tam, int* punteroId, eSector sectores[], int tamSec);


/** \brief Busca el primer lugar libre dentro del array de la estructura Eempleados
 *
 * \param lista[] eEmpleado recibe la estructura
 * \param tam int el array de estructura tamanio hay varias estructuras cargadas con empleados
 * \return int retorna i indice del lugar libre si lo hay y de lo contrario retornara un -1
 * al no haber lugar
 *
 */
int buscarLibre(eEmpleado lista[],int tam);

/** \brief Muestra los Sectores
 *
 * \param sectores[] eSector estructuras de Sectores
 * \param tam int array de estructuras
 * \return void
 *
 */
void mostrarSectores(eSector sectores[], int tam);

/** \brief Muestra Sector
 *
 * \param unSector eSector recibe estructura
 * \return void
 *
 */
void mostrarSector(eSector unSector);

/** \brief Baja de empleado, Utilizo la funcion buscar empleado
 *
 * \param list[] eEmpleado estructura de empleados
 * \param tam int array de empleados, tamanio
 * \return int Retorna un 1 cuando se pudo dar de baja el empleado
 *
 */
int bajaEmpleado(eEmpleado list[], int tam);

/** \brief Busca un empleado, si isEmpty es igual 0 y elgajo es igual al legajo retorna el indice
 *
 * \param list[] eEmpleado estructura de empleado
 * \param tam int Tamanio del array de empleados
 * \param legajo int recibe el legajo a buscar
 * \return int retorna el indice de lo contrario si no se esncontro retona -1
 *
 */
int buscarEmpleado(eEmpleado list[], int tam,int legajo);


/** \brief Muestra el menu del empleado a modificar
 *
 * \return int
 *
 */
int menuEmpleado();
/** \brief Modifica el empleado
 *
 * \param list[] eEmpleado  Estructura de empleado
 * \param tam int   tamion del array de estructura eEmpleado.
 * \param sectores[] eSector Estructura sectores.
 * \param tamSec int el tamanio del array de estructuras sectores.
 * \return int retorna un 1 si se pudo modificar y un 0 si no se pudo modificar.
 *
 */
int modificarEmpleado(eEmpleado list[], int tam, eSector sectores[], int tamSec);



#endif // EMPLEADO_H_INCLUDED
