#include <iostream>
using namespace std;

int main() {
    int num;
    int ultimoImpar = 0;    // inicializo en 0 por si no se ingresan impares
    int anteultimoImpar = 0;
    bool hayImpar = false;  // bandera para verificar si hubo al menos un impar

    do {
        cout << "Ingrese un numero: ";
        cin >> num;

        if (num % 2 != 0) {
            anteultimoImpar = ultimoImpar;  // el último pasa a ser anteúltimo
            ultimoImpar = num;
            hayImpar = true;  // se encontró al menos un impar
        }

    } while (num % 7 != 0);

    if (!hayImpar) {
        cout << "No se ingresaron números impares." << endl;
    }
    else if (anteultimoImpar == 0 && ultimoImpar != 0) {
        cout << "Se ingresó solo un número impar: " << ultimoImpar << endl;
        cout << "No hay anteúltimo número impar." << endl;
    }
    else {
        cout << "Anteúltimo número impar: " << anteultimoImpar << endl;
        cout << "Último número impar: " << ultimoImpar << endl;
    }

    return 0;
}
