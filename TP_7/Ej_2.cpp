#include <iostream>
using namespace std;

int main(){
    int vec[10];
    int acu=0;
    float pro;

    for(int i=0; i<10; i++){
        cout << "Ingrese un numero: ";
        cin >> vec[i];
    }
    for(int i=0; i<10; i++){
        acu+=vec[i];
    }

    pro=(float)acu/10;

    for(int i=0; i<10; i++){
        if(vec[i]>pro){
            cout << vec[i] << endl;
        }
    }

    return 0;
}
