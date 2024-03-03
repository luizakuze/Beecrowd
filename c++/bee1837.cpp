#include <iostream>
// divisão euclidiana
// Por exemplo, se tiver -7 dividido por 3, a divisão inteira em C++ resultará em -2 e o resto será -1.
// No entanto, de acordo com o teorema da divisão euclidiana, queremos que o resto seja sempre não negativo, de 0 até o valor absoluto de b.
int main() {
    int a, b, q, r;

    std::cin >> a >> b;

    q = a / b;
    r = a % b;

    // se o resto for negativo, ajuste o quociente e o resto
    if (r < 0 && b > 0) {
        q--;
        r += b;
    } else if (r < 0 && b < 0) {
        q++;
        r -= b;
    }

    std::cout << q << ' ' << r << std::endl;
    return 0;
}
