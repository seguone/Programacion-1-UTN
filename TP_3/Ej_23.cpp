#include <iostream>
using namespace std;

main()
{
    int num, anterior;
    int dupla=0;
    bool primero=true;

    for (int i=1; i<=10; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> num;

        if(primero){
            anterior = num;
            primero = false;
        }
        else if(anterior%2!=0 && num%2!=0){
            dupla++;
        }
        anterior = num;
    }


    cout << "DUPLAS: " << dupla << endl;


    return 0;
}
