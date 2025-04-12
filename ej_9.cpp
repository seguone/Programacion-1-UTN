#include <iostream>
using namespace std;

main(){
    int hs, mi,m;

    cout << "Ingrese la cantidad de minutos y le diremos cuantas horas son: ";
    cin >> mi;

    hs=mi/60;
    m=mi%60;

    cout << mi << "min son " << hs << "hs y " << m << "min." << endl;


    return 0;
}
