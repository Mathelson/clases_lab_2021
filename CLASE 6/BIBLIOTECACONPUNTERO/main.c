#include <stdio.h>
#include <stdlib.h>
#define TAM 5


/**TERMINAR***/
int mostrarVectorEnteros(int* vec, int tam);
int cargarVectoresEnteros(int* vec, int tam);
int main()
{
   /*pasar de vector a funcion**/
   int numeros[BUSCAYREEMPLAZADELPREPROCESADOR]={0};


   cargarVectoresEnteros(numeros,BUSCAYREEMPLAZADELPREPROCESADOR);



   //la direccion de memoria del primer elemento, TAMAÑO SE CAMBIA A LA HORA DE COMPILAR
   if(!mostrarVectorEnteros(numeros,BUSCAYREEMPLAZADELPREPROCESADOR))
   {
       printf("HUBO UN ERROR AL MOSTRAR EL VECTOR");
   }


    return 0;
}
/**NOMENCLATURA PUNTERO*/
/** \brief MUESTRA DATOS NUMERICOS
 *
 * \param vec int* recibe la direccion de memoria
 * \param tam int tama dimensión del array
 * \return int retorna un 1 si se pudo mostrar y un 0 si hubo un error
 *
 */
int mostrarVectorEnteros(int* vec, int tam)
{ int todoOk = 0;
   if(vec != NULL && tam >0)
    {
    for(int i = 0; i <tam; i++)
    {
        printf("%d", *(vec + i));
    }
    printf("\n\n");
   todoOk = 1;//RETORNA UN 1 SI ESTA TODO BIEN
    }
    return todoOk;
}
/** \brief PERMITE CARGAR ENTEROS
 *
 * \param vec int* recibe enteros
 * \param tam int tamaño del espacio en memoria
 * \return int retorna un 1 si sepudo cargar y un 0 si hubo un error
 *
 */
int cargarVectoresEnteros(int* vec, int tam)//PARAMETROS FORMALES, SE DEBEN RESPETAR.
{
    int todoOK=0;
    if(vec != NULL && tam > 0)//TAREA DE REESTRUCTURAR
    {

        for(int i = 0; i < tam; i++)
        {
            printf("ingrese un numero: ");
            scanf("%d", vec + i);
        }
    }
    else{
        todoOK=1;
    }

    return todoOK;
}
