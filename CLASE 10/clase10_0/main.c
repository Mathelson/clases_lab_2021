#include <stdio.h>
#include <stdlib.h>
/**
PROBLEMA COLECTIVOS
https://drive.google.com/drive/folders/1VqPSib8h3qCr2NJIpF4pIVvsdo4noBZL
linea 1, llinea 2, linea 3
12 internos en cada linea
Matriz de 3 filas(lineas) y 12 columnas(internos)
Hacer un programa que pida la linea y el interno.
Guardar lo que se va recaudando en una matriz acumulando las ganancias hasta que el usuario quiera.
Cuando el usuario ya no quiere ingresar informacion mostrar lo que se recaudo en formato de tabla agregando una fila y una columna
que muestren los totales por columna y por fila.
Indicar en el espacio sobrante(ultimo cuadradito) la recaudacion to
*/
#define FILAS 4
//LAS COLUMNAS SON OBLIGATORIAS
#define COLUMNAS 13
void totalizar(int mat[][13], int filas);
void mostrarMatriz(int m[][13],int filas);
int main()
{
    //char nombres[5][20];//fila//Columna

    // nombres[0][0] = 'a';
    //  int matriz[][]={8,9,3,2,1,4,7,10,15,21,1,2,6,7,11};
    //int matriz[FILAS][COLUMNAS]= {8,9,3,2,1,4,7,10,15,21,1,2,6,7,11};
    //int matriz[][COLUMNAS]= {8,9,3,2,1,4,7,10,15,21,1,2,6,7,11};
    int matriz[FILAS][COLUMNAS]= {0};
    char seguir;
    int linea;
    int interno;
    int recaudacion;


    do{
        printf("Ingrese Linea: ");
        //validar linea 1 2 o 3
        scanf("%d",&linea);

        printf("Ingrese interno: ");
        //validar interno entre 1 && 12
        scanf("%d",&interno);

        printf("Ingrese recaudacion: ");
        //validar que sea >0
        scanf("%d",&recaudacion);

        //ACUMULADOR
        matriz[linea - 1][interno - 1] += recaudacion;

        printf("Quiere ingresar otra recaudacion?");
        fflush(stdin);
        scanf("%c",&seguir);
    }while(seguir=='s');

mostrarMatriz(matriz,FILAS);
return 0;
}
/** \brief SUMA POR FILA Y COLUMNA
 *
 * \param mat[][13] int
 * \param filas int
 * \return void
 *
 */
void totalizar(int mat[][13], int filas)
{
    for(int i=0; i<filas-1; i++)
    {
        for(int j=0; j <12; j++){
            mat[i][12]+=mat[i][j];//BARRIDO LINEA A LINEAS
            //si quiero ver cuantas veces se alquilo seria i++
        }
    }
        for(int j=0; j<13; j++)//VOY DE COLUMA 0 A LA COLUMNA 12
    {
        for(int i=0; i <filas-1; i++){
            mat[3][j]+=mat[i][j];//BARRIDO COLUMNA A COLUMNA
        }
    }

}
/** \brief MUESTRA LAS FILAS Y LAS COLUMNAS QUE SE VAN PIDIENDO EN EL MAIN + FUNCION DE SUMAR POR
           COLUMAS Y FILAS
 *
 * \param m[][13] int
 * \param filas int
 * \return void
 *
 */
void mostrarMatriz(int m[][13],int filas)
{
    totalizar(m,filas);
    printf("  ***Recaudaciones***\n");
    printf("       Internos\n");
    printf("            1   2   3   4   5   6   7   8   9   10  11  12 total interno\n");
    for(int f=0; f < filas; f++)
    {
        if(f==3)
        {
              printf("Total int");
        }
        else
        {
            printf("Linea %d  ", f+1);
        }
        for(int c=0; c < 13; c++)
        {
            printf("%4d",m[f][c]);
        }
        printf("\n\n");
    }

}
