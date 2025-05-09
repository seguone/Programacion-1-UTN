#include <iostream>
using namespace std;

int main()
{
    int num, ant;
    bool primer=true;
    int des=0;

    cout << "Ingrese un numero: ";
    cin >> num;


    while(num!=0)
    {
    if(primer){
        ant=num;
        primer=false;
    }
    else if(num<ant){
        ant=num;
        des=1;
    }

        cout << "Ingrese un numero: ";
        cin >> num;
    }
    if(des==1){

    cout << "DESORDENADO" << endl;
    }
    else{
    cout << "ORDENADO" << endl;

    }
    return 0;
}
