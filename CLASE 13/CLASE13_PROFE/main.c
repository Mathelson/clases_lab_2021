#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empleado.h"
//#include "datawarehouse.h"
#define TAM 10
#define TAMSEC 5

/** \brief Informa la cantidad de empleados de un sector
*   hace una lista de sectores para que yo no tenga que acordaarme de memoria el id del sector
* y mediante el id me va a informar la cantidad de empleaados que pertenecen a ese sector
 *
 * \return int
 *
 */
int empleadosSector(eEmpleado lista[], int tam,eSector sectores[], int tamS );
int actualizarSueldosXSector(eEmpleado lista[],int tam,eSector sectores[],int tamS);
int aDepositar(eEmpleado lista[],int tam, eSector sectores[], int tamS);
int main()
{
        eSector sectores[TAMSEC] =
    {
        {500,"Sistemas"},
        {501,"RRHH"},
        {502,"Cobranzas"},
        {503,"Legales"},
        {504,"Ventas"}
    };
    char seguir='s';
    int opcionMenuInformes;
    int nextId=20000;

    eEmpleado nomina[TAM];
     inicializarEmpleados(nomina,TAM);
     hardcodearEmpleados(nomina,TAM, 10, &nextId);

    do
    {
        switch(menu())
        {
        case 1:

            if(altaEmpleado(nomina,TAM,&nextId, sectores, TAMSEC))
            {
                printf("Alta exitosa!!\n");
            }
            else
            {
                printf("Hubo un problema al dar de alta\n");
            }
            break;

        case 2:

            if(modificarEmpleado(nomina,TAM, sectores, TAMSEC))
            {
                printf("Modificacion exitosa!!\n");
            }
            else
            {
                printf("Hubo un problema al modificar el empleado\n");
            }
            break;

        case 3:

            if(bajaEmpleado(nomina,TAM,sectores,TAMSEC))
            {
                printf("Baja exitosa!!\n");
            }
            else
            {
                printf("Hubo un problema al dar de baja\n");
            }
            break;
        case 4:
            mostrarEmpleados(nomina,TAM,sectores,TAMSEC);
            break;
        case 5:
            ordenaPorSexoDesYLegAs(nomina,TAM);
            break;
        case 6:
            mostrarSectores(sectores, TAMSEC);
            break;
        case 7:
            /***********************/
             do
            {
                opcionMenuInformes= opcionesMenuInformes();

                switch (opcionMenuInformes)
                {
                case 1:
                    printf("\nInforme 1\n");
                    empleadosSector(nomina,TAM,sectores,TAMSEC);
                    system("pause");
                    system("cls");
                    break;
                case 2:
                    printf("\nActualizar sueldo 2\n");
                    actualizarSueldosXSector(nomina,TAM,sectores,TAMSEC);

                    system("pause");
                    system("cls");
                    break;

                case 3:
                    printf("\nTotales sueldos 3\n");
                    aDepositar(nomina,TAM,sectores,TAMSEC);

                    system("pause");
                    system("cls");
                    break;
                case 13:
                    printf("USTED SALIO DEL MENU DE INFORMES , SE DIRIGE AL MENU PRINCIPAL\n");
                    system("pause");
                }// final switch

            }//final while
            while (opcionMenuInformes != 13);
            break;
            /*************************/
        case 12:
            seguir = 'n';
            break;
        default:
            printf("Opcion invalida\n\n");
        }
        system("pause");
    }
    while(seguir=='s');
    return 0;
}
/** \brief
 *
 * \param lista[] eEmpleado
 * \param tam int
 * \param sectores[] eSector
 * \param tamS int
 * \return int
 *
 */
int empleadosSector(eEmpleado lista[], int tam,eSector sectores[], int tamS )
{
    int idSector;
    int contador = 0;
    int retorno=0;
    char descripcion[20];
    system("cls");
    printf("   INFORME EMPLEADOS POR SECTOR\n");
    if(lista !=NULL && tam > 0 && sectores !=NULL && tamS> 0)
    {
            mostrarSectores(sectores,tamS);
            printf("\nIngrese sector: ");
            fflush(stdin);
            scanf("%d",&idSector);
            cargarDescripcionSector(idSector, sectores,tamS,descripcion);
            for(int i=0; i<tam; i++)
            {
                if(lista[i].idSector == idSector && lista[i].isEmpty==0)
                {
                    contador++;
                    retorno=1;
                }
            }
            if(contador==0)
            {
                printf("\nNo hay empleados en el sector %s", descripcion);
            }
            else
            {
                printf("\n en el sector %s hay %d empleados",descripcion,contador);
            }

     }
     return retorno;
}
/** \brief Actualiza los sueldos por sector
 *
 * \param lista[] eEmpleado
 * \param tam int
 * \param sectores[] eSector
 * \param tamS int
 * \return int
 *
 */
int actualizarSueldosXSector(eEmpleado lista[],int tam,eSector sectores[],int tamS)
{
    int idSector;
    int porcentaje;
    float sueldo;
    float nuevoSueldo;
    int retorno=0;
    char descripcion[20];
    system("cls");
    printf("   INFORME ACTUALIZAR SUELDO X SECTOR\n");
    if(lista !=NULL && tam > 0 && sectores !=NULL && tamS> 0)
    {
            mostrarSectores(sectores,tamS);
            printf("\nIngrese sector: ");
            fflush(stdin);
            scanf("%d",&idSector);
            cargarDescripcionSector(idSector, sectores,tamS,descripcion);
            printf("Ingrese porcentaje: ");
            fflush(stdin);
            scanf("%d",&porcentaje);
            for(int i=0; i<tam; i++)
            {
                if(lista[i].idSector == idSector && lista[i].isEmpty==0)
                {
                    sueldo = lista[i].sueldo;
                    nuevoSueldo = sueldo + sueldo * porcentaje /100;
                    lista[i].sueldo = nuevoSueldo;
                    retorno=1;
                }
            }

                printf("\nSe han actualizado los sueldo del sector %s", descripcion);


     }
     return retorno;
}
/** \brief Recorro cada sector y los empleados de cada uno y los voy sumando
 *
 * \param lista[] eEmpleado
 * \param tam int
 * \param sectores[] eSector
 * \param tamS int
 * \return int
 *
 */
int aDepositar(eEmpleado lista[],int tam, eSector sectores[], int tamS)
{
    float totalSector;
    float total=0;
    int retorno=0;
    system("cls");
    printf("Informe sueldos x sector y total sueldos\n\n");
     if(lista !=NULL && tam > 0 && sectores !=NULL && tamS> 0)
    {
        for(int i=0; i< tamS; i ++)
        {
            printf("Sector: %s\n",sectores[i].descripcion);
            totalSector=0;
            for(int j=0; j< tam; j++)
            {
                if(lista[j].isEmpty==0 && lista[j].idSector == sectores[i].id)
                {
                    totalSector += lista[j].sueldo;
                    retorno=1;
                }
            }
            printf("Total: $%.2f\n\n",totalSector);
            total += totalSector;
        }
        printf("Total sueldo Empresa: %.2f\n\n",total);
    }
    return retorno;
}
