#include <iostream>
#include "QUICKSORT.h"
#include "opreaciones.h"

using namespace std;
using namespace ordenamiento;
using namespace SR;

int main()
{
    int A[10]={88, -6, 69, -33, 98, 7, 23, -5, 0, 100};

    for (int i=0; i<10; i++)
    {
        cout<<"|"<<A[i]<<"|";
    }
    cout<<endl;

    ordenar(A,0,9);

    for (int i=0; i<10; i++)
    {
        cout<<"|"<<A[i]<<"|";
    }

    //count<<mitad(A,0,9);

    cout<<suma(3,6);

    return 0;
}


