#include <iostream>
using namespace std;

int main()
{
    int edad1, edad2, edad3, edad4;
    float altura1, altura2, altura3, altura4 ;
    int contA=0;
    float sumaAltura=0, pro;
    int cont30=0;
    int contC=0;
    int contD=0;

    cout << "Ingrese edad: ";
    cin >> edad1;
    cout << "Ingrese altura: ";
    cin >> altura1;
    cout << "Ingrese edad: ";
    cin >> edad2;
    cout << "Ingrese altura: ";
    cin >> altura2;
    cout << "Ingrese edad: ";
    cin >> edad3;
    cout << "Ingrese altura: ";
    cin >> altura3;
    cout << "Ingrese edad: ";
    cin >> edad4;
    cout << "Ingrese altura: ";
    cin >> altura4;

    //PUNTO A
    if(edad1>30)
    {
        cont30++;
        sumaAltura+=altura1;
        if(altura1>1.8)
        {
            contA++;
        }
    }
        if(edad2>30)
        {
            cont30++;
            sumaAltura+=altura2;
            if(altura2>1.8)
            {
                contA++;
            }
        }
            if(edad3>30)
            {
                cont30++;
                sumaAltura+=altura3;
                if(altura3>1.8)
                {
                    contA++;
                }
            }
                if(edad4>30)
                {
                    cont30++;
                    sumaAltura+=altura4;
                    if(altura4>1.8)
                    {
                        contA++;
                    }
                }

                if(altura1>=1.7 && altura1<=1.8){
                    contC++;
                }
                if(altura2>=1.7 && altura2<=1.8){
                    contC++;
                }
                if(altura3>=1.7 && altura3<=1.8){
                    contC++;
                }
                if(altura4>=1.7 && altura4<=1.8){
                    contC++;
                }

                if (edad1 == 20 || edad1 == 30 || edad1 == 40){
                    contD++;
                }
                if (edad2 == 20 || edad2 == 30 || edad2 == 40){
                    contD++;
                }
                if (edad3 == 20 || edad3 == 30 || edad3 == 40){
                    contD++;
                }
                if (edad4 == 20 || edad4 == 30 || edad4 == 40){
                    contD++;
                }

                    pro= sumaAltura/cont30;

                    cout << "CANTIDAD DE PERSONAS MAYOR DE 30 y ALTURA MAYOR A 1.8: " << contA << endl;
                    cout << "PROMEDIO DE LA ALTURA DE LAS PERSONAS MAYOR DE 30: " << pro << endl;
                    cout << "CANTIDAD DE PERSONAS ENTRE ALTURA 1.7 y 1.8: " << contC << endl;
                    cout << "CANTIDAD DE PERSONAS CON 20, 30 o 40 DE EDAD: " << contD << endl;


                    return 0;
                }
