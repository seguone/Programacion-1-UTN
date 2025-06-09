#include <iostream>
using namespace std;

int main() {
    int vec[10];
    int vec0[10];

    // Cargar el vector
    for(int i = 0; i < 10; i++) {
        cout << "Ingrese un numero: ";
        cin >> vec[i];
    }

    // Buscar y marcar repetidos
    for(int i = 0; i < 10; i++) {
        bool repetido = false;
        for(int j = 0; j < 10; j++) {
            if(i != j && vec[i] == vec[j]) {
                repetido = true;
                break;
            }
        }
        if(repetido) {
            vec0[i] = 0;
        } else {
            vec0[i] = vec[i];
        }
    }

    // Mostrar resultado
    cout << "Vector con ceros en repetidos: ";
    for(int i = 0; i < 10; i++) {
        cout << vec0[i] << " ";
    }

    return 0;
}
