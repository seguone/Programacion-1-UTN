#include <iostream>
using namespace std;

int main()
{
    int num, maximo,minimo;
    bool maxi;

    cout << "Ingrese un numero: ";
    cin >> num;


    while(num!=0)
    {
        if(maxi){
            maximo=num;
            minimo=num;
            maxi=false;
        }
        else if(num>maximo){
            maximo = num;
        }
        else if(num<minimo){
            minimo = num;
        }
        cout << "Ingrese un numero: ";
        cin >> num;
    }
    cout << "MAXIMO: " << maximo << endl;
    cout << "MINIMO: " << minimo << endl;
    return 0;
}
