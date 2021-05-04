#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empleado.h"
#include "datawarehouse.h"
#define TAM 5
#define TAMSEC 5

int cargarDescripcionSecto(int id, eSector sectores, int tam, char descripcion[]);//descripcion[]
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
    int nextId=20000;
    inicializarEmpleados(nomina,TAM);
    hardcodearEmpleados(nomina, TAM,5,&nextId);

    eEmpleado nomina[TAM];
    /** {

         {20000,"Jose",24,'m',123000,{2,3,2001},0},
         {20001,"Lucia",25,'f',125000,{21,5,2018},0},
         {20002,"Alicia",21,'f',87000,{10,8,2004},0},
         {20003,"Donato",39,'m',11000,{12,8,2017},0},
         {20004,"Chepi",30,'f',11000,{11,8,2019},0}


     };*/


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

            if(bajaEmpleado(nomina,TAM))
            {
                printf("Baja exitosa!!\n");
            }
            else
            {
                printf("Hubo un problema al dar de baja\n");
            }
            break;
        case 4:
            mostrarEmpleados(nomina,TAM, sectores,TAMSEC);
            break;
        case 5:
            ordenaPorSexoDesYLegAs(nomina,TAM);
            break;
        case 6:
            mostrarSectores(sectores, TAMSEC);
            break;
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
int cargarDescripcionSecto(int id, eSector sectores, int tam, char descripcion[])
{
    int retorno=0;// si no se encontro el sector

    if(id >= 0 && sectores !=NULL && tam >0 )&& descripcion !=NULL{
        for(int i =0; i<tam ; i++){
            if(sectores[i].id==id){
                strcpy(descripcion,sectores[i].descripcion);
                retorno=1;
                break;
            }
        }
    }
    return retorno;
}
