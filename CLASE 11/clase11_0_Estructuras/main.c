#include <stdio.h>
#include <stdlib.h>

//struct{
//char nombre[20];
//int edad;
//char sexo;
//float sueldo;
//}eEmpleado;
typedef struct{
    int dia;
    int mes;
    int anio;
}eFecha;

typedef struct{
    int legajo;
    char nombre[20];
    int edad;
    char sexo;
    float sueldo;
    eFecha fechaIngreso;
}eEmpleado;

//recibe una estructura de e empleado
void mostrarEmpleado(eEmpleado unEmpleado);
int main()
{
    //struct eEmpleado empleado1;//tipo de variable struct eEmpleado + nombre de fantasia
    //inicializar

    eEmpleado emp1; //={11,"Lucia",24,'f',67500,{23,4,2021}};
    eEmpleado emp2;
    eFecha auxFecha;


    //emp2.legajo = emp1.legajo;
    //strcpy(emp2.nombre,emp1.nombre);
    //emp2.sexo....*//

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


   // printf("Ingrese fecha de ingreso dd/mm/aaa: INGRESE LAS BARRAS ");
    //scanf("%d/%d/%d",&emp1.fechaIngreso.dia,&emp1.fechaIngreso.mes,&emp1.fechaIngreso.anio);

  printf("Ingrese fecha de ingreso dd/mm/aaa: INGRESE LAS BARRAS ");
    scanf("%d/%d/%d",&auxFecha.dia,&auxFecha.mes,&auxFecha.anio);
/***/
emp1.fechaIngreso = auxFecha;

    printf("\nTAMANIO DE LA ESTRUCTURA %d\n",sizeof(eEmpleado));
      emp2 = emp1;



mostrarEmpleado(emp1);//paso la estructura por valor como si fuese un escalar, NO DEJA DE SER POR PARAMETRO.
mostrarEmpleado(emp2);
    return 0;
}
void mostrarEmpleado(eEmpleado unEmpleado)
{
    printf("\nNombre: %s %d %c %.2f %02d/%02d/%d\n",unEmpleado.nombre,
           unEmpleado.edad,unEmpleado.sexo,
           unEmpleado.sueldo,
           unEmpleado.fechaIngreso.dia,
           unEmpleado.fechaIngreso.mes,
           unEmpleado.fechaIngreso.anio
           );


}
