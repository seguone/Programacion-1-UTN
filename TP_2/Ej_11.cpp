#include <iostream>
using namespace std;

main(){
    int n1, n2, n3, n4, n5, maxi, mini;

    cout << "Ingrese un numero: ";
    cin >> n1;
    cout << "Ingrese un numero: ";
    cin >> n2;
    cout << "Ingrese un numero: ";
    cin >> n3;
    cout << "Ingrese un numero: ";
    cin >> n4;
    cout << "Ingrese un numero: ";
    cin >> n5;

    if(n1>n2){
        maxi=n1;
        mini=n2;
    }
    else{
        maxi=n2;
        mini=n1;
    }
    if(n3>maxi){
        maxi=n3;
    }
    else if(n3<mini){
        mini=n3;
    }
    if(n4>maxi){
        maxi=n4;
    }
    else if(n4<mini){
        mini=n4;
    }
    if(n5>maxi){
        maxi=n5;
    }
    else if(n5<mini){
        mini=n5;
    }
    cout << "MAXIMO: " << maxi << endl;
    cout << "MANIMO: " << mini << endl;
    return 0;
}
