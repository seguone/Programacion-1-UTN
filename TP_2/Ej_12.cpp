#include <iostream>
using namespace std;

main(){
    int n1, n2, n3;
    int menor, medio, mayor;

    cout << "Ingrese un numero: ";
    cin >> n1;
    cout << "Ingrese un numero: ";
    cin >> n2;
    cout << "Ingrese un numero: ";
    cin >> n3;

    if ((n1>n3 && n1<n2)||(n1>n2&&n1<n3)){
        medio = n1;
    }
    if ((n2>n1 && n2<n3)||(n2>n3&&n2<n1)){
        medio = n2;
    }
    if ((n3>n1 && n3<n2)||(n3>n2&&n3<n1)){
        medio = n3;
    }

//    cout << "MENOR: " << menor << endl;
    cout << "MEDIO: " << medio << endl;
//    cout << "MAYOR: " << mayor << endl;
    return 0;
}
