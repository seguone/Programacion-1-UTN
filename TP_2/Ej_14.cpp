#include <iostream>
using namespace std;

main(){
    int dia, mes, anio;
    int diaN, mesN, anioN;
    int edad;

    cout << "Ingrese dia de nacimimento: ";
    cin >> diaN;
    cout << "Ingrese mes de Nacimiento: ";
    cin >> mesN;
    cout << "Ingrese anio de Nacimiento: ";
    cin >> anioN;
    cout << "Ingrese dia Actual: ";
    cin >> dia;
    cout << "Ingrese mes Actual: ";
    cin >> mes;
    cout << "Ingrese anio Actual: ";
    cin >> anio;

    edad = anio-anioN;

    if(mes < mesN){
        edad--;
    }
    else if(mes==mesN){
        if(dia<diaN){
        edad--;
        }
    }

     cout << "EDAD: " << edad << endl;

    return 0;
}
