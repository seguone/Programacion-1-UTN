#include <iostream>
using namespace std;

main(){
    int numMov,dia;
    float imp;
    char opcion;
    float saldo = 10000;
    int dep=0, ex=0;
    float porE, porD;
    bool mayor=false;
    float maxiDep;
    int maxiDia, maxiMov;
    int dia10=0;

    for(int i=1; i<=6; i++){
        cout << "Numero de movimiento: ";
        cin >> numMov;
        cout << "Ingrese Dia: ";
        cin >> dia;
        cout << "Ingrese(E-> EXTRACCION o D->DEPOSITO): ";
        cin >> opcion;
        cout << "Ingres importe: ";
        cin >> imp;

        if(opcion== 'E' || opcion== 'e'){
            saldo -= imp;
            ex++;
        }
        else if(opcion == 'D' || opcion== 'd'){
            saldo += imp;
            dep++;
            if(mayor==false){
                maxiDep=imp;
                maxiDia=dia;
                maxiMov=numMov;
                mayor=true;
            }
            else if(imp>maxiDep){
                maxiDep=imp;
                maxiDia=dia;
                maxiMov=numMov;
            }
        }
        if(dia==10){
            dia10++;
        }
    }
    porE=ex*100/6;
    porD=dep*100/6;

    cout << "SALDO FINAL: " << saldo << endl;
    cout << "PORCENTAJE DE EXTRACCIONES: " << porE << endl;
    cout << "PORCENTAJE DE DEPOSITOS: " << porD << endl;
    cout << "MAYOR DEPOSITO: " << maxiDep << " - DIA: " << maxiDia << " - NUMERO DE MOVIMIENTO: "<< maxiMov << endl;
    cout << "CANTIDAD DE MOVIMIENTO EL DIA 10: " << dia10 << endl;

    return 0;
}
