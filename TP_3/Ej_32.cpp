#include <iostream>
using namespace std;

int main(){
    int num, contPar=0, contImp=0, x=0;

    for(int i=1; i<=10; i++){
        cout << "Ingrese un numero: ";
        cin >> num;

        if(num%2==0){
            contPar++;
            contImp=0;
        }
        else{
            contImp++;
            contPar=0;
        }
        if(contPar==2 || contImp==2 ){
            x=1;
        }
    }
    if(x==1){
        cout << "NO ALTERNADOS" << endl;
    }
    else{
        cout << "ALTERNADOS" << endl;
    }

    return 0;
}
