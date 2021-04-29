#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empleados.h"










/** \brief BAJA LOGICA
 *
 * \param lista[] eEmpleado
 * \param tam int
 * \return void
 *
 */
void mostrarEmpleados(eEmpleado lista[],int tam)
{
    int flag=1;
    printf("\n\n****MOSTRAR EMPPLEADOS***\n\n");
    printf(" Legajo Nombre Sexo Edad\n");
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
void mostrarEmpleado(eEmpleado unEmpleado)
{
    printf("\n%d %10s %c %d %.2f   %02d/%02d/%02d\n",
           unEmpleado.legajo,
           unEmpleado.nombre,
           unEmpleado.sexo,
           unEmpleado.edad,
           unEmpleado.sueldo,
           unEmpleado.fechaIngreso.dia,
           unEmpleado.fechaIngreso.mes,
           unEmpleado.fechaIngreso.anio);
}
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
void ordenaPorSexoDesYLegAs(eEmpleado lista[],int tam)
{
    //por sexos descendente de la z a la a//CODIGO ASCCII MENOR
//y por legajo ascendente 1 2 3 4 5

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
            }
        }
    }



}
void inicializarEmpleados(eEmpleado list[], int tam)
{
    printf("\n\n****INICIALIZO LOS EMPLEADOS 1 = VACIOS***\n\n");

    for(int i = 0; i<tam ; i++)
    {
        list[i].isEmpty=1;
    }
    printf("\n\n");
}
/** \brief MENU DE OPCIONES
 *
 * \return RETORNA LA OPCION ELEGIDA
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
    printf("6- Informes\n");
    printf("7- Salir\n");
    printf("Ingrese opcion\n");
    scanf("%d", &opcion);
    return opcion;
}
