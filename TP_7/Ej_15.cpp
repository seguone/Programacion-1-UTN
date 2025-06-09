#include <iostream>
using namespace std;

int main() {
    int vn[5];
    float vnpr[9];

    // Inicializar vector vnpr en 0
    for(int i = 0; i < 9; i++) {
        vnpr[i] = 0;
    }

    // Leer los 5 valores del vector vn
    for(int x = 0; x < 5; x++) {
        cout << "Ingrese un numero: ";
        cin >> vn[x];
    }

    // Intercalar valores y promedios en vnpr
    for(int i = 0; i < 5; i++) {
        vnpr[i * 2] = vn[i];
        if(i < 4) {
            float pr = (vn[i] + vn[i + 1]) / 2.0;
            vnpr[(i * 2) + 1] = pr;
        }
    }

    // Mostrar el vector resultante
    cout << "Vector intercalado:" << endl;
    for(int z = 0; z < 9; z++) {
        cout << vnpr[z] << " ";
    }
    cout << endl;

    return 0;
}
