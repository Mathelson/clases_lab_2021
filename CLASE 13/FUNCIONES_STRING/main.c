#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
int main()
{
    char texto[251];

        printf("Introduzca una cadena -> " );

        gets(texto);

        for(int i=0; texto[i]!='\0' ; i++)
        {
            if(texto[i-1]==' ')
            {
                texto[i] = strupr(texto[i]);
            }
            else
            {
                texto[i] = strlwr(texto[i]);
            }
        }
            printf(" %s ",texto);

        getchar();

            return 0;
}
/**

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{

return 0;
}


**/
