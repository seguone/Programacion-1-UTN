#include <iostream>
using namespace std;

main(){
    int num, maxi,pos;
    bool b=false;

    for (int i=1; i<=5; i++){
        cout << "Ingrese un numero: ";
        cin >> num;
        if(b==false){
            maxi=num;
            pos=i;
            b= true;
        }
        else if(num>maxi){
            maxi = num;
            pos=i;
        }
    }

    cout << "MAXIMO: " << maxi << endl;
    cout << "POSICION: " << pos << endl;

    return 0;
}
