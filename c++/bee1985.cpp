#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float total = 0;
    int N;

    cin >> N;
    for (int i = N; N != 0; N--) {
        int opcao, qt;

        cin >> opcao >> qt;

        switch (opcao){
            case 1001:
                total += 1.50 * qt;
                break;
            case 1002:
                total += 2.50 * qt;
                break;
            case 1003:
                total += 3.50 * qt;
                break;
            case 1004:
                total += 4.50 * qt;
                break;
            case 1005:
                total += 5.50 * qt;
                break;
        }
    }

    cout << fixed << setprecision(2) << total << endl;

    return 0;
}
