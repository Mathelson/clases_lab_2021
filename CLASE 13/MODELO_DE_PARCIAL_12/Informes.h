#ifndef INFORMES_H_INCLUDED
#define INFORMES_H_INCLUDED


int info_imprimirPantallasContratadasByCuit(Contratacion* arrayContrataciones,int limiteContrataciones,Pantalla* arrayPantallas,int limitePantallas,char* auxiliarCuit);
int info_imprimirContratacionesConImporte(Contratacion* arrayContrataciones,int limiteContrataciones,Pantalla* arrayPantallas,int limitePantallas,char* auxiliarCuit);
int info_imprimirContratacionesConImportePorCliente(Contratacion* arrayContrataciones,int limiteContrataciones,Pantalla* arrayPantallas,int limitePantallas);
int info_calcularDeudaCliente(Contratacion* arrayContrataciones,int limiteContrataciones,Pantalla* arrayPantallas,int limitePantallas,char* auxiliarCuit, float* deuda);

#endif // INFORMES_H_INCLUDED
