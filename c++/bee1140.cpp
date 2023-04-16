#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string frase;
    while (getline(cin, frase)) {
        // Se a frase for igual a "*", encerra o programa
        if (frase == "*") {
            break;
        }
        
        // Obtém a primeira letra da primeira palavra
        char primeira_letra = tolower(frase[0]);
        bool eh_tautograma = true;
        
        istringstream ss(frase);
        string palavra;
        while (ss >> palavra) {
            // Obtém a primeira letra da palavra atual
            char letra_atual = tolower(palavra[0]);
            
            // Se a primeira letra for diferente da primeira letra da frase,
            // então não é um tautograma
            if (letra_atual != primeira_letra) {
                eh_tautograma = false;
                break;
            }
        }
        // Imprime 'Y' se for um tautograma, ou 'N' caso contrário
        cout << (eh_tautograma ? "Y" : "N") << endl;
    }
    return 0;
}
