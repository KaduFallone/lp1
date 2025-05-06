#include <iostream>
using namespace std;

int main() {
    int termo1 = 1, termo2 = 1, proximo;

    cout << "Série de Fibonacci (10 primeiros termos):" << endl;
    cout << termo1 << " " << termo2 << endl;

    for (int i = 3; i <= 10; i++) {
        proximo = termo1 + termo2;
        cout << proximo;
        termo1 = termo2;
        termo2 = proximo;
    }

    cout << endl;
    return 0;
}