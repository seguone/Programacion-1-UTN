#include <iostream>
using namespace std;

int main(){
    int num, mayor1, mayor2;
    bool primer=true;

    cout << "Ingrese un numero: ";
    cin >> num;


    while(num!=0){
        if(primer){
            mayor1=num;
            mayor2=num;
            primer=false;
        }
        else if(num>mayor1){
            mayor2=mayor1;
            mayor1=num;
        }
        cout << "Ingrese un numero: ";
        cin >> num;
    }


    cout << "MAYOR 1: "<< mayor1 << endl;
    cout << "MAYOR 2: "<< mayor2 << endl;
    return 0;
}
