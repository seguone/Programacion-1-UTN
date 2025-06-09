#include <iostream>
using namespace std;

int main(){
    int vec[10];
    int num;
    int cont=0;
    int div;

    for(int i=0; i<10; i++){
        cout << "Ingrese un numero: ";
        cin >> vec[i];
    }

    for(int i=0; i<10; i++){
        div=0;
        for(int x=1; x<=vec[i]; x++){
            if(vec[i]%x==0){
                div++;
            }
        }
        if(div==2){
            cont++;
        }
    }
    cout << "Cantidad de primos: " << cont << endl;
    return 0;
}
