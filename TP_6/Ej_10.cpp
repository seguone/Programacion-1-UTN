#include <iostream>
using namespace std;

void esNaipe(int n, int &numNaipe, string &palo);

main(){
    int codigo, naipe;
    string palo;

    cout << "Ingrese un numero: ";
    cin >> codigo;
    esNaipe(codigo, naipe, palo);

    cout << "SU NAIPE ES EL " << naipe << " DE " << palo << endl;

    return 0;
}

void esNaipe(int n, int &numNaipe, string &palo){
    if(n>=1 && n<=10){
        palo="ESPADA";
        numNaipe = n;
    }
    else if(n>=11 && n<=20){
        palo="BASTO";
        numNaipe = n -10;
    }
    else if(n>=21 && n<=30){
        palo="COPA";
        numNaipe = n -20;
    }
    else if(n>=31 && n<=40){
        palo="ORO";
        numNaipe = n -30;
    }

    if(numNaipe >=8){
        numNaipe += 2;
    }
}
