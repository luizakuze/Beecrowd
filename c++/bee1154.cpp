#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int idade, soma_idades = 0, qt_pessoas = 0;
    float media;

    // Define a precisão de duas casas decimais para média
    cout << fixed << setprecision(2);

    while (true) {
        cin >> idade;

        if (idade < 0)
            break;

        soma_idades += idade;
        qt_pessoas++;
    }

    media = (float) soma_idades / qt_pessoas;

    cout << soma_idades / qt_pessoas << endl;

    return 0;
}
