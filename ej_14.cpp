#include <iostream>
using namespace std;

main(){
    int imp, des, conDescuento, descuento, t;

    cout << "Ingrese el importe: ";
    cin >> imp;
    cout << "Ingrese el descuento: ";
    cin >> des;

    descuento=des*imp/100;
    t=imp-descuento;

    cout << "El importe es: " << imp << endl;
    cout << "El descuento es: " << descuento << endl;
    cout << "El total es: " << t << endl;


    return 0;
}
