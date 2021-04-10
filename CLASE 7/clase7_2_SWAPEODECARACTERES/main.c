#include <stdio.h>
#include <stdlib.h>
#define DECRECIENTE 0
#define CRECIENTE 1
#define TAM 5
int ordenarCaracteres(char vec[], int tam, int criterio);
int mostrarVectorEnteros(char vec[], int tam);
int main()
{
    char vectorCaracteres[TAM]={'a','d','c','e','b'};

    //mostrarVectorEnteros(vectorCaracteres,TAM);
    //ordenarCaracteres(vectorCaracteres,TAM,CRECIENTE);
    mostrarVectorEnteros(vectorCaracteres,TAM);
    ordenarCaracteres(vectorCaracteres,TAM,DECRECIENTE);
    mostrarVectorEnteros(vectorCaracteres,TAM);


    return 0;
}
int ordenarCaracteres(char vec[], int tam, int criterio)
{
    char aux;
    int todoOk=0;

    if(vec !=NULL && tam > 0 && criterio >=0 && criterio <=1)
    {
        for(int i=0; i<tam-1; i++)
        {
            for(int j = i +1; j<tam; j++){
                if((vec[i]>vec[j] && criterio)||(vec[i]<vec[j] && !criterio)){
                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
                }
            }
        }
        todoOk = 1;
    }
    return todoOk;
}
int mostrarVectorEnteros(char vec[], int tam)//NOMENCLATURA DE PUNTERO int* vec, int tam
{ int todoOk = 0;
   if(vec != NULL && tam >0)
    {
    for(int i = 0; i <tam; i++)
    {
        printf("%c\n", vec[i]);
    }
    printf("\n\n");
   todoOk = 1;//RETORNA UN 1 SI ESTA TODO BIEN
    }
    return todoOk;
}

