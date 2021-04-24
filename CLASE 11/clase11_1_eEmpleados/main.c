#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empleado.h"
#define TAM 5

void mostrarEmpleados(eEmpleado lista[],int tam);
void mostrarEmpleado(eEmpleado unEmpleado);
void ordenarEmpleados(eEmpleado lista[], int tam);
void ordenarEmpleadosnombreascendente(eEmpleado lista[], int tam);//de A A Z
void ordenaPorSexoDesYLegAs(eEmpleado lista[],int tam);
int main()
{
    //eEmpleado nomina[TAM];
    eEmpleado nomina[TAM]={

    {1234,"Jose",24,'m',123000,{2,3,2001}},
    {2211,"Lucia",25,'f',125000,{21,5,2018}},
    {4434,"Alicia",21,'f',87000,{10,8,2004}},
    {2145,"Donato",39,'f',11000,{12,8,2017}},
    {2146,"Chepi",29,'f',11000,{11,8,2019}}


    };
    //eEmpleado emp1[TAM];
   /** for(int i=0; i<TAM; i++)
    {

        printf("Ingrese legajo");
        fflush(stdin);
        scanf("%d",&nomina[i].legajo);

        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(nomina[i].nombre);

        printf("Ingrese edad: ");
        scanf("%d",&nomina[i].edad);

        printf("Ingrese sexo");
        fflush(stdin);
        scanf("%c",&nomina[i].sexo);

        printf("Sueldo");
        fflush(stdin);
        scanf("%f",&nomina[i].sueldo);

        printf("Ingrese fecha de ingreso dd/mm/aaa: INGRESE LAS BARRAS ");
        scanf("%d/%d/%d",&nomina[i].dia,
              &nomina[i].mes,&nomina[i].anio);
    }*/
  //  for(int i=0; i<TAM; i++){
    mostrarEmpleados(nomina,TAM);
    ordenarEmpleados(nomina,TAM);
    mostrarEmpleados(nomina,TAM);
    ordenarEmpleadosnombreascendente(nomina,TAM);
    mostrarEmpleados(nomina,TAM);
    ordenaPorSexoDesYLegAs(nomina,TAM);
    mostrarEmpleados(nomina,TAM);
  //  }
    return 0;
}
void mostrarEmpleados(eEmpleado lista[],int tam)
{
    printf("\n\n****MOSTRAR EMPPLEADOS***\n\n");
    //LIMPIAR PANTALLA
    for(int i = 0; i<tam ; i++)
    {
       /** printf("\nNombre: %s %d %c %.2f %02d/%02d/%d\n",lista[i].nombre,
               lista[i].legajo,
               lista[i].sexo,
               lista[i].sueldo,
               lista.fechaIngreso[i].dia,
               lista.fechaIngreso[i].mes,
               lista.fechaIngreso[i].anio
              );*/
              mostrarEmpleado(lista[i]);
    }
    printf("/n/n");
}
void mostrarEmpleado(eEmpleado unEmpleado)
{
    printf("\n%d %10s %c %d &.2f   %02d/%02d/%02d\n",
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
    for(int i=0; i <tam-1; i++){
        for(int j=i+1; j<tam; j++){
                //de mayor a menor
            if(lista[i].edad < lista[j].edad){
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
    for(int i=0; i <tam-1; i++){
        for(int j=i+1; j<tam; j++){

            if(strcmp(lista[i].nombre,lista[j].nombre)>0){
                auxEmpleado = lista[i];
                lista[i]=lista[j];
                lista[j]=auxEmpleado;
            }
        }
    }
 //imprimir se ordeno de a a z**/

}
void ordenaPorSexoDesYLegAs(eEmpleado lista[],int tam)
{//por sexos descendente de la z a la a//CODIGO ASCCII MENOR
//y por legajo ascendente 1 2 3 4 5

 printf("\nse ordeno por sexo y leg\n");
    eEmpleado auxEmpleado;
    for(int i=0; i <tam-1; i++){
        for(int j=i+1; j<tam; j++){

            if(lista[i].sexo < lista[j].sexo || (lista[i].sexo==lista[j].sexo && lista[i].legajo > lista[j].legajo )){
                auxEmpleado = lista[i];
                lista[i]=lista[j];
                lista[j]=auxEmpleado;
            }
        }
    }



}
