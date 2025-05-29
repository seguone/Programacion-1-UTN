#include <iostream>
using namespace std;

int redondear(float n);

main(){
    float num;
    int r;

    cout << "Ingrese un numero: ";
    cin >> num;

    r=redondear(num);

    cout << "EL NUMERO REDONDEADO ES: " << r << endl;

    return 0;
}

int redondear(float n){
    int parte_entera = n;
    float resto = n - parte_entera;
    if(resto >= 0.5){
        return n+1;
    }
    return n;
}
