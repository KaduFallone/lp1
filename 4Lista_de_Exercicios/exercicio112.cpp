#include <iostream>
using namespace std;

int main() {
    const int TAM = 10;
    int vetor[TAM];

    cout << "Digite " << TAM << " números:\n";
    for (int i = 0; i < TAM; i++) {
        cin >> vetor[i];
    }

    // Bubble Sort decrescente
    for (int i = 0; i < TAM - 1; i++) {
        for (int j = 0; j < TAM - 1 - i; j++) {
            if (vetor[j] < vetor[j + 1]) {
                // troca se o elemento da esquerda for menor que o da direita
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    // Mostrar vetor ordenado
    cout << "\nVetor ordenado em ordem decrescente:\n";
    for (int i = 0; i < TAM; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}