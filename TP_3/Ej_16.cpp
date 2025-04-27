#include <iostream>
using namespace std;

main(){
    int num, maxi, sig;
    bool b=false;

    for (int i=1; i<=5; i++){
        cout << "Ingrese un numero: ";
        cin >> num;

        if(b==false){
            sig=num;
            maxi=num;
            b=true;
        }
        else if(num>=maxi){
            sig=maxi;
            maxi=num;
        }
        else if(num>sig || i==2){
            sig=num;
        }
    }

    cout << "MAXIMO: " << maxi << endl;
    cout << "SIGUIENTE: " << sig << endl;

    return 0;
}
