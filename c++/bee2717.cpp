#include <iostream>
using namespace std;

int main() {

    int N, A, B;

    cin >> N;
    cin >> A >> B;

    if (A + B > N)
        cout << "Deixa para amanha!" << endl;
    else
        cout << "Farei hoje!" << endl;

    return 0;
}
