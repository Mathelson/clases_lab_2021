#include <stdio.h>
#include <stdlib.h>
#define FILAS 3
//LAS COLUMNAS SON OBLIGATORIAS
#define COLUMNAS 5
/**REVISAR MOSTRAR HORA 8:37*/
void mostrarMatriz (int matriz[][5],int filas);
int main()
{
    int matriz[FILAS][COLUMNAS]= {{8,9,3,2,1},{4,7,10,15,21},{1,2,6,7,11}};
    mostrarMatriz(matriz,FILAS);
    return 0;

}
void mostrarMatriz (int matriz[][5],int filas)
{


 for(int f=0; f < filas; f++)
    {
        for(int c=0; c<5; c++)
        {

            printf("%d",matriz[f][c]);//00,01,02,03,04
        }
        printf("\n");//estetico
    }
}
