#include <iostream>
using namespace std;

int main(){
    int vec[10];
    int acu=0;

    for(int i=0; i<10; i++){
        cout << "Ingrese un numero: ";
        cin >> vec[i];
    }
    for(int i=0; i<10; i++){
        acu+=vec[i];
    }

    cout << "La suma de todos los numeros es: " << acu << endl;

    return 0;
}
