#include <iostream>
using namespace std;

int main() {
    int asistentes;
    int capacidadPorAula = 60;
    int aulasNecesarias = 0;

    cout << "Ingrese la cantidad de asistentes: ";
    cin >> asistentes;

    while (asistentes > 0 && aulasNecesarias < 10) {
        asistentes -= capacidadPorAula;
        aulasNecesarias++;
    }

    if (asistentes > 0) {
        cout << "No hay suficientes aulas disponibles." << endl;
    } else {
        cout << "Se necesitan " << aulasNecesarias << " aulas." << endl;
    }

    return 0;
}
