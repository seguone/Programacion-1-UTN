#include <iostream>
using namespace std;

main(){
    int n1, n2, n3;

    cout << "Ingrese un numero: ";
    cin >> n1;
    cout << "Ingrese un numero: ";
    cin >> n2;
    cout << "Ingrese un numero: ";
    cin >> n3;

    if(n1==n2 and n2==n3){
        cout << "EQUILATERO";
    }
    else if(n1!=n2 and n2!=n3){
        cout << "ESCALENO";
    }
    else{
        cout << "ISOSCELES";
    }

    return 0;
}
