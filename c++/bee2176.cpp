#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {

    string entrada;
    cin >> entrada;

    int num1 = 0;
    for (int i = 0; i < entrada.size(); i++) {
        if (entrada[i] == '1')
            num1++;
    }

    if (num1 % 2)
        cout << entrada + '1';
    else
        cout << entrada + '0';
    cout << endl;

    return 0;
}
