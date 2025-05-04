#include <iostream>
using namespace std;

int main()
{
    int num;
    int pos=0, neg=0;

    cout << "Ingrese un numero: ";
    cin >> num;


    while(num!=0)
    {
        if(num>0)
        {
            pos++;
        }
        else
        {
            neg++;
        }
        cout << "Ingrese un numero: ";
        cin >> num;
    }

    cout << "POSITIVOS: " << pos << endl;
    cout << "NEGATIVOS: " << neg << endl;

    return 0;
}
