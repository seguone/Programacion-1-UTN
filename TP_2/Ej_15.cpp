#include <iostream>
using namespace std;

main()
{
    int anio;

    cout << "Ingrese un anio: ";
    cin >> anio;

    if (anio % 4 == 0)
    {
        if (anio % 100 == 0)
        {
            if (anio % 400 == 0)
            {
                cout << "BISIESTO";
            }
            else
            {
                cout << "NO ES BISIESTO";
            }
        }
        else
        {
            cout << "BISIESTO";
        }
    }
    else
    {
        cout << "NO ES BISIESTO";
    }
    return 0;
}
