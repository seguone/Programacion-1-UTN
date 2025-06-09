#include <iostream>
using namespace std;

int main(){
    int vec[10];
    int maxi, pos;

    for(int i=0; i<10; i++){
        cout << "Ingrese un numero en Indice " << i << " : ";
        cin >> vec[i];
    }

    for(int i=0; i<10; i++){
        if(vec[i]<0){
            vec[i]*=(-1);
        }
    }

    for(int i=0; i<10; i++){
        if(i==0){
           maxi=vec[0];
        }
        else if(vec[i]>maxi){
            maxi=vec[i];
        }
    }
    cout << "MAXIMO ABSOLUTO: " << maxi << endl;


    return 0;
}
