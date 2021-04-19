#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILAS 5
#define COLUMNAS 20

/***BURBUJEO ORDENA POR NOMBRE***/
void mostrarNombres(char names[][20], int tam);
void ordenarNombres(char names[][20], int tam);

int main()
{
    char nombres[FILAS][COLUMNAS]= {{"Gi"},{"Matheo"},{"Isabel"},{"Anahi"},{"Lo"}};
//    char auxCad[100];

    /** for(int i=0; i<FILAS; i++)
     {
         printf("Ingrese un nombre ");
         fflush(stdin);
        // gets(nombres[i]);
        gets(auxCad)
        while(strlen(auxCad)>= COLUMNAS)
        {
            printf("Nombre largo");
            fflush(stdin);
        // gets(nombres[i]);
        gets(auxCad)
        }
        strcpy(nombres[i],auxCad);
     }*/
    mostrarNombres(nombres, FILAS);

    ordenarNombres(nombres, FILAS);

    mostrarNombres(nombres, FILAS);

    return 0;
}
void mostrarNombres(char names[][20], int tam)
{
    for(int i=0; i<tam; i++)
    {
        printf("%s\n", names[i]);
    }
    printf("\n\n");

}
void ordenarNombres(char names[][20], int tam)
{
    char auxCad[20];
    for(int i=0; i < tam -1; i++)
    {
        for(int j = i+1; j <tam; j++)//CRITERIO DE ORDENAMIENTO
        {
            if(strcmp(names[i],names[j])>0)//resta internamente// si son iguales vemos al otro
            {
                //swap
                strcpy(auxCad,names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j],auxCad);

            }
        }
    }
}
