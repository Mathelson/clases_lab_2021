#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empleado.h"





/** \brief Muestra un array de Empleados
 *
 * \param lista[] eEmpleado recibe por paramtro la estructura
 * \param tam int Tamanio
 * \return void
 *
 */
void mostrarEmpleados(eEmpleado lista[],int tam)
{
    int flag=1;
    printf("\n\n****MOSTRAR EMPPLEADOS***\n\n");
    printf(" Legajo Nombre Sexo Edad Sueldo Fecha de Ingreso sector\n");
    //LIMPIAR PANTALLA
    for(int i = 0; i<tam ; i++)
    {

        if(!lista[i].isEmpty) //si no esta vacia la muestro si es diferente de1
        {
            mostrarEmpleado(lista[i]);
            flag =0;
        }

    }
    if(flag)
    {
        printf("No hay empleados en la lista");
    }
    printf("\n\n");
}
/** \brief Muestra un Empleado
 *
 * \param unEmpleado eEmpleado rebibe por parametro la estructura a ser mostrada
 * \return void
 *
 */
void mostrarEmpleado(eEmpleado unEmpleado)
{
    printf("\n%d %10s %c %d %.2f   %02d/%02d/%02d    %d\n",
           unEmpleado.legajo,
           unEmpleado.nombre,
           unEmpleado.sexo,
           unEmpleado.edad,
           unEmpleado.sueldo,
           unEmpleado.fechaIngreso.dia,
           unEmpleado.fechaIngreso.mes,
           unEmpleado.fechaIngreso.anio,
           unEmpleado.idSector
           );
}
/** \brief Ordena los empleados por edad
 *
 * \param lista[] eEmpleado empleados a ordenar
 * \param tam int tamanio
 * \return void
 *
 */
void ordenarEmpleados(eEmpleado lista[], int tam)
{
    //ordenar por edad descendente
    eEmpleado auxEmpleado;
    for(int i=0; i <tam-1; i++)
    {
        for(int j=i+1; j<tam; j++)
        {
            //de mayor a menor
            if(lista[i].edad < lista[j].edad)
            {
                auxEmpleado = lista[i];
                lista[i]=lista[j];
                lista[j]=auxEmpleado;
            }
        }
    }


}
/** \brief Ordena Empleados de Manera Ascendente  de la A a la Z
 *
 * \param lista[] eEmpleado estructura de empleados
 * \param tam int tamnio del array
 * \return void
 *
 */
void ordenarEmpleadosnombreascendente(eEmpleado lista[], int tam)//de A A Z
{
    printf("\nse ordeno de a a z\n");
    eEmpleado auxEmpleado;
    for(int i=0; i <tam-1; i++)
    {
        for(int j=i+1; j<tam; j++)
        {

            if(strcmp(lista[i].nombre,lista[j].nombre)>0)
            {
                auxEmpleado = lista[i];
                lista[i]=lista[j];
                lista[j]=auxEmpleado;
            }
        }
    }
//imprimir se ordeno de a a z**/

}
/** \brief Ordena Empleados por sexo de manera Descendente y despues por Legajo de manera ascendente
 *
 * \param lista[] eEmpleado estructura de empleados
 * \param tam int Tamanio del Array
 * \return int Retorna un 1 si se pudo ordenar
 *
 */
int ordenaPorSexoDesYLegAs(eEmpleado lista[],int tam)
{
    //por sexos descendente de la z a la a//CODIGO ASCCII MENOR
//y por legajo ascendente 1 2 3 4 5
    int retorno = 0;

    printf("\nse ordeno por sexo y leg\n");
    eEmpleado auxEmpleado;
    for(int i=0; i <tam-1; i++)
    {
        for(int j=i+1; j<tam; j++)
        {

            if(lista[i].sexo < lista[j].sexo || (lista[i].sexo==lista[j].sexo && lista[i].legajo > lista[j].legajo ))
            {
                auxEmpleado = lista[i];
                lista[i]=lista[j];
                lista[j]=auxEmpleado;

                retorno = 1;
            }
        }
    }


 return retorno;
}
/** \brief Inicializa Empleados en 1 para declararlos como vacios
 *
 * \param list[] eEmpleado estructura de empleados
 * \param tam int tamanio del array
 * \return void
 *
 */
void inicializarEmpleados(eEmpleado list[], int tam)
{
    printf("\n\n****INICIALIZO LOS EMPLEADOS 1 = VACIOS***\n\n");

    for(int i = 0; i<tam ; i++)
    {
        list[i].isEmpty=1;
    }
    printf("\n\n");
}
/** \brief Menu opciones principal
 *
 * \return retorna la opcion elegida
 *
 */
