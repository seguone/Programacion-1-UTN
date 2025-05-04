#include <iostream>
using namespace std;

int main(){
    int num, igual, mayor;
    bool primer=true;

    cout << "Ingrese un numero: ";
    cin >> num;


    while(num!=igual){
        if(primer){
            mayor=num;
            primer=false;
        }
        else if(num>mayor){
            mayor=num;

        }
        igual=num;
        cout << "Ingrese un numero: ";
        cin >> num;
    }


    cout << "MAYOR: "<< mayor << endl;
    return 0;
}
