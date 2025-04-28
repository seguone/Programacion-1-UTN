#include <iostream>
using namespace std;

main()
{
    int div;
    for (int i=1; i<=1000; i++){
        div=0;
        for(int x=1; x<=i; x++){
            if(i%x==0){
                div++;
            }
        }
        if(div==2){
            cout << i << endl;
        }
    }
    return 0;
}