int menu()
{
    int opcion;
    system("cls");
    printf(" Gestion de Empleados\n");
    printf("1- Alta de Empleado\n");
    printf("2- Modifica Empleado\n");
    printf("3- Baja de Empleado\n");
    printf("4- Listar  Empleados\n");
    printf("5- Ordenar Empleados\n");
    printf("6- Mostrar Sectores\n");
    printf("7- Informes\n");
    printf("12- Salir\n");
    printf("Ingrese opcion\n");
    scanf("%d", &opcion);
    return opcion;
}
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
int altaEmpleado(eEmpleado lista[], int tam, int* punteroId, eSector sectores[], int tamSec)
{
    int retorno = 0;//FALSE
    int indice;
    eEmpleado nuevoEmpleadoAux;
    if(lista != NULL && tam > 0 && punteroId != NULL)
    {
        system("cls");
        printf("    Alta Empleado\n\n");
        printf("Legajo: %d\n", *punteroId);

        indice = buscarLibre(lista, tam);
        if(indice == -1)
        {
            printf("no hay lugar en el sistema\n");
        }
        else
        {
            nuevoEmpleadoAux.legajo = *punteroId;

            printf("Ingrese nombre: ");
            fflush(stdin);
            gets(nuevoEmpleadoAux.nombre);

            printf("Ingrese edad: ");
            scanf("%d",&nuevoEmpleadoAux.edad);

            printf("Ingrese sexo: ");
            fflush(stdin);
            scanf("%c",&nuevoEmpleadoAux.sexo);

            printf("Sueldo: ");
            fflush(stdin);
            scanf("%f",&nuevoEmpleadoAux.sueldo);

            printf("Ingrese fecha de ingreso dd/mm/aaa: INGRESE LAS BARRAS ");
            scanf("%d/%d/%d",&nuevoEmpleadoAux.fechaIngreso.dia,
                  &nuevoEmpleadoAux.fechaIngreso.mes,
                  &nuevoEmpleadoAux.fechaIngreso.anio);

            mostrarSectores(sectores, tamSec);
            printf("Ingrese sector: ");
            fflush(stdin);
            scanf("%d", &nuevoEmpleadoAux.idSector);

            //BANDERA LA PASO A 0
            nuevoEmpleadoAux.isEmpty = 0;
            //IF(FLAGNOMBRE && FLAGEDAD)

            lista[indice] = nuevoEmpleadoAux;

            //ACTUALIZAMOS EL PROXIMO ID
            (*punteroId)++;//*punteroId = (*punteroId) + 1;

            retorno = 1;
        }

    }

    return retorno;
}
/** \brief Busca el primer lugar libre dentro del array de la estructura Eempleados
 *
 * \param lista[] eEmpleado recibe la estructura
 * \param tam int el array de estructura tamanio hay varias estructuras cargadas con empleados
 * \return int retorna i indice del lugar libre si lo hay y de lo contrario retornara un -1
 * al no haber lugar
 *
 */
int buscarLibre(eEmpleado lista[],int tam)
{
    int indice = -1;
    if(lista != NULL && tam > 0)
    {
        for(int i=0; i < tam; i++)
        {
            if( lista[i].isEmpty)//isEmpty==1
            {
                indice = i;
                break;
            }
        }
    }
    return indice;
}
/** \brief Muestra los Sectores
 *
 * \param sectores[] eSector estructuras de Sectores
 * \param tam int array de estructuras
 * \return void
 *
 */
void mostrarSectores(eSector sectores[], int tam){
    printf("Lista de Sectores\n");
    printf(" Id Descripcion\n");
    for(int i=0; i<tam; i++)
    {
        mostrarSector(sectores[i]);
    }
    printf("\n\n");
}
/** \brief Muestra Sector
 *
 * \param unSector eSector recibe estructura
 * \return void
 *
 */
void mostrarSector(eSector unSector){

    printf(" %d %10s\n", unSector.id, unSector.descripcion);

}
/** \brief Baja de empleado, Utilizo la funcion buscar empleado
 *
 * \param list[] eEmpleado estructura de empleados
 * \param tam int array de empleados, tamanio
 * \return int Retorna un 1 cuando se pudo dar de baja el empleado
 *
 */
