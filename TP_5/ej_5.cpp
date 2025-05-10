#include <iostream>
using namespace std;

int main()
{
    int num;

    //PUNTO A
    int impar, totalGrupo, grupoMaxi;
    float porMaxi, porImpar;
    //PUNTO B
    int div, ulti=0, pos,posicion;

    //PUNTO C
    bool pri=true, desordenado=false;
    int grupoOrdenado=0, ant;

    for(int i=1; i<=3; i++)
    {
        impar=totalGrupo=0;
        pos=0;
        cout << "********GRUPO "<< i << "**********" << endl;
        cout << "Ingrese un numero: ";
        cin >> num;

        while(num!=0)
        {
            //PUNTO A
            totalGrupo++;
            if(num%2!=0&&num>0)
            {
                impar++;
            }
            //PUNTO B
            pos++;
            div=0;
            for(int x=1;x<=num;x++){
                if(num%x==0){
                    div++;
                }
            }
            if(div==2){
                ulti=num;
                posicion=pos;
            }

            //PUNTO C
            if(pri){
                ant=num;
                pri=false;
            }
            else if(num>ant){
                ant=num;
            }
            else{
                desordenado=true;
            }


            cout << "Ingrese un numero: ";
            cin >> num;
        }
        //PUNTO A
        porImpar=(float)impar*100/totalGrupo;
        if(i==1)
        {
            porMaxi=porImpar;
            grupoMaxi=i;
        }
        else if(porImpar>porMaxi)
        {
            porMaxi=porImpar;
            grupoMaxi=i;
        }
        //PUNTO A
        cout << "PORCENTAJE DE IMPARTE EN ESTE GRUPO: " << porImpar << endl;
        //PUNTO B
        if(ulti!=0){
            cout << "ULTIMO PRIMO: " << ulti << endl;
            cout << "POSICION: " << posicion << endl;
        //PUNTO C
        if(desordenado==false){
            grupoOrdenado++;
        }
        }
        else{
            cout << "NO HUBO PRIMOS EN ESTE GRUPO" << endl;
        }
    }
    cout << "GRUPO CON MAYOR PORCENTAJE DE IMPARES: " << grupoMaxi << endl;

    cout << "CANTIDAD DE GRUPOS ORDENADOS: " << grupoOrdenado << endl;
    return 0;
}
