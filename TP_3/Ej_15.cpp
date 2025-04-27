#include <iostream>
using namespace std;

main(){
    int num, numAnt;
    bool desordenado=false;
    bool ant=false;

    for (int i=1; i<=7; i++){
        cout << "Ingrese un numero: ";
        cin >> num;

        if(ant==false){
            numAnt=num;
            ant=true;
        }
        else if(num>=numAnt){
            numAnt=num;
        }
        else{
            desordenado=true;
        }
    }

    if(desordenado== true){
    cout << "DESORDENADO" << endl;
    }
    else{
        cout << "ORDENADO" << endl;
    }

    return 0;
}
