#include <iostream>
#include <string>

using namespace std;

int main() {
    int monica;
    int f1, f2, f3;

    cin >> monica;
    cin >> f1;
    cin >> f2;

    f3 = monica - (f1 + f2);
    
    if (f1 > f2 && f1 > f3) 
        cout << f1 << endl;
    else if (f2 > f1 && f2 > f3) 
        cout << f2 << endl;
    else
        cout << f3 << endl;

    return 0;
}
