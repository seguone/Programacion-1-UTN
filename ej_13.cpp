#include <iostream>
using namespace std;

main(){
    int dinero, b1000, b500, b200, b100;
    int r1000, r500, r200, r100;

    cout << "Ingrese la cantidad a estraer: ";
    cin >> dinero;

    r1000=dinero%1000;
    b1000=(dinero-r1000)/1000;
    r500=r1000%500;
    b500=(r1000-r500)/500;
    r200=r500%200;
    b200=(r500-r200)/200;
    b100=r200/100;

    cout << "1000: " << b1000 << endl;
    cout << "500: " << b500 << endl;
    cout << "200: " << b200 << endl;
    cout << "100: " << b100 << endl;
    return 0;
}
