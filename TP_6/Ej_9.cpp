#include <iostream>
using namespace std;

bool esPerfecto(int n);

main(){
    int num, contP=0;

    cout << "Ingrese un numero: ";
    cin >> num;
    while(num!=0){
    if(esPerfecto(num)){
        contP++;
    }
    cout << "Ingrese un numero: ";
    cin >> num;
    }
    cout << "CANTIDAD DE NUMEROS PERFECTOS: " << contP << endl;
    return 0;
}

bool esPerfecto(int n){
    int acuDiv=0;
    for(int i=1; i<n; i++){
        if(n%i==0){
            acuDiv+=i;
        }
    }
    if(acuDiv==n){
        return true;
    }
    return false;
}
