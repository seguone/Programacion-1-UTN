#include <iostream>
using namespace std;

main()
{
    int num;
    int div=0;

    cout << "Ingrese un numero: ";
    cin >> num;
    for (int i=1; i<num; i++)
    {

        if(num%i==0)
        {
            div += i;
        }
    }
    if(div==num){
        cout << "ES PERFECTO" << endl;
    }
    else{
        cout << "NO ES PERFECTO" << endl;
    }
    return 0;
}
