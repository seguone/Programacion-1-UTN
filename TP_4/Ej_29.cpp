#include <iostream>
using namespace std;

int main() {
    int opcion;
    float metros, cm, km, pulgada, pies;
    bool funciona=true;

    while (funciona==true) {
    cout << "MENU PRINCIPAL" << endl;
    cout << "---------------------------" << endl;
    cout << "1 - Ingrese medida en metros" << endl;
    cout << "2 - Convertir a centimetros" << endl;
    cout << "3 - Convertir a kilometros" << endl;
    cout << "4 - Convertir a pulgadas" << endl;
    cout << "5 - Convertir a pies" << endl;
    cout << "---------------------------" << endl;
    cout << "0 - Salir del programa" << endl;
    cout << endl;
    cout << "Ingrese opcion: ";
    cin >> opcion;

    switch(opcion){
    case 1:
        system("cls");
        cout << "Ingrese medida en metros: ";
        cin >> metros;
        break;
    case 2:
        system("cls");
        cm = metros*100;
        cout << "LA MEDIDA EN CENTIMETROS ES: " << cm << " cm" << endl;
        system("pause");
        break;
    case 3:
        system("cls");
        km = metros/1000;
        cout << "LA MEDIDA EN KILOMETROS ES: " << km << " km" << endl;
        system("pause");
        break;
    case 4:
        system("cls");
        pulgada = metros*39.3701;
        cout << "LA MEDIDA EN PULGADAS ES: " << pulgada << " pulgadas" << endl;
        system("pause");
        break;
    case 5:
        system("cls");
        pies = metros*3.28084;
        cout << "LA MEDIDA EN PULGADAS ES: " << pies << " pies" << endl;
        system("pause");
        break;
    case 0:
        system("cls");
        cout << "ESTA SALIENDO DEL PROGRAMA; GRACIAS POR SU VISITA" << endl;
        funciona = false;
        system("pause");
        break;
    }
    system("cls");
    }

    return 0;
}
