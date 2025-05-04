#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    int menor, mayor;

    cout << "Ingrese un numero: ";
    cin >> num1;
    cout << "Ingrese un numero: ";
    cin >> num2;

    if(num1>num2){
        mayor=num1;
        menor=num2;
    }
    else{
        mayor=num2;
        menor=num1;
    }
    while(menor<=mayor){
        cout << menor << endl;
        menor++;
    }
    return 0;
}
