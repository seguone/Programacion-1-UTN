#include <iostream>
using namespace std;

int main() {
    int vec[10];
    int a, b, mayor, num_mayor, num_menor;
    bool maxi=false;

    // Cargar el vector
    for(int i = 0; i < 10; i++) {
        cout << "Ingrese un numero: ";
        cin >> vec[i];
    }

    cout << "Ingrese un numero para A: ";
    cin >> a;
    cout << "Ingrese un numero para B: ";
    cin >> b;

    if(a > b) {
        num_mayor = a;
        num_menor = b;
    }
    else{
        num_mayor = b;
        num_menor = a;

    }

    for(int i=a; i < b; i++){
        if(!maxi){
            mayor=vec[i];
            maxi=true;
        }
        else if(vec[i]>mayor){
            mayor = vec[i];
        }
    }

    cout << "MAYOR ENTRE " << a << " y " << b << " : " << mayor << endl;

    return 0;
}
