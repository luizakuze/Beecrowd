#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int x, y;

    cin >> x >> y;

    if (x > 432 || x < 0 || y > 468 || y < 0) {
        cout << "fora" << endl;
    } else {
        cout << "dentro" << endl;
    }

    return 0;
}
