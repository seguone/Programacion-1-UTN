#include <iostream>
using namespace std;

int main() {
    int num, acu, cont=0;

    for(int i=1; i<=10; i++){
        acu=0;
        cout << "Ingrese un numero: ";
        cin >> num;
        for(int x=1; x<num;x++){
            if(num%x==0){
                acu+=x;
            }
        }
        if(num==acu){
            cont++;
        }
    }
    cout << "CANTIDAD DE NUMEROS PERFECTOS: " << cont << endl;

    return 0;
}
