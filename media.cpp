/******************************************************************************

Calcular a média de k números.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()

{
    int numeros;
    int k;
    
    cout << "digite k";
    cin >> k; // quantidade de vezes que repete
    
    for(int cont = 0; cont<k; cont++){ // cont<k
        int media = numeros*cont/cont; 
        cout << "digite os numeros" << cont+1 << ": ";
        cin >> numeros;
        cout << media; 
         
        
    }

    return 0;
}
