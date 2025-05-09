#include <iostream>
using namespace std;

int main(){
    int num;
    bool par=true;
    int pri, posPri,pos=0;
    int ulti, ultiPos;
    int div;

    cout << "Ingrese un numero: ";
    cin >> num;

    while(num!=0){
        pos++;
        if(par&&num%2==0){
            pri=num;
            posPri=pos;
            par=false;
        }
        div=0;
        for(int i=1; i<=num; i++){
            if(num%i==0){
                div++;
            }
        }
        if(div==2){
            ulti=num;
            ultiPos=pos;
        }


    cout << "Ingrese un numero: ";
    cin >> num;
    }
        cout << "PRIMER NUMEOR PAR:" << pri << endl;
        cout << "POSICION:" << posPri << endl;
        cout << "ULTIMO NUMERO PRIMO:" << ulti << endl;
        cout << "POSICION:" << ultiPos << endl;
    return 0;
}
