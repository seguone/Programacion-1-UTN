#include <iostream>
using namespace std;

main()
{
    int num, primerPar, pos;
    int div=0;
    bool par=false;
    int ultimoPrimo, primerParPos, ultimoPrimoPos;

    for (int x=1; x<=7; x++)
    {
        div=0;
        cout << "Ingrese un numero: ";
        cin >> num;
        if(par==false && num%2==0)
        {
            primerPar=num;
            primerParPos=x;
            par=true;
        }
        for (int i=1; i<=num; i++)
        {
            if(num%i==0)
            {
                div++;
            }
        }
        if(div==2)
        {
            ultimoPrimo=num;
            ultimoPrimoPos=x;
        }

    }
    cout << "PRIMER PAR: " << primerPar << endl;
    cout << "POS PRIMER PAR: " << primerParPos << endl;
    cout << "ULTIMO PRIMO: " << ultimoPrimo << endl;
    cout << "POS ULTIMO PRIMO: " << ultimoPrimoPos << endl;

    return 0;
}
