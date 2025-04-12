#include <iostream>
using namespace std;

main(){
    int h, c, s, t;

    cout << "Ingrese la cantidad de huevos: ";
    cin >> h;

    c=h/12;
    s=h%12;
    t=c*1000+s*120;

    cout << "total: " << t << endl;
    return 0;
}
