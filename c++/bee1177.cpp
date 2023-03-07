#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 0, j = 0; i < 1000; i ++, j++) {

        if (j >= T) j = 0;
        cout << "N[" << i << "] = " << j << endl;
    }

    return 0;
}
