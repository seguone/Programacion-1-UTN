#include <iostream>
using namespace std;

main(){
    int numPartido, minJugados, tarAmarilla, tarRoja, goles;
    int no_jugado=0, jugados=0, tarjeta=0;
    float proTarjetas;
    int maxiGoles, maxiNum;
    int racha_actual = 0, racha_maxima = 0;

    for(int i=1; i<=5; i++){
        cout << "****NUEVO PARTIDO*****"<< endl;
        cout << "Ingrese numero de partido: ";
        cin >> numPartido;
        cout << "Ingrese minutos juegados: ";
        cin >> minJugados;
        cout << "Ingrese cantidad de tarjetas amarillas: ";
        cin >> tarAmarilla;
        cout << "Ingrese cantidad de tarjetas rojas: ";
        cin >> tarRoja;
        cout << "Ingrese cantidad de goles: ";
        cin >> goles;

        if(minJugados==0){
            no_jugado++;
        }
        if(minJugados>=90){
            jugados++;
        }
        if(tarAmarilla!=0 || tarRoja!=0){
            tarjeta+=tarAmarilla;
            tarjeta+=tarRoja;
        }
        if(i==1 || goles>maxiGoles){
            maxiGoles=goles;
            maxiNum=numPartido;
        }
        if (goles > 0) {
            racha_actual++;
            if (racha_actual > racha_maxima) {
                racha_maxima = racha_actual;
            }
        } else {
            racha_actual = 0;
        }
    }
    proTarjetas=tarjeta/5;
    cout << "CANTIDAD DE PARTIDOS NO JUGADOS: " << no_jugado << endl;
    cout << "CANTIDAD DE PARTIDOS JUGADOS COMPLETOS: " << jugados << endl;
    cout << "PROMEDIO DE TARJETAS POR PARTIDO: " << proTarjetas << endl;
    cout << "NUM DEL PARTIDO CON MAYOR CANTIDAD DE GOLES: " << maxiNum << endl;
    cout << "CON GOLES: " << maxiGoles << endl;
    cout << "MEJOR RACHA DE PARTIDOS CONVIRTIENDO GOLES: " << racha_maxima << " partidos consecutivos" << endl;

    return 0;
}
