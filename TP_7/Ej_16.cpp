#include <iostream>
using namespace std;

int main() {
    int vec[10];
    bool repe = false;

    // Cargar el vector
    for(int i = 0; i < 10; i++) {
        cout << "Ingrese un numero: ";
        cin >> vec[i];
    }

    // Comparar cada elemento con todos los siguientes
    for(int i = 0; i < 9; i++) {
        for(int j = i + 1; j < 10; j++) {
            if(vec[i] == vec[j]) {
                repe = true;
                break; // Salimos del segundo for
            }
        }
        if(repe) break; // Salimos del primer for
    }

    if(repe){
        cout << "HAY REPETIDOS" << endl;
    } else {
        cout << "NO HAY REPETIDOS" << endl;
    }

    return 0;
}
