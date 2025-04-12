#include <iostream>
using namespace std;

main(){
    float imp, d, t;

    cout << "Ingrese el importe del producto: ";
    cin >> imp;
    cout << "Ingrese el porcentaje a descontar: ";
    cin >> d;

    t=imp-(d*imp/100);

    cout << "El importe a pagar con el descuento incluido es: " << t << "$" << endl;


    return 0;
}
