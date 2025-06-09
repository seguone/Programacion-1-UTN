#include <iostream>
using namespace std;

int main(){
    int vec[20];
    int ant;
    int cont_rupturas=0;

    for(int i=0; i<20; i++){
        cout << "Ingrese un numero: ";
        cin >> vec[i];

        if(i==0){
            ant=vec[i];
        }
        else if(vec[i]>ant){
            ant=vec[i];
        }
        else{
            cont_rupturas++;
        }
    }

        cout << "CANTIDAD DE RUPTURAS: " << cont_rupturas << endl;

    return 0;
}
