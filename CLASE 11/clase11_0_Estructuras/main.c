#include <stdio.h>
#include <stdlib.h>

//struct{
//char nombre[20];
//int edad;
//char sexo;
//float sueldo;
//}eEmpleado;

typedef struct{
int legajo;
char nombre[20];
int edad;
char sexo;
float sueldo;
}eEmpleado;

//recibe una estructura de e empleado
void mostrarEmpleado(eEmpleado unEmpleado);
int main()
{
    //struct eEmpleado empleado1;//tipo de variable struct eEmpleado + nombre de fantasia
    //inicializar
    eEmpleado emp1; //={"Lucia",24,'f',67500};

    printf("Ingrese legajo");
    fflush(stdin);
    scanf("%d",&emp1.legajo);

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(emp1.nombre);

    printf("Ingrese edad: ");
    scanf("%d",&emp1.edad);

    printf("Ingrese sexo");
    fflush(stdin);
    scanf("%c",&emp1.sexo);

    printf("SUeldo");
     fflush(stdin);
    scanf("%f",&emp1.sueldo);


mostrarEmpleado(emp1);//paso la estructura por valor como si fuese un escalar, NO DEJA DE SER POR PARAMETRO.

    return 0;
}
void mostrarEmpleado(eEmpleado unEmpleado)
{
    printf("Nombre: %s %d %c %f",unEmpleado.nombre,unEmpleado.edad,unEmpleado.sexo,unEmpleado.sueldo);


}
