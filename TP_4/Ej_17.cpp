#include <iostream>
using namespace std;

int main(){
    int num,pos=0;
    int mayor=0;

    while(pos<2){

    cout << "Ingrese un numero: ";
    cin >> num;

        if(num>0){
            pos++;
            if(pos<2){
                if(num>mayor){
                    mayor=num;
                }
            }
        }
        else{
            pos=0;

        }

    }


    cout << "MAYOR: "<< mayor << endl;
    return 0;
}
