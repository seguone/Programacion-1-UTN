#include <iostream>
using namespace std;

main(){
    int num1, num2;
    int menor, mayor;

    cout << "Ingrese un numero: ";
    cin >> num1;
    cout << "Ingrese otro numero: ";
    cin >> num2;

    if(num1 > num2){
        mayor=num1;
        menor=num2;
    }
    else{
        mayor=num2;
        menor=num1;
    }

    for(int i=menor; i<=mayor; i++){
        cout << i << endl;
    }

    return 0;
}
