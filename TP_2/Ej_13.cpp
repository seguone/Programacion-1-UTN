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

    if(n1<n2 && n1<n3){
        menor = n1;
        if(n2<n3){
            medio = n2;
            mayor = n3;
        }
        else{
            medio = n3;
            mayor = n2;
        }
    }
    if(n2<n1 && n2<n3){
        menor = n2;
        if(n1<n3){
            medio = n1;
            mayor = n3;
        }
        else{
            medio = n3;
            mayor = n1;
        }
    }
    if(n3<n1 && n3<n2){
        menor = n3;
        if(n2<n1){
            medio = n2;
            mayor = n1;
        }
        else{
            medio = n1;
            mayor = n2;
        }
    }


    cout << "MENOR: " << menor << endl;
    cout << "MEDIO: " << medio << endl;
    cout << "MAYOR: " << mayor << endl;
    return 0;
}
