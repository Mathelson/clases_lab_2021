#include <stdio.h>
#include <stdlib.h>

#define TAM 5
#define CRECIENTE 1
#define DECRECIENTE 0
/**SWAPEO*/
//void mostrarEnteros(int vec[],int tam);
//void ordenarVectorEnteros(int vec[], int tam, int criterio);
int ordenarVectorEnteros(int vec[], int tam, int criterio);
int mostrarVectorEnteros(int vec[], int tam);
int main()
{
    //int array[TAM]={5,9,2,4,8};//ordenar de manera creciente 2,4,5,8,9
    //elije dos elementos con una estrategia, quiero ordenar de menor a mayor
    /**  for(int i=0; i<3; i++){//1 hola x 10 chau
          printf("Hola\n");
          for(int j=0; j<5;j++)
          {
              printf("chau\n");
          }
      }*/
    int numeros[TAM]= {5,9,2,4,8};
    mostrarVectorEnteros(numeros,TAM);
    if(!ordenarVectorEnteros(numeros,TAM,DECRECIENTE))
    {
        printf("Hubo unproblema al ordenar el vector\n");
    }
    mostrarVectorEnteros(numeros,TAM);
    if(!ordenarVectorEnteros(numeros,TAM,CRECIENTE))
    {
        printf("Hubo unproblema al ordenar el vector\n");
    }
    mostrarVectorEnteros(numeros,TAM);





    /**
    RECORRIDO FOR INTERIROR
    i=0 j=1234
    i=1 j=234
    i=2 j=34
    i=3 j=4


    */

    return 0;
}
//void ordenarVectorEnteros(int vec[], int tam, int criterio){

//   int aux;
//    if(criterio){
//     for(int i=0;i<tam-1; i++){
/*DECRECIENTEnumeros[i]<numeros[j] DE MAYOR A MENOR = DECRECIENTE**/
//        for(int j=i+1;j<tam;j++)//j =1234  DE MENOR A MAYOR
//        {
//VER QUE ESTEN ORDENADOSif no estan ordenarlos , swapearlos
//            if(vec[i]>vec[j]){//manera creciento
//                aux = vec[i];
//                vec[i] = vec[j];
//                vec[j] = aux;
//            }
//        }
//     }
//    }
//    else{
//             for(int i=0;i<tam-1; i++){
/*DECRECIENTEnumeros[i]<numeros[j] DE MAYOR A MENOR = DECRECIENTE**/
//        for(int j=i+1;j<tam;j++)//j =1234  DE MENOR A MAYOR
//        {
//VER QUE ESTEN ORDENADOSif no estan ordenarlos , swapearlos
//            if(vec[i]<vec[j]){//manera creciento
//                aux = vec[i];
//                vec[i] = vec[j];
//                vec[j] = aux;
//            }
//        }
//     }



//    }



//}

//void mostrarEnteros(int vec[],int tam)
//{

//    for(int i = 0; i <tam; i++)
//    {
//        printf("%d", vec[i]);
//    }
//    printf("\n\n");
//}

//int aux;
//int todoOk=1
//if(vec!=NULL&&tam>0 && criterio >=0 && criterio<=1)
//{
//     if(criterio){
//         for(int i=0;i<tam-1; i++){
/*DECRECIENTEnumeros[i]<numeros[j] DE MAYOR A MENOR = DECRECIENTE**/
//        for(int j=i+1;j<tam;j++)//j =1234  DE MENOR A MAYOR
//        {
//VER QUE ESTEN ORDENADOSif no estan ordenarlos , swapearlos

//            if
//            if(vec[i]>vec[j]){//manera creciento
//                aux = vec[i];
//                vec[i] = vec[j];
//                vec[j] = aux;
//            }
//        }
//     }
//     todoOk=1;

//     }

//    return todoOk=1;
//}
/**CORREGIDO*/
int ordenarVectorEnteros(int vec[], int tam, int criterio)
{
    int aux;
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
