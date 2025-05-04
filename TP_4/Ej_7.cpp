#include <iostream>
using namespace std;

int main()
{
    int num, maximo;
    bool maxi;

    cout << "Ingrese un numero: ";
    cin >> num;


    while(num!=0)
    {
        if(maxi){
            maximo=num;
            maxi=false;
        }
        else if(num>maximo){
            maximo = num;
        }
        cout << "Ingrese un numero: ";
        cin >> num;
    }
    cout << "MAXIMO: " << maximo << endl;
    return 0;
}
