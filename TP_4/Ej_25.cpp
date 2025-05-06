#include <iostream>
using namespace std;

int main() {
    int numArt, numInt, jornada, duracion;
    //PUNTO A
    int masLargo, masLargoArt;
    bool pri=true;
    //PUNTO B
    int solista1=0, solista2=0, solista3=0;

    //PUNTO C
    int acuJornada1=0, acuJornada2=0, acuJornada3=0;

    //PUNTO D
    int contArt=0;
    float proDuracion;

    cout << "Ingrese Numero del Artista: ";
    cin >> numArt;

    while(numArt!=0){
    cout << "Ingrese numero de Integrantes: ";
    cin >> numInt;
    cout << "Ingrese numero de Jornada: ";
    cin >> jornada;
    cout << "Ingrese duracion en minutos: ";
    cin >> duracion;
    //PUNTO A
    if(jornada==1){
        if(pri){
            masLargo=duracion;
            masLargoArt=numArt;
            pri=false;
        }
        else if(duracion>masLargo){
            masLargo=duracion;
            masLargoArt=numArt;
        }
    }

    //PUNTO B
    if(jornada==1&&numInt==1){
        solista1++;
    }
    if(jornada==2&&numInt==1){
        solista2++;
    }
    if(jornada==3&&numInt==1){
        solista3++;
    }

     //PUNTO C
     if(jornada==1){
     acuJornada1+=duracion;
     }
     if(jornada==2){
     acuJornada2+=duracion;
     }
     if(jornada==3){
     acuJornada3+=duracion;
     }

     //PUNTO D
     contArt++;

    cout << "Ingrese Numero del Artista: ";
    cin >> numArt;
    }

    proDuracion=(acuJornada1+acuJornada2+acuJornada3)/contArt;

    cout << endl;
    if(jornada==1&&duracion!=0){
    cout << "SHOW MAS LARGO DE LA JORNADA 1: " << masLargoArt << " MINUTOS" <<endl;
    }
    cout << "CANTIDAD DE SOLISTAS DE LA JORNADA 1: " << solista1 << endl;
    cout << "CANTIDAD DE SOLISTAS DE LA JORNADA 2: " << solista2 << endl;
    cout << "CANTIDAD DE SOLISTAS DE LA JORNADA 3: " << solista3 << endl;
    if(acuJornada1>acuJornada2 && acuJornada1>acuJornada3){
        cout << "LA JORNADA 1 FUE LA MAS EXTENSA" << endl;
    }
    if(acuJornada2>acuJornada1 && acuJornada2>acuJornada3){
        cout << "LA JORNADA 2 FUE LA MAS EXTENSA" << endl;
    }
    if(acuJornada3>acuJornada1 && acuJornada3>acuJornada2){
        cout << "LA JORNADA 3 FUE LA MAS EXTENSA" << endl;
    }
    cout << "PROMEDIO DE SHOW POR ARTISTA: " << proDuracion << endl;

    return 0;
}
