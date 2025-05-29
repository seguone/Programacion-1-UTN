#include <iostream>
using namespace std;

void esDia(int n, string &dia);

main(){
    int num;
    string dia;

    cout << "Ingrese un numero: ";
    cin >> num;

    esDia(num, dia);

    cout << "EL DIA ES: " << dia << endl;

    return 0;
}

void esDia(int n, string &dia){
    switch(n){
    case 0:
        dia="Domingo";
        break;
    case 1:
        dia="Lunes";
        break;
    case 2:
        dia="Martes";
        break;
    case 3:
        dia="Miercoles";
        break;
    case 4:
        dia="Jueves";
        break;
    case 5:
        dia="Viernes";
        break;
    case 6:
        dia="Sabado";
        break;
    }
}
