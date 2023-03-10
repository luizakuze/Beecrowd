#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N, num2, i = 1;

    cin >> N;

    while (N != 0) {
        cin >> num2;

        cout << "resposta " << i << ": " << num2 << endl;

        i++;
        N--;
    }
}
