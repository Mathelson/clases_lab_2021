#include <stdio.h>
#include <stdlib.h>
#define TAM 5
int cargarVectoresEnteros(int vec[], int tam);
int cargarVectoresFlotantes(float vec[], int tam);
void mostrarVectorEnteros(int vec[], int tam);
float calcularPromedio(int num1, int nume2);
void mostrarPromedio(int n1[],int n2[], float prom[], int tam);
int main()
{
   int notaPrimerParcial[TAM];
    int notaSegundoParcial[TAM];
    float promedio[TAM];
    cargarVectoresEnteros(notaPrimerParcial,TAM);
    cargarVectoresEnteros(notaSegundoParcial,TAM);

    for(int i = 0; i <TAM; i++)
    {
        promedio[i]= calcularPromedio(notaPrimerParcial[i],notaSegundoParcial[i]);
    }

    printf("\n\n");
    mostrarPromedio(notaPrimerParcial,notaSegundoParcial,promedio,TAM);

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
int cargarVectoresFlotantes(float vec[], int tam)//PARAMETROS FORMALES, SE DEBEN RESPETAR.
{
    int todoOK=0;
    if(vec != NULL && tam > 0)//TAREA DE REESTRUCTURAR
    {

        for(int i = 0; i < tam; i++)
        {
            printf("ingrese un numero: ");
            scanf("%f", &vec[i]);//*(vec + i); PUNTERO?
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
float calcularPromedio(int num1, int num2)
{
    return (float)(num1+num2)/2;
}
void mostrarPromedio(int n1[],int n2[], float prom[], int tam)
{

    system("cls");
    printf("*** Listado promedios alimnos ***\n");
    printf("     NOTA 1Parcial Nota 2Parcial PROMEDIO\n");

    for(int i = 0; i< tam ; i++)
    {

        printf("       %2d         %2d         %.2f\n",n1[i],n2[i],prom[i]);
    }
    printf("\n\n");
}
