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
        if(maxi&&num%2==0){
            maximo=num;
            maxi=false;
        }
        else if(num>maximo&&num%2==0){
            maximo = num;
        }
        cout << "Ingrese un numero: ";
        cin >> num;
    }
    cout << "MAXIMO PAR: " << maximo << endl;
    return 0;
}
