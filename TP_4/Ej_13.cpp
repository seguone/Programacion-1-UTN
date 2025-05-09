#include <iostream>
using namespace std;

int main()
{
    int num, pri, ulti;
    bool primer=true;

    cout << "Ingrese un numero: ";
    cin >> num;


    while(num!=0)
    {
    if(num%2!=0){
        if(primer){
            pri=num;
            primer=false;
        }
        ulti=num;
    }

        cout << "Ingrese un numero: ";
        cin >> num;
    }
    cout << "PRIMER NUMERO IMPAR: " << pri << endl;
    cout << "ULTIMO NUMERO IMPAR: " << ulti << endl;
    return 0;
}
