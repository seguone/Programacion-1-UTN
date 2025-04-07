#include <iostream>
using namespace std;

main(){
    int asientosTotales, asientosOcupados;
    int porcentajeOcupados, porcentajeDesocupados;

    cout << "Ingrese la cantidad de asientos totales del avion: ";
    cin >> asientosTotales;
    cout << "Ingrese la cantidad de asientos ocupados del avion: ";
    cin >> asientosOcupados;

    porcentajeOcupados = (asientosOcupados*100)/asientosTotales ;
    porcentajeDesocupados = ((asientosTotales-asientosOcupados)*100)/asientosTotales;

    cout << "Porcentaje de asientos ocupados es: " << porcentajeOcupados << endl;
    cout << "Porcentaje de asientos desocupados es: " << porcentajeDesocupados << endl;


    return 0;
}
