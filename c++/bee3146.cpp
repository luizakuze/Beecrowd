#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float entrada;
    cin >> entrada;

    cout << fixed << setprecision(2) << 2*3.14*entrada << endl;

    return 0;
}
