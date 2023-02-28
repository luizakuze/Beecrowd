#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Array de strings
    string musicas[] = {"PROXYCITY", "P.Y.N.G.", "DNSUEY!", "SERVERS", "HOST!","CRIPTONIZE",
                        "OFFLINE DAY", "SALT", "ANSWER!", "RAR?", "WIFI ANTENNAS"};
    
    int num_musicas;
    
    cin >> num_musicas;

    while (num_musicas--){
        int num1, num2;

        cin >> num1;
        cin >> num2;
        
        int pos = num1 + num2;
        
        cout << musicas[po] << endl;
    }

    return 0;
}
