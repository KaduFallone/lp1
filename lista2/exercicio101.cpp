#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Digite números de 4 algarismos (9999 para sair):" << endl;

    while (true) {
        cin >> numero;

        if (numero == 9999) {
            cout << "Programa encerrado." << endl;
            break;
        }

        if (numero < 1000 || numero > 9999) {
            cout << "Número inválido. Digite um número com 4 algarismos." << endl;
            continue;
        }

        int parte1 = numero / 100;      
        int parte2 = numero % 100;      

        int soma = parte1 + parte2;

        if (soma * soma == numero) {
            cout << numero << " possui a característica!" << endl;
        } else {
            cout << numero << " não possui a característica." << endl;
        }
    }

    return 0;
}