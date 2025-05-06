#include <iostream>
using namespace std;

int main() {
    int numLeg, codMat;
    float nota;
    //PUNTO A
    int cont=0, acu=0;
    float pro;
    //PUNTO B
    int menorNota, menorLegajo;
    //PUNTO C
    int cont10=0;
    //PUNTO D
    int apro=0, desa=0;
    float porApro, porDesa;

    cout << "Ingrese Numero del Legajo: ";
    cin >> numLeg;

    while(numLeg<30){
    cout << "Ingrese codigo de Materia: ";
    cin >> codMat;
    cout << "Ingrese Nota: ";
    cin >> nota;
    //PUNTO A
        cont++;
        acu+=nota;
    //PUNTO B
        if(cont==1){
            menorNota=nota;
            menorLegajo=numLeg;
        }
        else if(numLeg<menorLegajo){
            menorNota=nota;
            menorLegajo=numLeg;
        }
     //PUNTO C
        if(codMat==10){
            cont10++;
        }
     //PUNTO D
        if(nota>=6){
            apro++;
        }
        else{
            desa++;
        }


    cout << "Ingrese Numero del Legajo: ";
    cin >> numLeg;
    }

    pro=(float)acu/cont;

    porApro=apro*100/cont;
    porDesa=desa*100/cont;

    cout << "PROMEDIO DE LAS NOTAS: " << pro << endl;
    cout << "LEGAJO DEL ESTUDIANTE CON MENOR NOTA: " << menorLegajo << " NOTA: " << menorNota << endl;
    cout << "CANTIDAD DE EXAMENES RENDIDOS PARA LA MATERIA 10: " << cont10 << endl;
    cout << "PORCENTAJE DE APROBADOS: " << porApro << endl;
    cout << "PORCENTAJE DE DESAPROBADOS: " << porDesa << endl;
    return 0;
}
