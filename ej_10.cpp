#include <iostream>
using namespace std;

main(){
    int d, hs, hse;

    cout << "Ingrese la cantidad de horas y le diremos cuantos dias son: ";
    cin >> hs;

    d=hs/24;
    hse=hs%24;

    cout << hs << "hs son " << d << " dias y " << hse << "hs." << endl;


    return 0;
}
