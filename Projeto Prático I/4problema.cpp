#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    const int MAX_ALUNOS = 50;
    const int NUM_PROVAS = 5;

    int numAlunos;
    string nomes[MAX_ALUNOS];
    int notas[MAX_ALUNOS][NUM_PROVAS];
    int somas[MAX_ALUNOS];

    cout << "Quantos alunos tem a turma? ";
    cin >> numAlunos;
    cin.ignore(); 

    if (numAlunos > MAX_ALUNOS || numAlunos <= 0) {
        cout << "Número inválido de alunos (1 a 50 permitido)." << endl;
        return 1;
    }

    cout << "Escreva os nomes dos alunos (1 por linha):" << endl;
    for (int i = 0; i < numAlunos; i++) {
        getline(cin, nomes[i]);
    }

    for (int i = 0; i < numAlunos; i++) {
        cout << "Escreva as notas do aluno " << nomes[i] << ": ";
        somas[i] = 0;
        for (int j = 0; j < NUM_PROVAS; j++) {
            cin >> notas[i][j];
            somas[i] += notas[i][j];
        }
    }

   
    cout << "\n=== Diário da Turma ===" << endl;
    cout << left << setw(15) << "Nome" << setw(12) << "Nota Total" << "Situacao" << endl;
    cout << "-------------------------------" << endl;

    for (int i = 0; i < numAlunos; i++) {
        string situacao;
        if (somas[i] >= 60)
            situacao = "Aprovado";
        else if (somas[i] < 40)
            situacao = "Reprovado";
        else
            situacao = "Recuperacao";

        cout << left << setw(15) << nomes[i]
             << setw(12) << somas[i]
             << situacao << endl;
    }

    return 0;
}
