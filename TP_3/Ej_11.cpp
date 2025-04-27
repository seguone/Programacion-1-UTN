#include <iostream>
using namespace std;

main(){
    int num, maxi,mini;
    bool b=false;

    for (int i=1; i<=5; i++){
        cout << "Ingrese un numero: ";
        cin >> num;
        if(b==false){
            maxi=num;
            mini=num;
            b= true;
        }
        else if(num>maxi){
            maxi = num;
        }
        else if(num<mini){
            mini = num;
        }
    }

    cout << "MAXIMO: " << maxi << endl;
    cout << "MINIMO: " << mini << endl;

    return 0;
}
