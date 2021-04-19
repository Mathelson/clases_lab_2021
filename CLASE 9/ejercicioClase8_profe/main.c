#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define SIZE_NAME 20
#define SIZE_LASTNAME 20
#define NOMBRE_COMPLETO 41
#define SECURE_SIZE 100
/**ERROR STRLWR**/
int main()
{
    char nombre[SIZE_NAME];
    char apellido[SIZE_LASTNAME];
    char nombreYApellido[NOMBRE_COMPLETO];
    char auxCad[SECURE_SIZE];
    //pedir al usuario el nombre
    //pedir al usuario el apellido
    //en nombre completo baus, christian

    printf("Ingrese nombre:");
    fflush(stdin);
    //gets(nombre);//VALIDAAR LONGITUD
    gets(auxCad);
    while(strlen(auxCad) >= SIZE_NAME)
    {
        printf("Nombre demasiado largo.Reingrese nombre");
        fflush(stdin);
        //gets(nombre);//VALIDAAR LONGITUD
        gets(auxCad);
    }
    strcpy(nombre,auxCad);

    printf("Ingrese apellido:");
    fflush(stdin);
    gets(auxCad);
    while(strlen(auxCad) >= SIZE_LASTNAME)
    {
        printf("Nombre demasiado largo.Reingrese apellido");
        fflush(stdin);
        //gets(nombre);//VALIDAAR LONGITUD
        gets(auxCad);
    }
    strcpy(apellido,auxCad);

    strcpy(nombreYApellido, apellido);/**apellido\0**/
    strcat(nombreYApellido, ", ");//coma y espacio
    strcat(nombreYApellido, nombre);

    strlwr(nombreYApellido);//paso todo a minuscula

    nombreYApellido[0] = toupper(nombreYApellido[0]);
    //despues del espacio voy a tener una inicial

    for(int i=0; i <nombreYApellido[i] != '\0'; i++) //sea distinto  de '\0'
    {
        if(nombreYApellido[i] == ' ')//encuantra un espacio en blanco
        {
            nombreYApellido[i + 1] = toupper(nombreYApellido[i + 1]);
        }
    }

    printf("%s\n", nombreYApellido);

    return 0;
}


