#include <iostream>
using namespace std;

int main() {
    int num, div, contPrimo=0, contNoPrimo=0, total=0;
    float porP, porN;

    cout << "Ingrese un numero: ";
    cin >> num;

    while(num!=0){
        total++;
        div=0;
        for(int i=1; i<=num; i++){
            if(num%i==0){
                div++;
            }
        }
        if(div==2){
            contPrimo++;
        }
        else{
            contNoPrimo++;
        }
    cout << "Ingrese un numero: ";
    cin >> num;
    }
    porP= (float)contPrimo*100/total;
    porN= (float)contNoPrimo*100/total;

    cout << "PORCENTAJE DE NUMEROS PRIMOS: " << porP  << endl;
    cout << "PORCENTAJE DE NUMEROS NO PRIMOS: " << porN  << endl;

    return 0;
}
