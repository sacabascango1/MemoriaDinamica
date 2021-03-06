/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software
* AUTOR: Cabascango Abigail		                                  *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos                                    *
* NRC: 6396                                                       *
******************************************************************/
////////////////////////////////////////////////////////////////////////
// Name:       main(int argc, char *argv[])
// Purpose:    Ejecucion del programa, calcular MCD Y MCM de un vector y potencia de MATRICES
// Return:     int
////////////////////////////////////////////////////////////////////////

#include<iostream>
#include "OperacionVenctor.h"
#include "OperacionMatriz.h"
#include "IngresoDatos.h"
#include <stdio.h>

using namespace std;


void ingresarValoresVec(int* vector, int dim);
int dimensionarVec(int dim);
int dimensionarMatriz(int dim);
void ingresarValoresMat(int** matriz, int dim);


 int main(int argc, char *argv[])
 {
 	int dimension = 0;		
	cout<<"\n\nMATRICES DINAMICAS\n\n";
	Matrices objMatriz;
	dimension = dimensionarMatriz(dimension);
	 int ** matriz;
	matriz = objMatriz.segmentarMemoria(dimension);
	objMatriz.encerarMatriz(matriz, dimension);
		cout<< "\n\n Ingresar Valores de matriz:"<< endl;
	ingresarValoresMat(matriz,  dimension);
		IngresoDatos objIng;
	int potencia = atoi(objIng.ingresar("\nPotencia: ").c_str());
	cout <<"\n\n Matriz :"<< endl;
	objMatriz.imprimirMatriz(matriz, dimension);
	matriz = objMatriz.multiplicarMatriz(matriz, dimension, potencia);
	cout <<"\n\n Matriz elevada a "<< dimension<< ": "<< endl;
	objMatriz.imprimirMatriz(matriz, dimension);
	cout << " \ n \ n VECTORES DIAMICOS \ n \ n " ;
	Vectores objVec;
	dimension = dimensionarVec (dimensión);
	int * vec = new  int [dimensión];
	ingresarValoresVec (vec, dimensión);
	objVec. ordenarVector (vec, dimensión);
	objVec. imprimirVector (vec, dimensión);
	 objVec.calcMCD(vec,dimension);
	objVec. calcMCM (vec, dimensión);
	 
	
 	//cout<<"\nEjecucion exitosa";
 	delete(vec);
 	delete(matriz);
	return 0;
 }
 void ingresarValoresMat(int** matriz, int dim)
{

		IngresoDatos objIng;

	for(int i=0;i<dim;i++)
	{
		for(int j=0;j<dim;j++)
		{
			(*(*(matriz+i)+j)) =atoi(objIng.ingresar(i, j).c_str());
		}
	}
	
}
int dimensionarMatriz(int dim)
{
	IngresoDatos objIng;
	dim = atoi(objIng.ingresar().c_str());
	return dim;
}
void ingresarValoresVec(int *vector, int dim)
{
	IngresoDatos objIng;
	for (int i = 0; i < dim; i++){
		
		*(vector+i) = atoi(objIng.ingresar(i).c_str());	
	}
 	 
}
int dimensionarVec(int dim)
{
	IngresoDatos objIng;
	dim = atoi(objIng.ingresar().c_str());	
	return dim;
 } 
