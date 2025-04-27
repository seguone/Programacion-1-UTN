#include <iostream>
using namespace std;

main(){
    int num, maxi,mini;
    bool bp=false;
    bool bn=false;

    for (int i=1; i<=10; i++){
        cout << "Ingrese un numero: ";
        cin >> num;
        if(num>0){
            if(bp==false){
                mini=num;
                bp=true;
            }
            else if(num<mini){
                mini = num;
            }
        }
        else if(bn== false){
            maxi=num;
            bn=num;
        }
        else if(num>maxi){
            maxi=num;
        }
    }

    cout << "MAXIMO NEGATIVOS: " << maxi << endl;
    cout << "MINIMO POSITIVOS: " << mini << endl;

    return 0;
}
