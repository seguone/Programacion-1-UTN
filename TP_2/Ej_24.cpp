#include <iostream>
using namespace std;

int main() {
    int mes, trimestre;

    cout << "Ingrese el n�mero de mes (1 a 12): ";
    cin >> mes;

    if (mes >= 1 && mes <= 12) {
        trimestre = (mes + 2) / 3;
        cout << "Corresponde al Trimestre " << trimestre << endl;
    } else {
        cout << "N�mero de mes inv�lido." << endl;
    }

    return 0;
}
