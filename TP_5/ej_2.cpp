#include <iostream>
using namespace std;

int main() {
    int num, div, cont=0;

    for(int i=1; i<=10; i++){
        div=0;
        cout << "Ingrese un numero: ";
        cin >> num;
        for(int x=1; x<=num;x++){
            if(num%x==0){
                div++;
            }
        }
        if(div==2){
            cont++;
        }
    }
    cout << "CANTIDAD DE NUMEROS PRIMOS: " << cont << endl;

    return 0;
}
