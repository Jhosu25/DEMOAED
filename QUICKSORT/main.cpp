#include <iostream>
#include <fstream>
//Libreria Implementada
#include "QUICKSORT.h"

using namespace std;
using namespace ordenamiento;

int main()
{
    ofstream archivo;
    archivo.open("Quicksort.txt", ios::app);

    int A[10]={88, -6, 69, -33, 98, 7, 23, -5, 0, 100};

    for (int i=0; i<10; i++)
    {
        archivo<<"|"<<A[i]<<"|";
    }
    archivo<<endl;

    ordenar(A,0,9);

    for (int i=0; i<10; i++)
    {
        archivo<<"|"<<A[i]<<"|";
    }
    cout<<"Revisar el archivo creado";
    return 0;
}

