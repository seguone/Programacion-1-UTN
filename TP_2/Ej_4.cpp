#include <iostream>
using namespace std;

main(){
    int num1, num2, total;

    cout << "Ingrese un numero: ";
    cin >> num1;
    cout << "Ingrese otro numero: ";
    cin >> num2;

    if(num1>num2){
       total=num1-num2;
       if(total<0){
        total*=(-1);
       }
    }
    else{
        total=num2-num1;
       if(total<0){
        total*=(-1);
       }
    }

    cout << "La diferencia absoluta es: " << total << endl;


    return 0;
}
