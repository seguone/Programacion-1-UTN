#include <iostream>
using namespace std;

int main(){
    int vec[10];
    int ante, ulti;

    for(int i=0; i<10; i++){
        cout << "Ingrese un numero en VEC[" << i << "] : ";
        cin >> vec[i];
    }

    for(int i=0; i<10; i++){
        if(vec[i]%2==0){
            if(i==0){

            ulti=vec[i];
            }
        ante=ulti;
        ulti=vec[i];
        }
    }
    cout << "ANTEULTIMO PAR : " << ante << endl;
    cout << "ULTIMO PAR : " << ulti << endl;


    return 0;
}
