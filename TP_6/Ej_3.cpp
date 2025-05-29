#include <iostream>
using namespace std;

int esPrimo(int n);

main(){
    int num;
    bool primo=true;

    cout << "Ingrese un numero: ";
    cin >> num;

    primo=esPrimo(num);

    if(primo){
        cout << "ES PRIMO" << endl;
    }
    else{
        cout << "NO ES PRIMO" << endl;
    }

    return 0;
}

int esPrimo(int n){
    int div=0;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            div++;
        }
    }
    if(div==2){
        return true;
    }
    return false;
}
