#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> byte;

    for (int i = 0; i < 8; i++) {
        int bit;
        cin >> bit;
        byte.push_back(bit);
    }

    for (auto & bit: byte) {
        if (bit == 9) {
            cout << 'F' << endl;
            return 0;
        }
    }

    cout << 'S' << endl;

    return 0;
}
