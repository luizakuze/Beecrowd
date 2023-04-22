#include <iostream>
#include <string>

using namespace std;

int main() {
    string a,b;

    cin >> a;
    cin >> b;

    if (a.size() >= b.size())
        cout << "go" << endl;
    else
        cout << "no" << endl;

    return 0;
}
