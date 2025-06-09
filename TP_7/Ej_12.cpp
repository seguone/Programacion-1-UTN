#include <iostream>
using namespace std;

int main(){
    int vec[10];
    int num;
    int cont=0;

    for(int i=0; i<10; i++){
        cout << "Ingrese un numero: ";
        cin >> vec[i];
    }
    cout << endl;
    cout << "Ingrese un numero para buscarlo en el vector y saber cuantas veces esta en el mismo': ";
    cin >> num;

    for(int i=0; i<10; i++){
        if(num==vec[i]){
            cont++;
        }
    }
    cout << "Cantidad de veces que aparece tu numero: " << cont << endl;
    return 0;
}
