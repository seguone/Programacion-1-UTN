#include <iostream>
using namespace std;

int main(){

    int num;

    //PUNTO A
    bool pri=true;
    int maxi, mini;

    //PUNTO B
    int div, consecutivos, grupo=0;
    bool huboDosPrimosConsecutivos;

    //PUNTO C
    int contPositivo, contNegativo,grupoAlternado=0;
    bool noAlternado;

    for(int i=1; i<=3; i++){

            cout << "Ingrese un numero: ";
            cin >> num;
            //PUNTO A
            maxi=mini=0;
            pri=true;
            //PUNTO B
            consecutivos = 0;
            huboDosPrimosConsecutivos = false;
            //PUNTO C
            noAlternado=false;
            contNegativo=0;
            contPositivo=0;

        while(num!=0){
            //PUNTO A
            if(num%2==0){
                if(pri){
                    maxi=num;
                    mini=num;
                    pri=false;
                }
                else if(num>maxi){
                    maxi=num;
                }
                else if(num<mini){
                    mini=num;
                }
            }
            //PUNTO B
            div=0;
            for(int x=1; x<=num; x++){
                if(num%x==0){
                    div++;
                }
            }
            if(div==2){

                consecutivos++;

                if(consecutivos==2){
                    huboDosPrimosConsecutivos=true;
                }
            }
            else{
                consecutivos=0;
            }
            //PUNTO C
            if(num>0){
                contPositivo++;
                contNegativo=0;
            }
            else{
                contNegativo++;
                contPositivo=0;
            }
            if(contNegativo==2||contPositivo==2){
                noAlternado=true;
            }

            cout << "Ingrese un numero: ";
            cin >> num;
        }
        //PUNTO A
        cout << endl;
        cout << "MAXIMO PAR DEL GRUPO " << i << ":" << maxi << endl;
        cout << "MINIMO PAR DEL GRUPO " << i << ":" << mini << endl;
        cout << endl;
        //PUNTO B
        if (huboDosPrimosConsecutivos) {
        grupo++;
        }
        //PUNTO C
        if(!noAlternado){
            grupoAlternado++;
        }
    }

    cout << "CANTIDAD DE GRUPOS CON 2 NUMEROS PRIMOS CONSECUTIVOS: " << grupo << endl;
    cout << "CANTIDAD DE GRUPOS CON NUMEROS ALTERNADOS: " << grupoAlternado << endl;

return 0;
}
