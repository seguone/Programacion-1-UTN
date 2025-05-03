#include <iostream>
using namespace std;

main()
{
    int num;
    int div=0;

    cout << "Ingrese un numero: ";
    cin >> num;
    for (int i=1; i<=num; i++)
    {

        if(num%i==0)
        {
            div++;
        }
    }
    if(div==2){
        cout << "ES PRIMO" << endl;
    }
    else{
        cout << "NO ES PRIMO" << endl;
    }
    return 0;
}
