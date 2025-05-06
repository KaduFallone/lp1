#include <iostream>
using namespace std;

int main() {
    int quantidade, numero, maior;

    cout << "Quantos números deseja digitar? ";
    cin >> quantidade;

    cout << "Digite o 1º número: ";
    cin >> numero;
    maior = numero; 

    for (int i = 2; i <= quantidade; i++) {
        cout << "Digite o " << i << "º número: ";
        cin >> numero;

        if (numero > maior) {
            maior = numero;
        }
    }

    cout << "O maior número digitado foi: " << maior << endl;

    return 0;
}