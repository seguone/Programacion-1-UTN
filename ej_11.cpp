#include <iostream>
using namespace std;

main(){
    int resto_dias, dias, resto_horas, horas, minutos;

    cout << "Ingrese la cantidad de minutos: ";
    cin >> minutos;

    resto_dias = minutos%1440;
    dias = (minutos-resto_dias)/1440;
    resto_horas = resto_dias % 60;
    horas = (resto_dias-resto_horas)/60;
    minutos = resto_horas%60;


    cout << "DIAS: " << dias << endl;
    cout << "HORAS: " << horas << endl;
    cout << "MINUTOS: " << minutos << endl;


    return 0;
}
