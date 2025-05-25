#include <iostream>
using namespace std;

int main()
{
    int num;
    //PUNTO A
    int totalGrupo, acuGrupo;
    float proGrupo;
    //PUNTO B
    int minimo,posicion, grupo, pos;
    bool pri=true;
    //PUNTO C
    int mayorPro, mayorGrupo;
    bool mayor=true;

    for(int i=1; i<=3; i++){
        cout << "Ingrese un numero: ";
        cin >> num;
        //PUNTO A
        totalGrupo=acuGrupo=pos=0;

        while(num!=0){
            //PUNTO A
            totalGrupo++;
            acuGrupo+=num;
            //PUNTO B
            pos++;
            if(pri){
                grupo=i;
                minimo=num;
                posicion=pos;
                pri=false;
            }
            else if(num<minimo){
                grupo=i;
                minimo=num;
                posicion=pos;
            }

            cout << "Ingrese un numero: ";
            cin >> num;
        }
        //PUNTO A
        proGrupo= (float)acuGrupo/totalGrupo;
        cout << "PROMEDIO DEL GRUPO " << i << " : " << proGrupo << endl;
        //PUNTO C
        if(mayor){
            mayorPro=proGrupo;
            mayorGrupo=i;
            mayor=false;
        }
        else if(proGrupo>mayorPro){
            mayorPro=proGrupo;
            mayorGrupo=i;
        }

    }
    //PUNTO B
    cout << "GRUPO: " << grupo << endl;
    cout << "MINIMO: " << minimo << endl;
    cout << "POSICION: " << posicion << endl;
    //PUNTO C
    cout << "EL MAYOR PROMEDIO ES " << mayorPro << " DEL GRUPO " << mayorGrupo << endl;

return 0;
}
