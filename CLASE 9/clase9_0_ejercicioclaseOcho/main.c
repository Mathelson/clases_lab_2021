#include <stdio.h>
#include <stdlib.h>
/**SACADO DE INTERNET**/
int main()
{
  char texto[251];

  printf("Introduzca una cadena -> " );
  gets(texto);

  char* ptr = texto;

  while( *ptr != '\0' )
  {
    while( !isalpha(*ptr) && (*ptr != '\0') )
      ptr++;

    if( isalpha(*ptr) )
    {
      if( *ptr >= 'a' )
        *ptr = toupper(*ptr);
      ptr++;
    }

    while( isalpha(*ptr) )
    {
      *ptr = tolower(*ptr);
      ptr++;
    }
  }

  puts(texto);
    return 0;
}

/**



Así, ante una secuencia, por ejemplo:

teXTo##  ##dE    pRuebA
ptr empieza apuntando a la primera letra, la t. Como es una letra se pone a mayúsculas:

TeXTo##  ##dE    pRuebA
^
A continuación, se ponen a minúsculas el resto de letras:

Texto##  ##dE    pRuebA
     ^
Segunda iteración del bucle, lo primero que hacemos es descartar los separadores:

Texto##  ##dE    pRuebA
           ^
Ahora, como el caracter apuntado es una letra la ponemos a mayúsculas:

Texto##  ##DE    pRuebA
            ^
Las letras que siguen se ponen a minúsculas:

Texto##  ##De    pRuebA
             ^
Tercera iteración, se descartan los separadores:

Texto##  ##De    pRuebA
                 ^
El caracter es una letra, a mayúsculas:

Texto##  ##De    PRuebA
                  ^
Se vuelven a poner las letras siguientes en minúsculas.

Texto##  ##De    Prueba
                       ^
Como hemos alcanzado el final de la cadena, el algoritmo se detiene.
*/



/*****************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 20

/** \brief llama a fgets y arregla el problema de que toma salto de linea como parte de la cadena
 *
 * \param cadena char* la cadena de caracteres donde se alojara el dato ingresado por el usuario
 * \param longitud int la longitud maxima de la cadena
 * \return int devuelve 1 si funciono y 0 si no
 *
 */
int fixedGets(char * cadena, int longitud);


/** \brief le da formato al nombre y apellido
 *
 * \param cadena char* la cadena de caracteres con el nombre y apellido
 * \return int devuelve 1 si funciono y 0 si no
 *
 */
int formatearNombre(char * cadena);

/** \brief detecta si la cadena tiene letras, espacios y saltos, mientras respete la sintaxis
 *
 * \param cadena char* recibe la cadena a analizar
 * \return int devuelve 1 si la cadena es enteramente alfanumerica, 0 si no lo es
 *
 */
int esTexto(char * cadena);

int main()
{
    char nombre[TAM];
    char apellido[TAM];
    char nombreCompleto[TAM*2];

    printf("\nIngrese su nombre:\n");
    while(!fixedGets(nombre, TAM))
    {
        printf("\nError! Ingrese su nombre:\n");
    }

    printf("\nIngrese su apellido:\n");
    while (!fixedGets(apellido, TAM))
    {
        printf("\nError. Ingrese su apellido:\n");
    }

    strcpy(nombreCompleto, apellido);
    strcat(nombreCompleto, ", ");
    strcat(nombreCompleto, nombre);

    if (formatearNombre(nombreCompleto))
    {
        printf("\n%s", nombreCompleto);
    }
    return 0;
}


int fixedGets(char * cadena, int longitud)
{
    int allRight = 0;
    if (cadena != NULL && sizeof(cadena) > 0 && fgets(cadena, longitud, stdin) == cadena && cadena[0] != '\n' && esTexto(cadena))
    {
        fflush(stdin);
        if (cadena[strlen(cadena)-1] == '\n')
        {
            cadena[strlen(cadena)-1] = '\0';
        }
        allRight = 1;
    }
    return allRight;
}

int formatearNombre(char * cadena)
{
    int allRight = 0;
    if (cadena != NULL && sizeof(cadena) > 0) //mayuscula para el primer caracter si la necesita
    {
        if (cadena[0] >= 97 && cadena[0] <= 122)
        {
            cadena[0] -= 32;
        }
        for (int x = 1; x < strlen(cadena); x++)
        {
            if (cadena[x] >= 65 && cadena[x] <= 90) //minuscula para el caracter que la necesite
            {
                cadena[x] += 32;
            }
            if (x > 0)  //para no leer la posicion de memoria anterior a la cadena
            {
                if (cadena[x-1] == ' ')  //para darle mayuscula a iniciales de nombres o apellidos dobles que la necesiten
                {
                    if (cadena[x] >= 97 && cadena[x] <= 122)
                    {
                        cadena[x] -= 32;
                    }
                }
            }
        }
        allRight = 1;
    }
    return allRight;
}

int esTexto(char * cadena)
{
    int allRight = 0;
    if (cadena != NULL && sizeof(cadena) > 0)
    {
        allRight = 1;
        for (int x = 0; x < strlen(cadena); x++)
        {
            if (((cadena[x] < 65 || cadena[x] > 122) && cadena[x] != ' ' && cadena[x] != '\n') || cadena[0] == ' ' || cadena[strlen(cadena)-2] == ' ') //si no es texto incluyendo espacio y salto de linea, mientras que el espacio no este adelante o al final de la cadena
            {
                allRight = 0;
                break;
            }
            if (x > 0)  //evita leer fuera del rango de cadena
            {
                if (cadena[x - 1] == ' ' && cadena[x] == ' ')  //si hay por lo menos dos espacios consecutivos
                {
                    allRight = 0;
                    break;
                }
            }
        }
    }
    return allRight;
}


