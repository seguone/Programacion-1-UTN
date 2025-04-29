#include <iostream>
using namespace std;

int main() {
    int num, mayor, mayor2;
    bool primero = true;

    for (int i = 1; i <= 10; i++) {
        cout << "Ingrese un numero: ";
        cin >> num;

        if (i == 1) {
            mayor = num;
            mayor2 = num; // inicializamos con lo mismo, se corregirá después
        }
        else if (num > mayor) {

                mayor2 = mayor;
                mayor = num;
            }
        else if (num > mayor2 && num != mayor) {
                mayor2 = num;
            }

    }

        cout << "MAYOR: " << mayor << endl;
        cout << "SEGUNDO MAYOR (distinto): " << mayor2 << endl;


    return 0;
}
