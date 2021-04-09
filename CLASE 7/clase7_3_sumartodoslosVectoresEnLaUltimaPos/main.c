#include <stdio.h>
#include <stdlib.h>
#define TAM 5
int cargarVectoresEnteros(int vec[], int tam);
void mostrarVectorEnteros(int vec[], int tam);
int main()
{
    int numeros[TAM];
    numeros[4]=0;
   for(int i = 0; i < TAM-1; i++)
        {
            printf("ingrese un numero: ");
            scanf("%d", &numeros[i]);//*(vec + i); PUNTERO?
            numeros[4] +=numeros[i];

        }
        mostrarVectorEnteros(numeros,TAM);
    return 0;
}
int cargarVectoresEnteros(int vec[], int tam)//PARAMETROS FORMALES, SE DEBEN RESPETAR.
{
    int todoOK=0;
    if(vec != NULL && tam > 0)//TAREA DE REESTRUCTURAR
    {

        for(int i = 0; i < tam; i++)
        {
            printf("ingrese un numero: ");
            scanf("%d", &vec[i]);//*(vec + i); PUNTERO?
        }
    }
    else{
        todoOK=1;
    }

    return todoOK;
}
void mostrarVectorEnteros(int vec[], int tam)//NOMENCLATURA DE PUNTERO int* vec, int tam
{

    for(int i = 0; i <tam; i++)
    {
        printf("%d\n", vec[i]);
    }
    printf("\n\n");
}
