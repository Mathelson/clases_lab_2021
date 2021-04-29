#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empleados.h"
#define TAM 2


int main()
{
    eEmpleado nomina[TAM];
    char seguir='s';
    int nextId=20000;
    inicializarEmpleados(nomina,TAM);
    do
    {
        switch(menu())
        {
        case 1:
            //alta emplead
            if(altaEmpleado(nomina,TAM,&nextId))
            {
                printf("Alta exitosa!!\n");
            }
            else
            {
                printf("Hubo un problema al dar de alta\n");
            }
            break;
        case 4:
            mostrarEmpleados(nomina,TAM);
            break;
        case 7:
            seguir = 'n';
        default:
            printf("Opcion invalida\n\n");
        }
        system("pause");
    }
    while(seguir=='s');

        //mostrarEmpleados(nomina,TAM);
        return 0;
}

