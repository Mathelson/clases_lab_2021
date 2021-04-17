#include <stdio.h>
#include <stdlib.h>
/**TIPOS DE VARIABLES**/
int main()
{
    char variableEscalar;
    char vectorUnadimension[20];
    char matriz[5][20];
    //char charEscalar;
    //char nombres[5][20];
    //char auxCad[100];

   // char sexos[5];
    //char nombre[20];

    //printf("Ingrese sexo: ");
    //scanf("%c", &sexos[0]);//MASCARA DE CARACTER POS DENTRO DEL CARACTER.UN CARACTER

    //printf("Ingrese sexo: ");
    //scanf("%s", nombre);//MASCARA %S, DONDE TIENE QUE EMPEZAR A ESCRIBIR.UNA CADENA DE CARACTERES PUSO UNA X

    /**DISTINTAS MANERAS DE GUARDAR LO MISMO*/
    printf("Ingrese un caracter");
    fflush(stdin);
    scanf("%c", &variableEscalar);
    printf("Ingrese un caracter");
    fflush(stdin);
    scanf("%c", &vectorUnadimension[0]);
    printf("Ingrese un caracter");
    fflush(stdin);
    scanf("%c", &matriz[0][0]);



    printf("Ingrese cadena");
    fflush(stdin);
    scanf("%s",x);//la cadena

    strcpy(x, "Juan");//se escribe el \0 solo


    printf("Ingrese cadena");
    fflush(stdin);
    scanf("%s",matriz[3]);//identifica un vector en la matriz//FILA//pila de vectores, el alambre

    strcpy(y[3],"sofia");//y[3]="sofia", esta mal.






    return 0;
}
