#include <iostream>
#include <string>
using namespace std;

int main() {

    string str = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    int num;
    cin >> num;

    for (int i = 0; i < num; i++) {
        cout << str[i];
    }
    cout << endl;

    return 0;
}
