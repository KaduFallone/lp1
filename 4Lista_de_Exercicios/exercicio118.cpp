#include <iostream>
using namespace std;

int main() {
    const int TAM = 20;
    int vetor[TAM];

    // Leitura dos elementos
    cout << "Digite 20 elementos para o vetor:\n";
    for (int i = 0; i < TAM; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vetor[i];
    }

    // Exibir vetor original
    cout << "\nVetor original:\n";
    for (int i = 0; i < TAM; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    // Trocar os elementos conforme descrito
    for (int i = 0; i < TAM / 2; i++) {
        int temp = vetor[i];
        vetor[i] = vetor[TAM - 1 - i];
        vetor[TAM - 1 - i] = temp;
    }

    // Exibir vetor após as trocas
    cout << "\nVetor após as trocas:\n";
    for (int i = 0; i < TAM; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
