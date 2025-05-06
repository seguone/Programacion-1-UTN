#include <iostream>
using namespace std;

int main()
{
    int num;
    int contPar=0;
    int contTerNeg=0;
    int contNeg=0;


    do
    {
        cout << "Ingrese un numero: ";
        cin >> num;

        if(num<0){
            contNeg++;
            if(contNeg==3){
                contTerNeg++;
            }
        }
        else{
            contNeg=0;
        }

        if(num%2==0)
        {
            contPar++;
        }
    }
    while(contPar<5);

    cout << "TERNAS DE NEGATIVOS: " << contTerNeg << endl;

    return 0;
}
