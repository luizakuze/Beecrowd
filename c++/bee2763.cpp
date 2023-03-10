#include <iostream>
#include <string>

using namespace std;

int main()
{
    string cpf;

    getline (cin, cpf);

    string pt1, pt2, pt3, pt4; // partes cpf

    cout << cpf.substr(0,3) << endl;
    cout << cpf.substr(4, 3) << endl;
    cout << cpf.substr(8, 3) << endl;
    cout << cpf.substr(12, 2) << endl;
    
    return 0;
}
