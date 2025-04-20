#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3, n4;
    int ant;

    cout << "Ingrese un numero: ";
    cin >> n1;
    cout << "Ingrese un numero: ";
    cin >> n2;
    cout << "Ingrese un numero: ";
    cin >> n3;
    cout << "Ingrese un numero: ";
    cin >> n4;

    if (n1 <= n2 && n2 <= n3 && n3 <= n4)
    {
        cout << "Conjunto Ordenado";
    }
    else
    {
        cout << "Conjunto Desordenado";
    }

    return 0;
}
