#include <iostream>
using namespace std;

int main() {
    int A[10], B[10];

    // Leitura dos valores do vetor A
    cout << "Digite 10 valores para o vetor A:\n";
    for (int i = 0; i < 10; i++) {
        cin >> A[i];
    }

    // Construção do vetor B
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            B[i] = A[i] * 3;  // Índice par
        } else {
            B[i] = A[i] / 2;  // Índice ímpar
        }
    }

    // Exibição dos vetores
    cout << "\nVetor A: ";
    for (int i = 0; i < 10; i++) {
        cout << A[i] << " ";
    }

    cout << "\nVetor B: ";
    for (int i = 0; i < 10; i++) {
        cout << B[i] << " ";
    }

    cout << endl;
    return 0;
}