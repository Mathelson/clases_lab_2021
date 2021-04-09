#include <stdio.h>
#include <stdlib.h>
#define TAM 5
//4,3,6,5,1
int main()
{
    int vec[TAM];


    for(int i = 0; i < TAM; i++)
        {
            printf("ingrese un numero: ");
            scanf("%d", &vec[i]);//*(vec + i); PUNTERO
        }


        for(int i = TAM - 1; i >= 0; i--)//Muestra al reves
        {
            printf("%d", vec[i]);
        }
        printf("\n\n");

    return 0;
}