int bajaEmpleado(eEmpleado list[], int tam)
{
    int retorno = 0;
    int indice;
    int legajo;
    char confirma;

    system("cls");
    printf("       Baja Empleado\n");
    mostrarEmpleados(list,tam);
    printf("Ingrese legajo: ");
    scanf("%d", &legajo);

    indice = buscarEmpleado(list, tam, legajo);

    if( indice == -1)
    {
        printf("No existe un empleado con el legajo %d\n", legajo);
    }
    else
    {
        mostrarEmpleado(list[indice]);

        printf("Confirma baja?: ");
        fflush(stdin);
        scanf("%c", &confirma);

        if( confirma == 's')
        {
            list[indice].isEmpty = 1;
            retorno = 1;
        }
        else
        {
            printf("Baja cancelada por el usuario\n");
        }
    }
    return retorno;
}
/** \brief Busca un empleado, si isEmpty es igual 0 y elgajo es igual al legajo retorna el indice
 *
 * \param list[] eEmpleado estructura de empleado
 * \param tam int Tamanio del array de empleados
 * \param legajo int recibe el legajo a buscar
 * \return int retorna el indice de lo contrario si no se esncontro retona -1
 *
 */
int buscarEmpleado(eEmpleado list[], int tam,int legajo)
{
    int indice = -1;
    if(list != NULL && tam > 0)
    {
        for(int i=0; i < tam; i++)
        {
            if( !list[i].isEmpty && list[i].legajo == legajo)//isEmpty==0
            {
                indice = i;
                break;
            }
        }
    }
    return indice;
}

/** \brief Muestra el menu del empleado a modificar
 *
 * \return int
 *
 */
int menuEmpleado()
{
    int opcion;
    printf("MODIFICAR EMPLEADO");
    system("cls");
    printf(" Editar Empleado\n");
    printf("1- NOMBRE\n");
    printf("2- EDAD\n");
    printf("3- SEXO\n");
    printf("4- SUELDO\n");
    printf("5- FECHA DE INGRESO\n");
    printf("6- SECTOR\n");
    printf("7- Salir\n");
    printf("Ingrese opcion\n");
    scanf("%d", &opcion);
    return opcion;
}


/** \brief Modifica el empleado
 *
 * \param list[] eEmpleado  Estructura de empleado
 * \param tam int   tamion del array de estructura eEmpleado.
 * \param sectores[] eSector Estructura sectores.
 * \param tamSec int el tamanio del array de estructuras sectores.
 * \return int retorna un 1 si se pudo modificar y un 0 si no se pudo modificar.
 *
 */
int modificarEmpleado(eEmpleado list[], int tam, eSector sectores[], int tamSec)
{
    int retorno = 0;
    int indice;
    int legajo;
    char confirma;
    char subMenu = 's';
   // eEmpleado editarEmpleadoAux;

    system("cls");
    printf("       Modificar Empleado\n");
    mostrarEmpleados(list,tam);
    printf("Ingrese legajo: ");
    scanf("%d", &legajo);

    indice = buscarEmpleado(list, tam, legajo);

    if( indice == -1)
    {
        printf("No existe un empleado con el legajo %d\n", legajo);
    }
    else
    {
        mostrarEmpleado(list[indice]);

        printf("Confirma EDICION DE ESTE EMPLEADO?: ");
        fflush(stdin);
        scanf("%c", &confirma);

        if( confirma == 's')
        {
            do{
                switch(menuEmpleado())
                {
                    case 1:
                        printf("Ingrese nombre: ");
                        fflush(stdin);
                        gets(list[indice].nombre);
                       // strcpy(list[indice].nombre,editarEmpleadoAux.nombre)

                        break;
                    case 2:
                        printf("Ingrese edad: ");
                        scanf("%d",&list[indice].edad);

                        break;
                    case 3:
                        printf("Ingrese sexo: ");
                        fflush(stdin);
                        scanf("%c",&list[indice].sexo);

                        break;
                    case 4:
                        printf("Sueldo: ");
                        fflush(stdin);
                        scanf("%f",&list[indice].sueldo);

                        break;
                    case 5:
                        printf("Ingrese fecha de ingreso dd/mm/aaa: INGRESE LAS BARRAS ");
                        scanf("%d/%d/%d",&list[indice].fechaIngreso.dia ,
                              &list[indice].fechaIngreso.mes,
                              &list[indice].fechaIngreso.anio);

                        break;
                    case 6:
                        printf("MODIFICAR SECTOR\n");
                        mostrarSectores(sectores, tamSec);
                        printf("Ingrese sector: ");
                        fflush(stdin);
                        scanf("%d", &list[indice].idSector);
                    case 7:
                    subMenu = 'n';
                    break;
                default:
                    printf("Opcion invalida\n\n");

                }
            }while(subMenu == 's');


            // list[indice] = editarEmpleadoAux;

             retorno=1;
        }
        else
        {
            printf("EDICION CANCELADA\n");
        }
    }
    return retorno;
}





