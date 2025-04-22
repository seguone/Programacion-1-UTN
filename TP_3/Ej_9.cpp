#include <iostream>
using namespace std;

main(){
    int num, maxi;
    bool b=false;

    for (int i=1; i<=5; i++){
        cout << "Ingrese un numero: ";
        cin >> num;
        if(b==false){
            maxi=num;
            b= true;
        }
        else if(num>maxi){
            maxi = num;
        }
    }

    cout << "MAXIMO: " << maxi << endl;

    return 0;
}
