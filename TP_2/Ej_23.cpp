#include <iostream>
using namespace std;

int main() {
    int mes, bimestre;

    cout << "Ingrese el número de mes (1 a 12): ";
    cin >> mes;

    if (mes >= 1 && mes <= 12) {
        bimestre = (mes + 1) / 2;
        cout << "Corresponde al Bimestre " << bimestre << endl;
    } else {
        cout << "Número de mes inválido." << endl;
    }

    return 0;
}
