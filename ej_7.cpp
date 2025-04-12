#include <iostream>
using namespace std;

main(){
    int s1, s2, s3, s4, t;
    float pro, ps1, ps2, ps3, ps4;

    cout << "Ingrese monton recaudado en la 1°semana: ";
    cin >> s1;
    cout << "Ingrese monton recaudado en la 2°semana: ";
    cin >> s2;
    cout << "Ingrese monton recaudado en la 3°semana: ";
    cin >> s3;
    cout << "Ingrese monton recaudado en la 3°semana: ";
    cin >> s4;

    t = s1+s2+s3+s4;
    pro= t/4;
    ps1 = (float)s1*100/t;
    ps2 = (float)s2*100/t;
    ps3 = (float)s3*100/t;
    ps4 = (float)s4*100/t;

    cout << "El promedio recaudado de las 4 semanas es: " << pro << "%" << endl;
    cout << "El porcentaje del monton recaudado en la 1°semana es: " << ps1 << "%" << endl;
    cout << "El porcentaje del monton recaudado en la 2°semana es: " << ps2 << "%" << endl;
    cout << "El porcentaje del monton recaudado en la 3°semana es: " << ps3 << "%" << endl;
    cout << "El porcentaje del monton recaudado en la 4°semana es: " << ps4 << "%" << endl;

    return 0;
}
