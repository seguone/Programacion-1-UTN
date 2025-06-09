#include <iostream>
using namespace std;

int main(){
    int vec[5];
    int ant;
    bool ordenado = true;

    for(int i=0; i<5; i++){
        cout << "Ingrese un numero: ";
        cin >> vec[i];

        if(i==0){
            ant=vec[i];
        }
        else if(vec[i]<ant){
            ordenado = false;
        }
    }
    if(ordenado){
        cout << "ESTA ORDENADO" << endl;
    }
    else{
        cout << "ESTA DESORDENADO" << endl;
    }

    return 0;
}
