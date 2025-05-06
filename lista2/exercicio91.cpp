#include <iostream>
using namespace std;

int main() {
    int multiplicando, multiplicador, produto = 0;

    cout << "Digite o multiplicando (menor número): ";
    cin >> multiplicando;

    cout << "Digite o multiplicador (maior número): ";
    cin >> multiplicador;

    if (multiplicando < 0 || multiplicador < 0 || multiplicando > multiplicador) {
        cout << "Valores inválidos! Certifique-se de que ambos são positivos e o multiplicando é menor que o multiplicador." << endl;
        return 0;
    }

    for (int i = 1; i <= multiplicador; i++) {
        produto += multiplicando;
    }

    cout << "O produto de " << multiplicando << " x " << multiplicador << " é: " << produto << endl;

    return 0;
}