#include <iostream>
using namespace std;

main()
{
    int num, monto, sueldo,maxi ,mini, promedio;
    bool primero=true;
    int acu=0, m50000=0;

    for (int i=1; i<=6; i++)
    {
        cout << "Ingrese el sueldo: ";
        cin >> monto;
        acu+=monto;
        if(monto>50000){
            m50000++;
        }
        if(primero){
            maxi = monto;
            mini = monto;
            primero=false;
        }
        else if(monto>maxi){
            maxi = monto;
        }
        else if(monto<mini){
            mini = monto;
        }
    }
    promedio = acu / 6;


    cout << "MAXIMO: " << maxi << endl;
    cout << "MINIMO: " << mini << endl;
    cout << "PROMEDIO: " << promedio << endl;
    cout << "MAYORES A $50.000: " << m50000 << endl;


    return 0;
}
