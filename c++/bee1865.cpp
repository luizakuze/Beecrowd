#include <iostream>
#include <string>

using namespace std;

int main(){

    int n_teste;
    cin >> n_teste;

    while (n_teste != 0){
        string nome; int forca;
        cin >> nome >> forca;

        if (nome != "Thor") cout << 'N' << endl;
        else cout << 'Y' << endl;


        n_teste--;
    }


    return 0;
}
