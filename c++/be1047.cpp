#include <iostream>

using namespace std;

int main()
{
    int h_inicial, h_final, min_inicial, min_final, h_total, min_total;
    
    cin >> h_inicial >> min_inicial >> h_final >> min_final;


    h_total = h_final - h_inicial;
    min_total = min_final - min_inicial;

    if ((h_total <= 0) && (min_total <= 0)) 
        h_total += 24;
    
    if(min_total < 0){
        min_total += 60;
        h_total--;
    }
    
    cout << "O JOGO DUROU " << h_total << " HORA(S) E " << min_total << " MINUTO(S)\n";

    return 0;
}
