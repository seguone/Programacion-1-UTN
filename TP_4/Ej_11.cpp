#include <iostream>
using namespace std;

int main()
{
    int num, maximoNeg,minimoPos;
    bool maxi=true, mini=true;

    cout << "Ingrese un numero: ";
    cin >> num;


    while(num!=0)
    {
    if(num>0){
        if(mini){
            minimoPos=num;
            mini=false;
        }
        else if(num<minimoPos){
            minimoPos=num;
        }
    }
    else if(maxi){
        maximoNeg=num;
        maxi=false;
    }
    else if(num>maximoNeg){
        maximoNeg=num;
    }

        cout << "Ingrese un numero: ";
        cin >> num;
    }
    cout << "MAXIMO NEGATIVO: " << maximoNeg << endl;
    cout << "MINIMO POSITIVO: " << minimoPos << endl;
    return 0;
}
