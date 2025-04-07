#include <iostream>
using namespace std;

main(){
    int autos_vendidos, sueldo;

    cout << "Ingrese cantidad de autos vendidos: ";
    cin >> autos_vendidos;

    sueldo=autos_vendidos*700+5000;

    cout << "El sueldo es de: " << sueldo << endl;

    return 0;
}
