#include <stdio.h>
#include <stdlib.h>
#define TAM 5
/** \brief busca un caracter en un array de caracteres
 *
 * \param letras[] char array sobre el que se realiza la busqueda
 * \param tam int tamanio del array;
 * \param caracterBuscar caracter a buscar;
 * \return int int 1 si el caracter esta en el array y 0 si no
 *
 */
int buscarCaracter(char vec[], int tam, char caracterBuscar);
int main()
{
    char letras[TAM]={'a','r','t','t','f'};
    printf("%d",buscarCaracter(letras,TAM,'t' ) );



    return 0;
}
int buscarCaracter(char vec[], int tam, char caracterBuscar)
{
    int seEncontro=0;
    //if no poner caracterBuscar EN !NULL
    for(int i =0; i<tam; i++)
    {
        if(vec[i]==caracterBuscar)
        {
            seEncontro=1;
            break;//MEJORA EL RENDIMIENTO EVITAMOS SEGUIR ITERANDO
        }
    }

    return seEncontro;
}
