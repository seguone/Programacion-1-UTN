#include <iostream>
using namespace std;

int main() {
    int i;
    int encontrados=0;
    i=1;

    while(encontrados<=1000){
        if(i%6!=0){
            if(i%15==0&&i%3==0){
                cout << i << endl;
                encontrados++;
            }
        }
    i++;
    }

    return 0;
}
