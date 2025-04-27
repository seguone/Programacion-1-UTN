#include <iostream>
using namespace std;

main(){
    int num, maxi,mini;
    bool bp=false;

    for (int i=1; i<=10; i++){
        cout << "Ingrese un numero: ";
        cin >> num;
        if(num%2==0){
            if(bp==false){
                maxi=num;
                bp=true;
            }
            else if(num>maxi){
                maxi = num;
            }
        }
    }

    cout << "MAXIMO PAR: " << maxi << endl;

    return 0;
}
