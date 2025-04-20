#include <iostream>
using namespace std;

int main() {
    float presupuesto, costoTotal;
    int caramelos;

    const float ALQUILER = 10000;
    const float COSTO_CARAMELO = 2.5;
    const float COSTO_MANTENIMIENTO = 5000;

    // Ingreso de datos
    cout << "Ingrese el presupuesto inicial: $";
    cin >> presupuesto;
    cout << "Ingrese la cantidad de caramelos a producir: ";
    cin >> caramelos;

    // Calcular costos
    float costoProduccion = caramelos * COSTO_CARAMELO;
    int bloquesMantenimiento = caramelos / 100;
    float costoMantenimiento = bloquesMantenimiento * COSTO_MANTENIMIENTO;

    costoTotal = ALQUILER + costoProduccion + costoMantenimiento;

    // Mostrar resultados
    if (presupuesto >= costoTotal) {
        cout << "El presupuesto es suficiente para cubrir los costos de $" << costoTotal << endl;
    } else {
        float falta = costoTotal - presupuesto;
        cout << "El presupuesto no es suficiente, necesita un crédito de $" << falta << endl;
    }

    return 0;
}
