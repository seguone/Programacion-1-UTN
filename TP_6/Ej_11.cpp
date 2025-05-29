#include <iostream>
using namespace std;

int contarDigitos(int n);

main(){
    int num, r;

    cout << "Ingrese un numero: ";
    cin >> num;
    r = contarDigitos(num);

    cout << "CANTIDAD DE DIGITOS: "<< r << endl;

    return 0;
}

int contarDigitos(int n){
     int contador=0;
     while (n > 0) {
        n = n / 10;
        contador++;
    }
    return contador;
}
