#include <iostream>
using namespace std;

main(){
    int num;

        cout << "Ingrese un numero: ";
        cin >> num;
    for (int i=1; i<=num; i++){

        if(num%i==0){
                cout << i << endl;
    }
}
    return 0;
}
