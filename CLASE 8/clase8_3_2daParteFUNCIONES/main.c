#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    //char cadena1[20]="Hola";
   // char cadena2[20]="Mundo";
    //strcat(cadena1," ");/**'H'o''l''a'' ''\0'**/
    //strcat(cadena1, cadena2);/**'H'o''l''a'' ''M''u''n''d''o'**/
    //printf("%s\n",cadena1);

    ////puts(cadena1);

    char nombre[20];
    char auxCad[100];



    printf("Ingrese nombre: ");
    gets(auxCad);//se banca cantidad

    while(strlen(auxCad)>19)//EJEMPLO TWIT NO PUEDE SER MAS DE 140 CARACTERES
    {
        printf("Nombre demasiado largo. Reingrese nombre");
        fflush(stdin);
        gets(auxCad);

    }
    strcpy(nombre, auxCad);
    puts(nombre);
   // gets(nombre);//No le paso el tamanio,solo la direccion de memoria del primer elemento, pero esta es insegura tambien

    /**donde quiero guardar el dato, En nombre, el tam y el stdin=direccion de memoria del teclado lee hasta el largo del tam **/
   /**Independientemente de lo que haya voy a leer lo que le digo, puedo restringir y no hacer que se desborde como gets*/
   /** fgets(nombre,20,stdin);*///Puedo trabajar de manera segura//stdlib lee archivos
   //FALENCIA=PROBLEMA=SOLO UNA PALABRA DEJA DE LEER A PARTIR DEL ESPACION EN BLANCO
   // scanf("%s",nombre);//recibe por referencia, un nombre de un array es una referencia la direccion de memoria
    puts(nombre);
    return 0;
}
