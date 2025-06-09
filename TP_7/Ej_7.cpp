#include <iostream>
using namespace std;

int main(){
    int vec[10];


    for(int i=0; i<10; i++){
        if(i%2==0){
            vec[i]=1;
        }
        else{
            vec[i]=0;
        }
    }

    for(int i=0; i<10; i++){
        cout << vec[i] << " " ;
    }

    return 0;
}
