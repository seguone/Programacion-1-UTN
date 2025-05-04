#include <iostream>
using namespace std;

int main(){
    int num;
    int cont=0, dif=0, mayor, menor;
    bool maxi=true;


    do{
    cout << "Ingrese un numero: ";
    cin >> num;
        cont++;
        if(maxi){
            mayor=num;
            menor=num;
            maxi=false;
        }
        else if(num>mayor){
            mayor=num;
        }
        else if(num<menor){
            menor=num;
        }

    dif=mayor-menor;
    } while(dif<=10);

    cout << "Cantidad de numeros:" << cont << endl;

    return 0;
}
