#include <iostream>
using namespace std;

main(){
    int num;
    int p=0, n=0, c=0;
    float posP, negP,ceroP;

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
    posP = (float)p * 100 / 5;
    negP = (float)n * 100 / 5;
    ceroP = (float)c * 100 / 5;
    cout << "PORCENTAJE DE POSITIVOS: " << posP << endl;
    cout << "PORCENTAJE DE NEGATIVOS: " << negP << endl;
    cout << "PORCENTAJE DE CEROS: " << ceroP << endl;
    return 0;
}
