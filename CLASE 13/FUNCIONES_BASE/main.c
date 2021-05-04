#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
/** \brief Valida un numero
 *
 * \param pResultado int* el numero a ser validado
 * \param mensaje char* Mensaje al usuario
 * \param mensajeError char* Mensaje de Error al usuario
 * \param minimo int numero minimo a ingresar
 * \param maximo int numero maximo a ingresar
 * \param reintentos int reintentos que puede hacer el usuario
 * \return int retorna un 1 si el ingresado fue un numero, de lo contrario retonara un -1
 *
 */
int getNumeroEntero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);
int getChar(char* pResultado, char* mensaje, char* mensajeError, char minimo, char maximo, int reintentos);
int esNumerica (char* cadena);
int getInt(int* pResultado);
int myGets(char* cadena, int longitud);

int main()
{
    int auxInt;
   // int edad;
   // int respuesta;
 //   char letra;


  /**  respuesta = getNumeroEntero(&edad,"Ingrese Edad\n","Error la edad debe ser entre 0 a 99\n",0,99,2);

    if(respuesta==0)
    {
        printf("La edad es: %d", edad);
    }
    else
    {
        printf("Error");
    }

    respuesta = getChar(&letra,"Ingrese Edad\n","Error la edad debe ser entre 0 a 99\n",'A','Z',2);

    if(respuesta==0)
    {
        printf("\nLa letra es: %c", edad);
    }
    else
    {
        printf("Error");
    }*/

    while(1)
    {
        if(getNumeroEntero(&auxInt,"Ingrese la edad\n","Ingrese un numero valido\n",0,1,2)==-1)
        {
           printf("Hubo un error al cargar la edad");
        }
    }



    return 0;
}
/** \brief Solicita un numero al usuario, luego de verificarlo devuelve el resultado
 *
 * \param pResultado int* Puntero al espacio de memoria donde se dejara el resultado de la funcion
 * \param mensaje char* Es el mensaje a ser mostrado
 * \param mensajeError char* Es el mensaje de Error a ser mostradp
 * \param minimo int Es el numero maximo a ser aceptado
 * \param maximo int Es el numero minimo a ser aceptado
 * \param reintentos int es la cantidad de veces que el usuario podra ingresar un numero
 * \return int Retorna 0 si se obtuvo el numero -1 si no
 *
 */
int getNumeroEntero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
    int retorno=-1;
    int bufferInt;

    if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >=0)
    {
        do
        {
            printf("%s",mensaje);
            //scanf("%d",&bufferInt);
            ;
            if(getInt(&bufferInt) == 0 &&bufferInt >= minimo && bufferInt <= maximo)
            {
                *pResultado = bufferInt;
                retorno = 0;
                break;//porque consegui el nombre
            }
            else
            {
                printf("\n%s",mensajeError);
                reintentos--;
            }

        }
        while(reintentos>=0);

    }
    return retorno;
}
int getChar(char* pResultado, char* mensaje, char* mensajeError, char minimo, char maximo, int reintentos)
{

    int retorno=-1;
    char bufferChar;

    if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >=0)
    {
        do
        {
            printf("%s",mensaje);
            fflush(stdin);
            scanf("%c",&bufferChar);
            if(bufferChar >= minimo && bufferChar <= maximo)
            {
                *pResultado = bufferChar;
                retorno = 0;
                break;//porque consegui el nombre
            }
            else
            {
                printf("\n%s",mensajeError);
                reintentos--;
            }

        }
        while(reintentos>=0);

    }
    return retorno;
}


/** \brief
 *
 * \param pResultado int* Puntero al espacio de memoria donde se dejara el resultado de la funcion
 * \return int Retorna 0 (EXITO) si se obtiene un numero entero y -1 (ERROR) si no
 *
 */
int getInt(int* pResultado)
{
    int retorno = -1;
    char buffer[100];

    if(myGets(buffer,sizeof(buffer))== 0 && esNumerica(buffer))
    {
        retorno =0;
        *pResultado = atoi(buffer);
    }
    return retorno;
}
/** \brief Verifica si la cadena ingresada es numerica
 *
 * \param cadena de caracteres a ser analizada
 * \return Retorna 1 (verdadero) si la cadena es numerica y 0 (falso) si no lo es
 *
 */
int esNumerica (char* cadena)
{
    int retorno = 1;
    int i=0;
    if(cadena[0] == '-')
    {
        i = 1;
    }
    for(; cadena[i] != '\0'; i++)
    {
            if(cadena[i] > '9' || cadena[i]<'0')
            {
                retorno = 0;
                break;
            }
    }
    return retorno;
}

/** \brief Lee de stdin hasta que encuentra un '\n' o hasta que haya copiado en cadena
 *          un maximo de 'longitud -1' caracteres.
 * \param pResultado Puntero al espacio de memoria donde se copiara la cadena obtenida
 * \param   longitud Define el tamaño de cadena
 * \return int Retorna 0 (EXITO) si se eontiene una cadena y -1 (ERROR) si no
 *
 */
int myGets(char* cadena, int longitud)
{
    //char buffer[100];
    //fflush(stdin);
    //scanf("%s",buffer);
    //strncpy(cadena,buffer,longitud);
    fflush(stdin);
    fgets(cadena,longitud,stdin);

    cadena[strlen(cadena)-1] = '\0';
    return 0;
}

