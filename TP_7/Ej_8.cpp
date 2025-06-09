#include <iostream>
using namespace std;

int main(){
    int vec[4];
    int num,mayor;
    bool b=false;


    for(int i=0; i<4; i++){
        cout << "Ingrese un numero: ";
        cin >> num;

        mayor = 0;

        while(num!=0){
            if(!b){
                mayor=num;
                b=true;
            }
            else if(num>mayor){
                mayor=num;
            }
            cout << "Ingrese un numero: ";
            cin >> num;
        }
        vec[i]=mayor;
    }
    for(int i=0; i<4; i++){
        cout << "MAYOR EN VEC["<< i << "]: "<< vec[i] <<endl;
    }
    return 0;
}
