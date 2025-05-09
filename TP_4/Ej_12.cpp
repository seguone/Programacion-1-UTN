#include <iostream>
using namespace std;

int main()
{
    int num, pri, segu;
    bool primer=true, segundo=true;

    cout << "Ingrese un numero: ";
    cin >> num;


    while(num!=0)
    {
    if(num%2!=0){
        if(primer){
            pri=num;
            primer=false;
        }
        else if(segundo){
            segu=num;
            segundo=false;
        }
    }

        cout << "Ingrese un numero: ";
        cin >> num;
    }
    cout << "PRIMERO: " << pri << endl;
    cout << "SEGUNDO: " << segu << endl;
    return 0;
}
