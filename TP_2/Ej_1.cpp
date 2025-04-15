#include <iostream>
using namespace std;

main(){
    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    if(num > 0){
        cout << "POSITIVO";
    }
    else if (num < 0){
        cout << "NEGATIVO";
    }
    else{
        cout << "CERO";
    }

    return 0;
}
