#include <iostream>
using namespace std;

main(){
    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    if(num%2==0){
       cout << "ES PAR";
    }
    else{
        cout << "NO ES PAR";
    }
    return 0;
}
