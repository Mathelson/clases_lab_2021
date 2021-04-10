#include <stdio.h>
#include <stdlib.h>
#define TAM 5
#define ACENDENTE 1
#define DECENDENTE 0
int cargarVectoresEnteros(int vec[], int tam);
int cargarVectoresFlotantes(float vec[], int tam);
void mostrarVectorEnteros(int vec[], int tam);
float calcularPromedio(int num1, int nume2);
void mostrarPromedio(int n1[],int n2[], float prom[], int tam);
int ordenaPromedio(float vec[], int tam, int criterio);
void ordenarAlumnos(int n1[],int n2[], float prom[], int tam);
int main()
{
   int notaPrimerParcial[TAM]={10, 4, 8, 2,3};
    int notaSegundoParcial[TAM]={10,9,10,4,6};
    float promedio[TAM];
   // cargarVectoresEnteros(notaPrimerParcial,TAM);
    //cargarVectoresEnteros(notaSegundoParcial,TAM);

    for(int i = 0; i <TAM; i++)
    {
        promedio[i]= calcularPromedio(notaPrimerParcial[i],notaSegundoParcial[i]);
    }

    printf("\n\n");
    mostrarPromedio(notaPrimerParcial,notaSegundoParcial,promedio,TAM);
    ordenarAlumnos(notaPrimerParcial,notaSegundoParcial,promedio,TAM);
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

   // system("cls");
    printf("*** Listado promedios alimnos ***\n");
    printf("     NOTA 1Parcial Nota 2Parcial PROMEDIO\n");

    for(int i = 0; i< tam ; i++)
    {

        printf("       %2d         %2d         %.2f\n",n1[i],n2[i],prom[i]);
    }
    printf("\n\n");
}
int ordenaPromedio(float vec[], int tam, int criterio)
{
    float aux;
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
void ordenarAlumnos(int n1[],int n2[], float prom[], int tam)
{
    int auxInt;
    float auxFloat;

    for(int i=0; i< tam -1; i++){
        for(int j = i+1; j <tam; j++)
        {
            if(prom[i]<prom[j]){

                auxFloat=prom[i];
                prom[i]=prom[j];
                prom[j]=auxFloat;

                auxInt=n1[i];
                n1[i]=n1[j];
                n1[j]=auxInt;

                auxInt=n2[i];
                n2[i]=n2[j];
                n2[j]=auxInt;


            }
        }
    }

}
