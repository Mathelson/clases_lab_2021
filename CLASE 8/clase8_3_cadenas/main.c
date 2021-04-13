#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int miStrlen(char cadena[]);
void miStrUpr(char cadena[]);

int main()
{
   // char nombre[6] = {"Anahi"};//comillas dobles le aviso que es codigo ASCIIZ 012345 seis elementos 'A''n''a''h''i';
  // char destino [6];//={"Anahi"};//el ultimo es \0
  char destino[20];
  char origen[20]={"Anahi"};;
   //int edad = 20;
    //strcpy(destino,"Anahi");//string copy, source origen

   // printf("Nombre:%s Edad: %d\n", destino, edad);
    strcpy(destino,origen);//ORIGEN=CADENA1
    printf("origen: %s\n",origen);//el largo guardado en cadena origen sea menor que el taminao de destino
    printf("destino: %s\n",destino);//que destino se banque lo que esta en la cadenaq origen
 /** LE IMPORTA EL TAMAÑO DEL ARRAY DESDE EL INDICE 0 HASTA \0*/
 /**VALIDAR ANTES DE PASAR***/
 //printf("%d",strlen(origen));
  printf("%d\n",miStrlen(origen));

 strlwr(origen);//el array se pasa por referencia, puede modificar fisicamente la posicion de mi array
 printf("origen: %s\n",origen);
 miStrUpr(origen);
  printf("origen: %s\n",origen);
 //strupr(origen)

    return 0;
}

int miStrlen(char cadena[])
{
    //contar la cantidad de caracteres
    int contador=0;

    //recorrro hasta el \0
    for(int i=0; cadena[i] != '\0';i++)
    {
        contador++;

    }
    return contador;
}
void miStrUpr(char cadena[])
{


    //recorrro hasta el \0
    for(int i=0; cadena[i] != '\0';i++)
    {
        if(cadena[i]>=97 && cadena[i]<=122)//mayor o igual a 37
        {
            //contador[i]=toupper(cadena[i]);
            contador[i]=cadena[i]-32;

        }


    }

}
cadena1 Alfredo A-J=65-74=-1 si el primer parametro esta antes
cadena2 Jose

Zoilo Z-A=90-65= 1 el segundo esta antes en el diccionario
Alan


Zoilo Z-z=-1 el primer parametro esta antes en el diccionario
zoilo

printf("%d",strcmp(cadena1,cadena2));







quiero que sean iguales
printf  stricmp//NO LE DA IMPORTANCIA A MAYUSCULAS Y MINUSCULAS
-1 cadena1 esta antes en el diccionario/**SE PUEDE VER CON EL CODIGO ASCII*/
