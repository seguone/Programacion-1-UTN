#include <iostream>
using namespace std;

main(){
    int a, b, c, t;
    float pa, pb, pc;

    cout << "Ingrese cantidad de alfajores A: ";
    cin >> a;
    cout << "Ingrese cantidad de alfajores B: ";
    cin >> b;
    cout << "Ingrese cantidad de alfajores C: ";
    cin >> c;

    t = a+b+c;
    pa = (float)a*100/t;
    pb = (float)b*100/t;
    pc = (float)c*100/t;

    cout << "El porcentaje de alfajores vendidos de A es: " << pa << "%" << endl;
    cout << "El porcentaje de alfajores vendidos de B es: " << pb << "%" << endl;
    cout << "El porcentaje de alfajores vendidos de C es: " << pc << "%" << endl;
    return 0;
}
