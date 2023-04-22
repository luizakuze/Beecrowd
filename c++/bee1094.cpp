#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;

    int c = 0, s = 0, r = 0, total = 0;
    for (int i = n; i != 0; i--) {
        int num; char tipo;
        cin >> num >> tipo;

        if (tipo == 'R')
            r+= num;
        else if (tipo == 'S')
            s+= num;
        else
            c+= num;

        total+= num;
    }

    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << c << endl;
    cout << "Total de ratos: " << r << endl;
    cout << "Total de sapos: " << s << endl;
    cout << "Percentual de coelhos: " << fixed << setprecision(2) << (c * 100.0)/total << " %" << endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2) << (r * 100.0)/total << " %" << endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2) << (s * 100.0)/total << " %" << endl;

    return 0;
}
