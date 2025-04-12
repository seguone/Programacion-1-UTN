#include <iostream>
using namespace std;

main(){
    int maxi, mini, ampli;

    cout << "Ingrese temperatura maxima: ";
    cin >> maxi;
    cout << "Ingrese temperatura minima: ";
    cin >> mini;

    ampli=maxi-mini;

    cout << "La amplitud termica es: " << ampli << endl;

    return 0;
}
