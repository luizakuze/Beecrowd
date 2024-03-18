#include <iostream>

using namespace std;

int main() {

    int n, r;
    while (cin >> n) {

        if (!n)
            exit(0);

        r = 1;
        for (int i = 2; i <= n; i++)
            r += i*i;

        cout << r << endl;
    }

    return 0;
}
