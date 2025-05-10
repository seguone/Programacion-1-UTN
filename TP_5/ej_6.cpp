#include <iostream>
using namespace std;

int main(){
    int num;
    int div, ant;
    bool desordenado = false, pri=true;

    cout << "Ingrese un numero: ";
    cin >> num;

    while(num!=0){

    div=0;
    for(int i=1; i<=num; i++){
        if(num%i==0){
          div++;
        }
    }
    if(div==2){
        if(pri){
            ant=num;
            pri=false;
        }
        else if(num>ant){
            ant=num;
        }
        else{
            desordenado=true;
        }
    }

    cout << "Ingrese un numero: ";
    cin >> num;
    }
    if(desordenado){
        cout << "NUMEROS PRIMOS DESORDENADOS" << endl;
    }
    else{
        cout << "NUMEROS PRIMOS ORDENADOS" << endl;
    }

    return 0;
}
