#include <iostream>
using namespace std;
/**
Hacer un programa para ingresar una lista de 13 números. Se pide luego
determinar e informar:

A) La cantidad de ternas de valores positivos consecutivos.
B) La cantidad de ternas de valores negativos consecutivos y ordenados en
forma creciente.

Ejemplo si la lista fuera: 10, 5, 4, 3, -8, -3, -1, 0, 3, 8, -5, -8, -10 entonces el programa
detectará una terna de positivos consecutivos (10, 5, 4) y una terna de negativos
consecutivos ordenados (-8, -3, -1)

Nota: Si el número ingresado es cero, no se lo considera ni negativo ni positivo.
Nota: La terna (-5, -8, -10) no es contabilizada ya que no se encuentra ordenada
crecientemente
**/
int main(){
    int num;
    int contPositivos=0, contNegativos=0;
    int ternasPositivas=0;
    int ternasNegativas=0;
    int maxiNeg;
    int contN=0;

    for(int i=1; i<=13; i++){
        cout << "Ingrese un numero: ";
        cin >> num;

        if(num > 0){
            contNegativos=0;
            contPositivos++;

            if(contPositivos==3){
                contPositivos=0;
                ternasPositivas++;
            }
        }
        else if(num < 0){
            contPositivos=0;
            contNegativos++;

            if(contNegativos==1){
                maxiNeg=num;
                contN++;
            }
            else if(num>maxiNeg){
                contN++;
                maxiNeg=num;
            }
            else{
                contN=1;
                maxiNeg=num;
            }
            if(contN==3){
                ternasNegativas++;
                contN=0;
            }
        }
    }
    cout << "CANTIDAD DE TERNAS POSITIVAS: " << ternasPositivas << endl;
    cout << "CANTIDAD DE TERNAS NEGATIVAS: " << ternasNegativas << endl;
    return 0;
}
