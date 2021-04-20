#include <stdio.h>
#include <stdlib.h>
/**
PROBLEMA COLECTIVOS

linea 1, llinea 2, linea 3
12 internos en cada linea
Matriz de 3 filas(lineas) y 12 columnas(internos)
Hacer un programa que pida la linea y el interno.
Guardar lo que se va recaudando en una matriz acumulando las ganancias hasta que el usuario quiera.
Cuando el usuario ya no quiere ingresar informacion mostrar lo que se recaudo en formato de tabla agregando una fila y una columna
que muestren los totales por columna y por fila.
Indicar en el espacio sobrante(ultimo cuadradito) la recaudacion to
*/
#define FILAS 3
//LAS COLUMNAS SON OBLIGATORIAS
#define COLUMNAS 5
void totalizar(int mat[][13], int filas);
int main()
{
    //char nombres[5][20];//fila//Columna

    // nombres[0][0] = 'a';
    //  int matriz[][]={8,9,3,2,1,4,7,10,15,21,1,2,6,7,11};
    //int matriz[FILAS][COLUMNAS]= {8,9,3,2,1,4,7,10,15,21,1,2,6,7,11};
    //int matriz[][COLUMNAS]= {8,9,3,2,1,4,7,10,15,21,1,2,6,7,11};
    int matriz[FILAS][COLUMNAS];

   /**columna*///TERMINAR
   /**cargo por fila**/
    for(int f=0; f < FILAS; f++)
    {
        for(int c=0; c<COLUMNAS; c++)
        {

            printf("Ingrese un numero",matriz[f][c]);//00,01,02,03,04
            scanf("%d",&matriz[f][c]);
        }
        printf("\n");//estetico
    }

    /***MUESTRA**/

    for(int f=0; f < FILAS; f++)
    {
        for(int c=0; c<COLUMNAS; c++)
        {

            printf("%d",matriz[f][c]);//00,01,02,03,04
        }
        printf("\n");//estetico
    }
    //printf("%c\n",nombres[0][0]);
    return 0;
}
void totalizar(int mat[][13], int filas)
{
    for(int i=0; i<filas-1; i++)
    {
        for(int j=0; j <12; j++){
            mat[i][12]+=mat[i][j];//en el ultimo
        }
    }
        for(int j=0; j<13; j++)
    {
        for(int i=0; i <filas-1; i++){
            mat[3][j]+=mat[i][j];//en el ultimo
        }
    }

}
