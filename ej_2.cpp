#include <iostream>
using namespace std;

main(){
    int n1, n2,n3;
    int r;
    cout << "Ingrese un numero: ";
    cin >> n1;
    cout << "Ingrese otro numero: ";
    cin >> n2;

    n3=n1;
    n1=n2;
    n2=n3;

    cout << n1 << endl;
    cout << n2 << endl;


    return 0;
}
