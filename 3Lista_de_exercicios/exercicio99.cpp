#include <iostream>
using namespace std;


unsigned long long fatorial(int n) {
    unsigned long long resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int numero;

    while (true) {
        cout << "Digite um número inteiro (menor que 1 para sair): ";
        cin >> numero;

        if (numero < 1) {
            cout << "Encerrando o programa." << endl;
            break;
        }

        cout << "Fatorial de " << numero << " = " << fatorial(numero) << endl;
    }

    return 0;
}