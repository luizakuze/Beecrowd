#include <iostream>
using namespace std;

int main() {
    int n, x, y;

    cin >> n;

    for (int i = n; i > 0; i--) {
        cin >> x >> y;

        int sum = 0;
        for (int j = x; y > 0; j++) {
            if (j % 2 != 0) {
                sum += j;
                y--;
            }
        }

        cout << sum << endl;
    }

    return 0;
}
