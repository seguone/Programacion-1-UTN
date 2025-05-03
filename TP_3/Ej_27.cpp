#include <iostream>
using namespace std;

main(){
    int dia, maxDia;
    float tem, lluvia, visibilidad, ampTermica, maxTem, miniTem;
    int neblina=0, hubo_lluvia=0;

    for(int i=1; i<=5; i++){
        cout << "********************" << endl;
        cout << "Ingrese Dia: ";
        cin >> dia;
        cout << "Ingrese Temperatura: ";
        cin >> tem;
        cout << "Ingrese Milímetros de lluvia: ";
        cin >> lluvia;
        cout << "Ingrese Visibilidad en km: ";
        cin >> visibilidad;


        if(i==1){
            maxDia=dia;
            maxTem=tem;
            miniTem=tem;
        }
        else if(tem>maxTem){
            maxDia=dia;
            maxTem=tem;
        }
        else if(tem<miniTem){
            miniTem=tem;
        }
        if(visibilidad<2){
            neblina++;
        }
        if(lluvia!=0){
            hubo_lluvia++;
        }
    }
    ampTermica= maxTem-miniTem;

    cout << endl;
    cout << "Dia con mayor temperatura: " << maxDia << endl;
    cout << "Amplitud termica del periodo: " << ampTermica << endl;
    cout << "Cantidad de dias con neblina: " << neblina << endl;
    if(hubo_lluvia > 5 - hubo_lluvia){
        cout << "Quincena lluviosa" << endl;
    }
    else if(hubo_lluvia >= 5/3){
        cout << "Quincena humeda" << endl;
    }
    else{
        cout << "Quincena seca" << endl;
    }


    return 0;
}
