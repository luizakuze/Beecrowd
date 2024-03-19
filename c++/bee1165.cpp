#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    while (N--) {
        int X;
        cin >> X;

        bool eh_primo = true;
        if (X <= 1) {
            eh_primo = false;
        } else {
            for (int i = 2; i * i <= X; i++) {
                if (X % i == 0) {
                    eh_primo = false;
                    break;
                }
            }
        }

        if (eh_primo) {
            cout << X << " eh primo" << endl;
        } else {
            cout << X << " nao eh primo" << endl;
        }
    }

    return 0;
}
