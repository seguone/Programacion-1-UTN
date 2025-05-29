#include <iostream>
using namespace std;

bool esBisiesto(int n);

main(){
    int num;
    bool bi=true;
    cout << "Ingrese un numero: ";
    cin >> num;

    bi = esBisiesto(num);

    if(bi){
        cout << "ES BISIESTO" << endl;
    }
    else{
        cout << "NO ES BISIESTO" << endl;
    }

    return 0;
}

bool esBisiesto(int n){
    if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)){
            return true;
    }
    return false;
}
