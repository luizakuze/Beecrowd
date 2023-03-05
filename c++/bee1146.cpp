#include <iostream>

using namespace std;

int main()

{
    int num;

    while (true) {
        cin >> num;

        if (num == 0) {
            break;
        }

        else {
            for (int i = 1; i != num + 1; i++) {
                cout << i;
                if (i != num)
                    cout << ' ';
            }
            cout << endl;
        }
    }

    return 0;
}
