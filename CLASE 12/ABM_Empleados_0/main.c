#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empleados.h"
#define TAM 5

int main()
{
    eEmpleado nomina[TAM];
   inicializarEmpleados(nomina,TAM);
    mostrarEmpleados(nomina,TAM);
    return 0;
}
