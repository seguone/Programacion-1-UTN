#include <iostream>
using namespace std;

main(){
    int horas, valor_horas, sueldo;

    cout << "Ingrese las horas trabajadas: ";
    cin >> horas;
    cout << "Ingrese el valor por hora: ";
    cin >> valor_horas;

    sueldo=horas*valor_horas;

    cout << "su sueldo es de: " << sueldo << endl;

    return 0;
}
