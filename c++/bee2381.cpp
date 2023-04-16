#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<string> nomes(n);

    for (int i = 0; i < n; i++) {
        cin >> nomes[i];
    }
    
    sort(nomes.begin(), nomes.end());

    cout << nomes[k-1] << endl;

    return 0;
}
