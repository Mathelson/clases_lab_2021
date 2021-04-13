#include <stdio.h>
#include <stdlib.h>
#define TAM 5
/** \brief busca un caracter en un array de caracteres
 *
 * \param letras[] char array sobre el que se realiza la busqueda
 * \param tam int tamanio del array;
 * \param caracterBuscar caracter a buscar;
 * \return int int indice de ubicacion del caracter de la primera ocurrencia o -1 si no se encuentra
 *
 */
int buscarCaracter(char vec[], int tam, char caracterBuscar);
int buscarReemplzar(char vec[], int tam, char caracterBuscar, char reemplazo);
int main()
{
    char letras[TAM]={'a','r','t','u','f'};
    for(int i =0; i<TAM; i++)
    {
        printf("%c",letras[i]);
    }
    printf("\n\n");
    printf("%d",buscarCaracter(letras,TAM,'r' ) );
    buscarReemplzar(letras,TAM,'u','j')
      for(int i =0; i<TAM; i++)
    {
        printf("%c",vec[i]);
    }



    return 0;
}
int buscarCaracter(char vec[], int tam, char caracterBuscar)
{
    int retorno=-1;
    //if no poner caracterBuscar EN !NULL
    for(int i =0; i<tam; i++)
    {
        if(vec[i]==caracterBuscar)
        {
            retorno=i;
            break;//MEJORA EL RENDIMIENTO EVITAMOS SEGUIR ITERANDO
        }
    }

    return retorno;
}
int buscarReemplzar(char vec[], int tam, char caracterBuscar, char reemplazo)
{
    int contador=0;
    //if no poner caracterBuscar EN !NULL
    for(int i =0; i<tam; i++)
    {
        if(vec[i]==caracterBuscar)
        {
            vec[i]=reemplazo;
            contador++;
            break;//MEJORA EL RENDIMIENTO EVITAMOS SEGUIR ITERANDO
        }
    }

    return contador;
}
