#include <iostream>
using namespace std;

main(){
    int num, primerImpar,segundoImpar;
    bool impar=false;
    bool segImpar=false;
    int anteultimoImpar, ultimoImpar;

    for (int i=1; i<=7; i++){
        cout << "Ingrese un numero: ";
        cin >> num;
        if(num%2!=0){
            if(impar==false){
                primerImpar=num;
                impar=true;
            }
            else if(segImpar==false){
                segundoImpar = num;
                segImpar=true;
            }
            else{
                anteultimoImpar = ultimoImpar;
                ultimoImpar = num;
            }
        }
    }

    cout << "PRIMER IMPAR: " << primerImpar << endl;
    cout << "SEGUNDO IMPAR: " << segundoImpar << endl;
    cout << "____________________________________" << endl;
    cout << "ANTEULTIMO IMPAR: " << anteultimoImpar << endl;
    cout << "ULTIMO IMPAR: " << ultimoImpar << endl;

    return 0;
}
