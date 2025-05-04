#include <iostream>
using namespace std;

int main(){
    int num, div=0, i=1;

    cout << "Ingrese un numero: ";
    cin >> num;

    while(i<=num){
        if(num%i==0){
            div++;
        }
        i++;
    }
    if(div==2){
        cout << "ES PRIMO" << endl;
    }
    else{
        cout << "NO ES PRIMO" << endl;
    }
    return 0;
}
