#include <stdio.h>
#include <stdlib.h>
#define TAM 10
#define ACENDENTE 1
#define DECENDENTE 0
int cargarVectoresEnteros(int vec[], int tam);
int cargarVectoresFlotantes(float vec[], int tam);
int mostrarVectorEnteros(int vec[], int tam);
float calcularPromedio(int num1, int nume2);
int mostrarPromedio(int legajo[], char sexo[],int n1[],int n2[], float prom[], int tam );
int ordenaPromedio(float vec[], int tam, int criterio);
int ordenarAlumnos(int legajo[], char sexo[], int n1[],int n2[], float prom[], int tam);
int main()
{
    int notaPrimerParcial[TAM]= {10, 4, 8, 2,7,10, 4, 8, 2,7};
    int notaSegundoParcial[TAM]= {10,9,10,4,6,10,9,10,4,6};
    char sexos[TAM]={'f','f','m','f','m','f','f','m','f','m'};
    int legajos[TAM]={1233,2144,3221,7616,1323,6444,4155,6681,9322,1111};

    float promedio[TAM];
    //cargarVectoresEnteros(notaPrimerParcial,TAM);
    //cargarVectoresEnteros(notaSegundoParcial,TAM);

    //for(int i=0;i<TAM;i++)
    //{
      //  printf("Ingrese legajo\n");
        //scanf("%d",&legajos[i]);
       // printf("Ingrese sexo\n");
       // scanf("%c",&sexos[i]);
       // printf("nota primer parcial\n");
        //scanf("%d",&notaPrimerParcial[i]);
        //printf("nota segundo parcial\n");
        //scanf("%d",&notaSegundoParcial[i]);

    //}


    for(int i = 0; i <TAM; i++)
    {
        promedio[i]= calcularPromedio(notaPrimerParcial[i],notaSegundoParcial[i]);
    }
    printf("\n\n");
    if(!mostrarPromedio(legajos,sexos,notaPrimerParcial,notaSegundoParcial,promedio,TAM))
    {
        printf("HUBO UN ERROR");
    }
    if(!ordenarAlumnos(legajos,sexos,notaPrimerParcial,notaSegundoParcial,promedio,TAM))
    {
        printf("HUBO UN ERROR");
    }
    ;
    if(!mostrarPromedio(legajos,sexos,notaPrimerParcial,notaSegundoParcial,promedio,TAM))
    {
        printf("HUBO UN ERROR");
    }


    return 0;
}
/**TERMINADO*/
int cargarVectoresEnteros(int vec[], int tam)//PARAMETROS FORMALES, SE DEBEN RESPETAR.
{
    int todoOK=0;
    if(vec != NULL && tam > 0)//TAREA DE REESTRUCTURAR
    {

        for(int i = 0; i < tam; i++)
        {
            printf("Ingrese un numero");
            scanf("%d", &vec[i]);//*(vec + i); PUNTERO?
        }
    }
    else
    {
        todoOK=1;
    }

    return todoOK;
}
/**TERMINADO*/
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
    else
    {
        todoOK=1;
    }

    return todoOK;
}
/**TERMINADO*/
int mostrarVectorEnteros(int vec[], int tam)//NOMENCLATURA DE PUNTERO int* vec, int tam
{
    int todoOk = 0;
    if(vec != NULL && tam >0)
    {
        for(int i = 0; i <tam; i++)
        {
            printf("%d\n", vec[i]);
        }
        printf("\n\n");
        todoOk = 1;//RETORNA UN 1 SI ESTA TODO BIEN
    }
    return todoOk;
}
/**TERMINADO*/
float calcularPromedio(int num1, int num2)
{

    return (float)(num1+num2)/2;

}
int mostrarPromedio(int legajo[], char sexo[],int n1[],int n2[], float prom[], int tam)
{
    int todoOk=0;
     if(n1 !=NULL && n2 !=NULL && prom !=NULL && tam > 0 && legajo !=NULL && sexo !=NULL)
     {
        system("cls");
        printf("*** Listado promedios alimnos ***\n");
        printf("     LEGAJO  SEXO  NOTA 1Parcial Nota 2Parcial PROMEDIO\n");

        for(int i = 0; i< tam ; i++)
        {

            printf("     %2d      %2c        %2d         %2d         %.2f\n",legajo[i], sexo[i],n1[i],n2[i],prom[i]);

        }
        printf("\n\n");
        todoOk=1;

     }
    return todoOk;
}
/**TERMINADO*/
int ordenaPromedio(float vec[], int tam, int criterio)
{
    float aux;
    int todoOk=0;

    if(vec !=NULL && tam > 0 && criterio >=0 && criterio <=1)
    {
        for(int i=0; i<tam-1; i++)
        {
            for(int j = i +1; j<tam; j++)
            {
                if((vec[i]>vec[j] && criterio)||(vec[i]<vec[j] && !criterio))
                {
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
/**TERMINADO*/
int ordenarAlumnos(int legajo[], char sexo[], int n1[],int n2[], float prom[], int tam)
{
    int auxInt;
    char auxChar;
    float auxFloat;
    int todoOk=0;

    if(n1 !=NULL && n2 !=NULL && prom !=NULL && tam > 0)
    {


    for(int i=0; i< tam -1; i++)
    {
        for(int j = i+1; j <tam; j++)
        {
            if(prom[i]<prom[j])
            {

                auxFloat=prom[i];
                prom[i]=prom[j];
                prom[j]=auxFloat;

                auxInt=n1[i];
                n1[i]=n1[j];
                n1[j]=auxInt;

                auxInt=n2[i];
                n2[i]=n2[j];
                n2[j]=auxInt;

                auxInt=legajo[i];
                legajo[i]=legajo[j];
                legajo[j]=auxInt;

                auxChar=sexo[i];
                sexo[i]=sexo[j];
                sexo[j]=auxChar;


            }
        }
    }

    todoOk=1;
     }

     return todoOk;

}
