/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos                                    *
* NRC: 6396                                                       *
******************************************************************/
/***********************************************************************
 * Module:  main
 * Author:  Carlos Romero - Abigail Cabascango
 * Modified: viernes, 5 de junio de 2020 17:51:04
 * Purpose: Ejecutar el programa
 ***********************************************************************/
// MatrixApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Matrix.h"
#include "InputData.h"
#include "OperationMatrix.h"

using namespace std;

int main() {
    int dimension;
    InputData<int> enter;

    do {
        dimension = atoi(enter.integer("Ingrese la dimension: ").c_str());
    } while (dimension > 5);

    Matrix<double> matrix(dimension);

    int times;
    do {
        times = atoi(enter.integer("Ingrese el numero de veces que desea multiplicar: ").c_str());
    } while (times > 7);

    OperationMatrix<double> operation;
    
    matrix.fill();
    matrix.print();
    operation.multiplySameMatrix(matrix, times).print();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
