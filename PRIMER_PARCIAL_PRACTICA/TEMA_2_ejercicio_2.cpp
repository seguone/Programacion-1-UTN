#include <iostream>
using namespace std;

int main(){

    int numInt, dia, cantViajes, cantPasajeros;
    int anterior;
    float recaudacion;

    //PUNTO A
    bool pri=true;
    int acuViajes, maxiViajes,maxiInt;

    //PUNTO B
    float acuRecaudacion;

    //PUNTO C
    int Q1=0, Q2=0;

    //PUNTO D
    bool priRecaudacion=true;
    float menorRecaudacion;
    int menorDia=0, menorInt=0;


            cout << "Ingrese numero de Interno(1 a 150): ";
            cin >> numInt;

    while(numInt!=0){
            anterior=numInt;

            //PUNTO A
            acuViajes=0;

            //PUNTO B
            acuRecaudacion=0;

            //PUNTO C


        while(numInt==anterior){
            cout << "Ingrese numero de Dia(1 a 31): ";
            cin >> dia;
            cout << "Ingrese Recaudacion del dia: ";
            cin >> recaudacion;
            cout << "Ingrese cantidad de Pasajeros Transportados en el dia: ";
            cin >> cantPasajeros;
            cout << "Ingrese cantidad de Viajes(1 a 150): ";
            cin >> cantViajes;
            //PUNTO A
            if(dia<=15){
                acuViajes+=cantViajes;
            }
            //PUNTO B
            acuRecaudacion+=recaudacion;

            //PUNTO C
            if(dia<=15){
                Q1+=cantPasajeros;
            }
            else{
                Q2+=cantPasajeros;
            }
            //PUNTO D
            if(priRecaudacion){
                menorRecaudacion=recaudacion;
                menorInt=numInt;
                menorDia=dia;
                priRecaudacion=false;
            }
            else if(recaudacion<menorRecaudacion){
                menorRecaudacion=recaudacion;
                menorInt=numInt;
                menorDia=dia;
            }


            cout << "Ingrese numero de Interno(1 a 150): ";
            cin >> numInt;
        }
        ///// ENTRE LOS CICLOS
        //PUNTO A
        if(pri){
            maxiViajes=acuViajes;
            maxiInt=anterior;
            pri=false;
        }
        else if(acuViajes>maxiViajes){
            maxiViajes=acuViajes;
            maxiInt=anterior;
        }
        //PUNTO B
        cout << endl;
        cout << "LA RECUADACION DEL INTERNO " << anterior << endl;
        cout << "Recaudaciones del mes: " << acuRecaudacion << endl;
        cout << endl;
    }
    //FUERA DEL CICLO
        //PUTNO A
        cout << "El numero del interno que realizo más cantidad de viajes en total en la primera quincena: " << maxiInt << endl;
        //PUNTO B

        //PUNTO C
        if(Q1>Q2){
            cout << "EN LA PRIMERA QUIENCENA SE TRANSPORTO MAYOR CANTIDAD DE PAJEROS(Q1)" << endl;
        }
        else{
            cout << "EN LA SEGUNDA QUIENCENA SE TRANSPORTO MAYOR CANTIDAD DE PAJEROS(Q2)" << endl;
        }
        //PUNTO D
        cout << "Interno que recaudo menos pesos en el dia " << menorDia << ": " << menorInt << endl;

return 0;
}
