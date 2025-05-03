#include <iostream>
using namespace std;

main(){
    int n,num, pos=0;

    cout << "Ingrese en valor numero la cantidad de numeros que va a componer la siguiente lista: ";
    cin >> n;

    for (int i=1; i<=n; i++){
        cout << "Ingrese un numero: ";
        cin >> num;

        if(num>0){
            pos++;
        }

    }
    cout << "CANTIDAD DE POSITIVOS: " << pos << endl;
    return 0;
}
