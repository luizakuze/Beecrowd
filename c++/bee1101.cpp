#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a , b;

    while (true) {

        cin >> a >> b;

        if (a <= 0 || b <= 0)
            break;

        int sum = 0;
        if (a > b) {
            for (int i = b; i < a+1; i++) {
                cout << i << ' ';
                sum+= i;
            }
            cout << "Sum=" << sum << endl;
        }

        if (b > a) {
            for (int i = a; i < b+1; i++) {
                cout << i << ' ';
                sum+= i;
            }
            cout << "Sum=" << sum << endl;
        }

    }

    return 0;
}
