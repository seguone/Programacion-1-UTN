#include <iostream>
using namespace std;

int main() {
    int mes, bimestre;

    cout << "Ingrese el n�mero de mes (1 a 12): ";
    cin >> mes;

    if (mes >= 1 && mes <= 12) {
        bimestre = (mes + 1) / 2;
        cout << "Corresponde al Bimestre " << bimestre << endl;
    } else {
        cout << "N�mero de mes inv�lido." << endl;
    }

    return 0;
}
