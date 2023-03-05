#include <iostream>
#include <string>

using namespace std;

int main()

{
    string entrada;
    int qt_leds = 0, N;

    cin >> N;

    while (N > 0) {
        cin >> entrada;

        for (char & dado: entrada) {
            if (dado == '0') qt_leds+= 6;
            else if (dado == '1') qt_leds += 2;
            else if (dado == '2') qt_leds += 5;
            else if (dado == '3') qt_leds += 5;
            else if (dado == '4') qt_leds += 4;
            else if (dado == '5') qt_leds += 5;
            else if (dado == '6') qt_leds += 6;
            else if (dado == '7') qt_leds += 3;
            else if (dado == '8') qt_leds += 7;
            else if (dado == '9') qt_leds += 6;
        }

        cout << qt_leds <<  " leds" << endl;
        qt_leds = 0;

        N--;
    }

    return 0;
}
