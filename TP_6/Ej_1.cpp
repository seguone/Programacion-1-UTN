#include <iostream>
using namespace std;

bool esPar(int n);

main(){
    int num;
    bool par=true;

    cout << "Ingrese un numero: ";
    cin >> num;

    par=esPar(num);

    if(par){
        cout << "ES PAR" << endl;
    }
    else{
        cout << "NO ES PAR" << endl;
    }

    return 0;
}

bool esPar(int n){
    if(n%2==0){
        return true;
    }
    return false;
}
