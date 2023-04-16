#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    float S = 0;

    for (int i = 1, j = 1; i <= 39;) {
        S += (float) i/j;
        i+= 2;
        j*= 2;
    }

    cout << fixed << setprecision(2) << S << endl;

    return 0;
}
