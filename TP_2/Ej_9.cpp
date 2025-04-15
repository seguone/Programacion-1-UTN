#include <iostream>
using namespace std;

main(){
    int n1, n2, n3, maxi;

    cout << "Ingrese un numero: ";
    cin >> n1;
    cout << "Ingrese un numero: ";
    cin >> n2;
    cout << "Ingrese un numero: ";
    cin >> n3;

    if(n1>n2){
        if(n1>n3){
            maxi=n1;
        }
        else{
            maxi=n3;
        }
    }
    else if(n2>n3){
        maxi=n2;
    }
    else{
        maxi=n3;
    }

    cout << "MAXIMO: " << maxi << endl;
    return 0;
}
