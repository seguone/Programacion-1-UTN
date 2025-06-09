#include <iostream>
using namespace std;

int main(){
    int vec[10];
    int num;
    int cont=0;

    for(int i=0; i<10; i++){
        cout << "Ingrese un numero: ";
        cin >> vec[i];
    }

    for(int i=0; i<10; i++){
        if(vec[i]%2==0){
            cont++;
        }
    }
    cout << "Cantidad de pares: " << cont << endl;
    return 0;
}
