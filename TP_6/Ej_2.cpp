#include <iostream>
using namespace std;

int esMaximo(int n1, int n2);

main(){
    int num1, num2, maximo;

    cout << "Ingrese un numero: ";
    cin >> num1;
    cout << "Ingrese otro numero: ";
    cin >> num2;

    maximo=esMaximo(num1, num2);

    cout << "MAXIMO: " << maximo << endl;

    return 0;
}

int esMaximo(int n1, int n2){
    if(n1 > n2){
        return n1;
    }
    return n2;
}
