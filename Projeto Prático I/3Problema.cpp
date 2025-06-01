#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; 
    cout << "Digite o número de alunos: ";
    cin >> n;

    vector<int> votos(n + 1, 0); 

    cout << "Digite os " << n << " votos dos alunos (números de 1 a " << n << "):" << endl;

    for (int i = 0; i < n; i++) {
        int voto;
        cin >> voto;
        if (voto >= 1 && voto <= n) {
            votos[voto]++;
        } else {
            cout << "Voto inválido: " << voto << " (Ignorado)" << endl;
        }
    }

    int representante = 0, vice = 0;
    int maxVotos = -1, segundoMaxVotos = -1;

    for (int i = 1; i <= n; i++) {
        if (votos[i] > maxVotos) {
            vice = representante;
            segundoMaxVotos = maxVotos;

            representante = i;
            maxVotos = votos[i];
        } else if (votos[i] > segundoMaxVotos) {
            vice = i;
            segundoMaxVotos = votos[i];
        }
    }

    cout << "Representante da turma será o aluno " << representante
         << ", que obteve " << maxVotos << " votos." << endl;

    cout << "Vice-representante será o aluno " << vice
         << ", que obteve " << segundoMaxVotos << " votos." << endl;

    return 0;
}