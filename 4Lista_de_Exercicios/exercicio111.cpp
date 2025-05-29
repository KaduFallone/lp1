#include <iostream>
#include <algorithm> // Para sort
using namespace std;

int main() {
    const int TAM = 25;
    int A[TAM], B[TAM], V[2 * TAM];

    // Leitura do vetor A
    cout << "Digite 25 elementos para o vetor A:\n";
    for (int i = 0; i < TAM; i++) {
        cin >> A[i];
    }

    // Leitura do vetor B
    cout << "Digite 25 elementos para o vetor B:\n";
    for (int i = 0; i < TAM; i++) {
        cin >> B[i];
    }

    // Intercalação dos vetores A e B no vetor V
    int k = 0;
    for (int i = 0; i < TAM; i++) {
        V[k++] = A[i];
        V[k++] = B[i];
    }

    // Ordenação decrescente
    sort(V, V + 2 * TAM, greater<int>());

    // Exibição do vetor V
    cout << "\nVetor V (intercalado e ordenado de forma decrescente):\n";
    for (int i = 0; i < 2 * TAM; i++) {
        cout << V[i] << " ";
    }

    cout << endl;
    return 0;
}