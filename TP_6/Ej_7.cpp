#include <iostream>
using namespace std;

int esMaximoAbsoluto(int n1,int n2);

main(){
    int num1, num2, r;

    cout << "Ingrese un numero: ";
    cin >> num1;
    cout << "Ingrese un numero: ";
    cin >> num2;

    r = esMaximoAbsoluto(num1, num2);

    cout << "MAXIMO ABSOLUTO: " << r << endl;

    return 0;
}

int esMaximoAbsoluto(int n1,int n2){
    if(n1<0){
        n1*=-1;
    }
    if(n2<0){
        n2*=-1;
    }
    if(n1>n2){
        return n1;
    }
    return n2;
}
