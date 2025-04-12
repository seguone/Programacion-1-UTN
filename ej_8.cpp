#include <iostream>
using namespace std;

main(){
    float imp, impdes, des;

    cout << "Ingrese el importe del producto: ";
    cin >> imp;
    cout << "Ingrese el importe con descuento: ";
    cin >> impdes;

    des=100-(impdes*100/imp);

    cout << "El descuento fue de: " << des << "%" << endl;


    return 0;
}
