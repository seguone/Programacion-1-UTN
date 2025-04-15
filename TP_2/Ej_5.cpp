#include <iostream>
using namespace std;

main(){
    float imp, total;

    cout << "Ingrese importe de la venta: ";
    cin >> imp;

    if(imp>500){
        total=imp*0.85;
    }
    else if(imp>100){
        total=imp*0.90;
    }
    else{
        total=imp*0.95;
    }

    cout << "El total es: " << total << endl;


    return 0;
}
