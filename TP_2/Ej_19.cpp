#include <iostream>
using namespace std;

int main()
{
    int hs;
    float total;
    char tipo;
    bool urgente=false;

    cout << "Ingrese la cantidad de horas trabajadas: ";
    cin >> hs;
    cout << "Indique que tipo de lenguaje va a ser:" << endl;
    cout << "(ingrese C si es C/C++ )"<< endl;
    cout << "(ingrese # si es C#  )"<< endl;
    cout << "(ingrese P si es Python )"<< endl;
    cout << "(ingrese G si es Go )"<< endl;
    cin >> tipo;
    cout << "Es URGENTE? (SI->1 NO->0):";
    cin >> urgente;

    switch(tipo){
    case 'C':
    case 'c':
        total=hs*7500;
        break;
    case '#':
        total=hs*6100;
        break;
    case 'P':
    case 'p':
        total=hs*5400;
        break;
    case 'G':
    case 'g':
        total=hs*5000;
        break;
    }

    if(urgente){
        total*=2.2;
    }

    cout << "El total es de: " << total << endl;
    return 0;
}
