#include <iostream>
using namespace std;

int main() {
    // Stock inicial
    int blanco = 45;
    int negro = 50;
    int marron = 40;
    int gris = 49;

    // Variables de venta
    int cantidad1, tipo1;
    int cantidad2, tipo2;
    int cantidad3, tipo3;
    int totalVendidas = 0;

    // Banderas de venta
    bool vendioBlanco = false;
    bool vendioNegro = false;
    bool vendioMarron = false;
    bool vendioGris = false;

    // PRIMERA VENTA
    cout << "PRIMERA VENTA\n";
    cout << "Cantidad de carteras: ";
    cin >> cantidad1;
    cout << "Tipo (1-Blanco, 2-Negro, 3-Marrón, 4-Gris): ";
    cin >> tipo1;

    // SEGUNDA VENTA
    cout << "SEGUNDA VENTA\n";
    cout << "Cantidad de carteras: ";
    cin >> cantidad2;
    cout << "Tipo (1-Blanco, 2-Negro, 3-Marrón, 4-Gris): ";
    cin >> tipo2;

    // TERCERA VENTA
    cout << "TERCERA VENTA\n";
    cout << "Cantidad de carteras: ";
    cin >> cantidad3;
    cout << "Tipo (1-Blanco, 2-Negro, 3-Marrón, 4-Gris): ";
    cin >> tipo3;

    // Proceso de ventas
    switch(tipo1) {
        case 1: blanco -= cantidad1; vendioBlanco = true; break;
        case 2: negro -= cantidad1; vendioNegro = true; break;
        case 3: marron -= cantidad1; vendioMarron = true; break;
        case 4: gris -= cantidad1; vendioGris = true; break;
    }

    switch(tipo2) {
        case 1: blanco -= cantidad2; vendioBlanco = true; break;
        case 2: negro -= cantidad2; vendioNegro = true; break;
        case 3: marron -= cantidad2; vendioMarron = true; break;
        case 4: gris -= cantidad2; vendioGris = true; break;
    }

    switch(tipo3) {
        case 1: blanco -= cantidad3; vendioBlanco = true; break;
        case 2: negro -= cantidad3; vendioNegro = true; break;
        case 3: marron -= cantidad3; vendioMarron = true; break;
        case 4: gris -= cantidad3; vendioGris = true; break;
    }

    // Total vendidas
    totalVendidas = cantidad1 + cantidad2 + cantidad3;

    // Resultados
    cout << "\nTOTAL DE CARTERAS VENDIDAS: " << totalVendidas << endl;
    cout << "STOCK RESTANTE:" << endl;
    cout << "- Blanco: " << blanco << endl;
    cout << "- Negro: " << negro << endl;
    cout << "- Marrón: " << marron << endl;
    cout << "- Gris: " << gris << endl;

    cout << "\nColores que NO se vendieron: " << endl;
    if (!vendioBlanco) cout << "- Blanco" << endl;
    if (!vendioNegro)   cout << "- Negro" << endl;
    if (!vendioMarron)  cout << "- Marrón" << endl;
    if (!vendioGris)    cout << "- Gris" << endl;

    return 0;
}
