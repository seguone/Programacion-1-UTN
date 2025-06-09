#include <iostream>
using namespace std;

int main() {
    int vec_1[5];
    int vec_2[5];
    int vec_3[5];
    int k=0;

    // Cargar el vector 1
    for(int i = 0; i < 5; i++) {
        cout << "Ingrese un numero para el primer vector: ";
        cin >> vec_1[i];
    }
    // Cargar el vector
    for(int i = 0; i < 5; i++) {
        cout << "Ingrese un numero para el segundo vector: ";
        cin >> vec_2[i];
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(vec_1[i]==vec_2[j]){
                vec_3[k] = vec_1[i];
                k++;
                break;
            }
        }
    }
    cout << "Vector con elementos repetidos: ";
    for(int i = 0; i < k; i++) {
        cout << vec_3[i] << " ";
    }
    cout << endl;
    return 0;
}
