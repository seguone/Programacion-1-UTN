#include <iostream>
using namespace std;

main(){
    int num;
    int p=0, n=0, c=0;

    for (int i=1; i<=5; i++){
        cout << "Ingrese un numero: ";
        cin >> num;

        if(num>0){
            p++;
        }
        else if(num<0){
            n++;
        }
        else{
            c++;
        }

    }
    cout << "CANTIDAD DE POSITIVOS: " << p << endl;
    cout << "CANTIDAD DE NEGATIVOS: " << n << endl;
    cout << "CANTIDAD DE CEROS: " << c << endl;
    return 0;
}
