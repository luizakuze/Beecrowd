#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double A, B, C;

    cin >> A;
    cin >> B;
    cin >> C;

    cout << fixed << setprecision(1);
    cout << "MEDIA = " << ((A * 2) + (B * 3) + (C * 5)) / 10.0 << endl;
    return 0;
}
