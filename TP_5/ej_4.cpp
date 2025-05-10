#include <iostream>
using namespace std;

int main() {
    int num;

    //PUNTO A
    bool par=true, impar=true;
    int maxiPar, maxiImpar;

    //PUNTO B
    int pos, neg, total;
    float porP, porN;

    //PUNTO C
    int totalPos=0;

    for(int i=1; i<=3; i++){

    cout << "Ingrese un numero: ";
    cin >> num;
    par=true, impar=true;
    maxiPar=maxiImpar=0;
    pos=neg=total=0;

        while(num!=0){
        //PUNTO A
        if(num%2==0){
            if(par){
                maxiPar=num;
                par=false;
            }
            else if(num>maxiPar){
                maxiPar=num;
            }
        }
        else if(num%2!=0){
            if(impar){
                maxiImpar=num;
                impar=false;
            }
            else if(num>maxiImpar){
                maxiImpar=num;
            }
        }
        //PUNTO B
        total++;
        if(num>0){
            pos++;
        }
        else{
            neg++;
        }
        //PUNTO C
        if(num>0){
            totalPos++;
        }

        cout << "Ingrese un numero: ";
        cin >> num;
        }
        //PUNTO A
        cout << "MAXIMO PAR:" << maxiPar << endl;
        cout << "MAXIMO IMPAR:" << maxiImpar << endl;
        //PUNTO B
        porP=(float)pos*100/total;
        porN=(float)neg*100/total;
        cout << "PORCENTAJE DE POSITIVOS: " << porP << endl;
        cout << "PORCENTAJE DE NEGATIVOS: " << porN << endl;

    }
    cout << "TOTAL DE NUMEROS POSITIVOS DENTRO DE LOS 10 GRUPOS: " << totalPos << endl;
    return 0;
}
