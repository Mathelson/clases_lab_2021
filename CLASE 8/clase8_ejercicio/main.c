#include <stdio.h>
#include <stdlib.h>
void miStrUpr(char cadena[]);
int miStrlen(char cadena[]);
int main()
{
    printf("Hello world!\n");
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
    int contador=0;


    //recorrro hasta el \0
    for(int i=0; cadena[i] != '\0';i++)
    {
        if(cadena[i]>=97 && cadena[i]<=122)//mayor o igual a 37
        {
            //contador[i]=toupper(cadena[i]);
            contador[i]=cadena[i]-32;
           // contador++;

        }


    }
    return contador;

}
