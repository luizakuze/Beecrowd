#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num, horas; float valor_hora;

    cin >> num;
    cin >> horas;
    cin >> valor_hora;

    cout << "NUMBER = " << num << endl;
    cout << fixed << setprecision(2);
    cout << "SALARY = U$ " << horas * valor_hora << endl;

    return 0;
}
