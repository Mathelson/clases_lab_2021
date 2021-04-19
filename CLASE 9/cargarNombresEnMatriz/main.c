#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILAS 5
#define COLUMNAS 20

/***BURBUJEO ORDENA POR NOMBRE***/
int main()
{
    char nombres[FILAS][COLUMNAS]={{"Gi"},{"Matheo"},{"Isabel"},{"Anahi"},{"Lo"}};
    char auxCad[100];

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
        for(int i=0; i<FILAS; i++)
    {
        printf("%s\n", nombres[i]);
    }

    printf("\n\n");
    for(int i=0; i < FILAS -1; i++)
    {
        for(int j = i+1; j <FILAS; j++)//CRITERIO DE ORDENAMIENTO
        {
            if(strcmp(nombres[i],nombres[j])>0)//resta internamente// si son iguales vemos al otro
                {//swap
                    strcpy(auxCad,nombres[i]);
                    strcpy(nombres[i], nombres[j]);
                    strcpy(nombres[j],auxCad);

                }
        }
    }
    for(int i=0; i<FILAS; i++)
    {
        printf("%s\n", nombres[i]);
    }
    printf("\n\n");
    return 0;
}
//void mostrarNombres(char names[])
