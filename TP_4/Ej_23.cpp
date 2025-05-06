#include <iostream>
using namespace std;

int main()
{
    int num;
    int contPar=0;
    int contTerNeg=0;
    int contNeg=0;


    do
    {
        cout << "Ingrese un numero: ";
        cin >> num;


    }
    while(num%7!=0);


    return 0;
}
