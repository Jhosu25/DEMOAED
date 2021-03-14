#include <iostream>
#include <fstream>
#include "heapsort.h"

using namespace std;
using namespace Algoritmo;

int main()
{
    ofstream archivo;
    archivo.open("HEAPSORT.txt",ios::app);
    int A[100],n;
    cout<<"Ingresa la cantidad de elementos del arreglo: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       cin >> A[i];
      HeapSort(A,n);
      archivo<<endl<<"Arreglo original:"<<endl<<A[i]<<endl;

    }

    cout<<"El orden es:";
    for(int i=1;i<=n;i++)
    {
      cout<<A[i];
      archivo<<endl<<"Arreglo ordenado es:"<<endl<<A[i];

    }
    archivo.close();


    return 0;
}
