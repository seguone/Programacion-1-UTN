#include <iostream>
using namespace std;

int main(){
    int vec[10];
    int mayor, menor;
    bool bi=true, bp=true;

    for(int i=0; i<10; i++){
        cout << "Ingrese un numero en Indice " << i << " : ";
        cin >> vec[i];
    }

    for(int i=0; i<10; i++){
        if(vec[i]%2==0){
            if(bp){
                mayor=vec[i];
                bp=false;
            }
            else if(vec[i]>mayor){
                mayor=vec[i];
            }
        }
        else if(bi){
            menor=vec[i];
            bi=false;
        }
        else if(vec[i]<menor){
            menor=vec[i];
        }

    }
    cout << "MENOR IMPAR : " << menor << endl;
    cout << "MAYOR PAR : " << mayor << endl;


    return 0;
}
