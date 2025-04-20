#include <iostream>
using namespace std;

int main()
{
    int kw, total;
    int exc0, exc100, exc200;

    cout << "Ingrese los Kw consumidos: ";
    cin >> kw;

    if(kw > 200){
        exc200 = kw - 200;
        exc100 = 100;
        exc0 = 100;
    }
    else if(kw<100){
        exc200 = 0;
        exc100 = kw - 100;
        exc0 = 100;
    }
    else{
        exc200 = 0;
        exc100 = 0;
        exc0 = kw;
    }

    total = exc200*15 + exc100*12 + exc0*10;

    cout << "Su total a pagar es de: " << total << endl;

    return 0;
}
