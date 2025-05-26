#include <iostream>
using namespace std;

int main() {
    int TAM = 20;
    int vetor[TAM];

    cout << "Digite 20 numeros inteiros:" << endl;
    for (int i = 0; i < TAM; i++) {
        cin >> vetor[i];
    }

    for (int i = 0; i < TAM / 2; i++) {
        int temp = vetor[i];
        vetor[i] = vetor[TAM - 1 - i];
        vetor[TAM - 1 - i] = temp;
    }

    cout << "\nVetor apos a troca dos elementos:" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}