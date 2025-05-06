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
            anteultimoImpar = ultimoImpar;  // el �ltimo pasa a ser ante�ltimo
            ultimoImpar = num;
            hayImpar = true;  // se encontr� al menos un impar
        }

    } while (num % 7 != 0);

    if (!hayImpar) {
        cout << "No se ingresaron n�meros impares." << endl;
    }
    else if (anteultimoImpar == 0 && ultimoImpar != 0) {
        cout << "Se ingres� solo un n�mero impar: " << ultimoImpar << endl;
        cout << "No hay ante�ltimo n�mero impar." << endl;
    }
    else {
        cout << "Ante�ltimo n�mero impar: " << anteultimoImpar << endl;
        cout << "�ltimo n�mero impar: " << ultimoImpar << endl;
    }

    return 0;
}
