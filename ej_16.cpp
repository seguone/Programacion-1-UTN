#include <iostream>
using namespace std;

main(){
    int fra, frascos, miliBeta, miliMici, miliAci;

    cout << "Ingrese cantidad de Frascos pedidos: ";
    cin >> fra;

    frascos= fra*75;
    miliBeta = frascos * 45;
    miliMici = frascos * 2;
    miliAci = frascos * 7;

    cout << "Cantidad de Betamol: " << miliBeta << "mg" <<endl;
    cout << "Cantidad de Micilina: " << miliMici << "grs" <<endl;
    cout << "Cantidad de Acido Sinitico: " << miliAci << "mg" <<endl;


    return 0;
}
