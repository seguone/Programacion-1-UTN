#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, n4;
    int apro4 = 0;
    int apro7 = 0;

    cout << "Ingrese 1ra NOTA: ";
    cin >> n1;
    cout << "Ingrese 2da NOTA: ";
    cin >> n2;
    cout << "Ingrese 3ra NOTA: ";
    cin >> n3;
    cout << "Ingrese 4ta NOTA: ";
    cin >> n4;

    // Contar notas >= 4 y >= 7
    if(n1 >= 4) apro4++;
    if(n2 >= 4) apro4++;
    if(n3 >= 4) apro4++;
    if(n4 >= 4) apro4++;

    if(n1 >= 7) apro7++;
    if(n2 >= 7) apro7++;
    if(n3 >= 7) apro7++;
    if(n4 >= 7) apro7++;

    // Lógica de condiciones
    if (apro7 == 4) {
        cout << "PROMOCIONA";
    } else if (apro4 >= 3) {
        cout << "RINDE EXAMEN FINAL";
    } else if (apro4 >= 1) {
        cout << "RECUPERA PARCIALES";
    } else {
        cout << "RECURSA LA MATERIA";
    }

    return 0;
}
