#include <iostream>
using namespace std;

int main()
{
    int num, maximo;
    bool maxi;
    int pos=1, posicion;

    cout << "Ingrese un numero: ";
    cin >> num;


    while(num!=0)
    {
        if(maxi){
            maximo=num;
            posicion=pos;
            maxi=false;
        }
        else if(num>maximo){
            maximo = num;
            posicion=pos;
        }
        pos++;
        cout << "Ingrese un numero: ";
        cin >> num;
    }
    cout << "MAXIMO: " << maximo << endl;
    cout << "POSICION: " << posicion << endl;
    return 0;
}
