#include <iostream>
using namespace std;

main(){
    int num1, num2;

    cout << "Ingrese un numero: ";
    cin >> num1;
    cout << "Ingrese otro numero: ";
    cin >> num2;

    if(num1%num2==0){
       cout << "el primer numero es multiplo del segundo";
    }
    else{
        cout << "NO ES MULTIPLO";
    }

    return 0;
}
