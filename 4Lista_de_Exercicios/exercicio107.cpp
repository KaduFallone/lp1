#include <iostream>
using namespace std;

// Função para calcular o fatorial de um número
int fatorial(int n) {
    int fat = 1;
    for (int i = 2; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
    const int TAM = 10;
    int v[TAM], w[TAM];

    // Leitura do vetor v
    cout << "Digite 10 numeros inteiros nao-negativos:" << endl;
    for (int i = 0; i < TAM; i++) {
        cin >> v[i];

        // Verifica se o número é não-negativo
        while (v[i] < 0) {
            cout << "Numero invalido! Digite um numero nao-negativo: ";
            cin >> v[i];
        }
    }

    // Cálculo dos fatoriais e preenchimento do vetor w
    for (int i = 0; i < TAM; i++) {
        w[i] = fatorial(v[i]);
    }

    // Exibição dos resultados
    cout << "\nFatoriais dos elementos:" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << "fatorial(" << v[i] << ") = " << w[i] << endl;
    }

    return 0;
}