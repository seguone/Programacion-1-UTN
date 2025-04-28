#include <iostream>
using namespace std;

main()
{
    int num, monto, sueldo, legajo;
    bool primero=true;

    for (int i=1; i<=3; i++)
    {
        cout << "Ingrese el legajo: ";
        cin >> num;
        cout << "Ingrese el sueldo: ";
        cin >> monto;
        cout << " ******************** " << endl;

        if(primero){
            legajo = num;
            sueldo = monto;
            primero=false;
        }
        else if(monto>sueldo){
            legajo = num;
            sueldo = monto;
        }
    }


    cout << "LEGAJO: " << legajo << endl;
    cout << "SUELDO: " << sueldo << endl;


    return 0;
}
