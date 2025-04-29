#include <iostream>
using namespace std;

main(){
    int num, ant,div;
    bool b=false, desordenado=false;

    for(int i=1; i<=7; i++){
        cout << "Ingrese un numero: ";
        cin >> num;

        div=0;
        for(int x=1; x<=num; x++){
            if(num%x==0){
                div++;
            }
        }
        if(div==2){
            if(b==false || num>=ant){
                ant=num;
                b=true;
            }
            else{
                desordenado= true;
            }
        }
    }
    if (desordenado){
        cout << "ESTA DESORDENADO" << endl;
    }
    else{
        cout << "ESTA ORDENADO" << endl;
    }
    return 0;
}
