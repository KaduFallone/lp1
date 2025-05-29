#include <iostream>
#include <string>
using namespace std;

int main() {
    const int TOTAL_ALUNOS = 50;
    string nomes[TOTAL_ALUNOS];
    float nota1[TOTAL_ALUNOS];
    float nota2[TOTAL_ALUNOS];
    float media[TOTAL_ALUNOS];
    int opcao;
    bool nomesDigitados = false;
    bool nota1Digitada = false;
    bool nota2Digitada = false;
    bool mediaCalculada = false;

    do {
        cout << "\n=== MENU ===\n";
        cout << "1 - Digitar os nomes\n";
        cout << "2 - Digitar 1ª nota\n";
        cout << "3 - Digitar 2ª nota\n";
        cout << "4 - Calcular média\n";
        cout << "5 - Exibir informações\n";
        cout << "6 - Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        if (opcao == 1) {
            cout << "\n== Digite os nomes dos 50 alunos ==" << endl;
            cin.ignore(); // Limpar buffer
            for (int i = 0; i < TOTAL_ALUNOS; i++) {
                cout << "Aluno " << i + 1 << " - Nome: ";
                getline(cin, nomes[i]);
            }
            nomesDigitados = true;
        }

        else if (opcao == 2) {
            if (!nomesDigitados) {
                cout << "Você precisa digitar os nomes primeiro.\n";
            } else {
                for (int i = 0; i < TOTAL_ALUNOS; i++) {
                    cout << "Aluno " << i + 1 << " (" << nomes[i] << ") - Nota 1: ";
                    cin >> nota1[i];
                }
                nota1Digitada = true;
            }
        }

        else if (opcao == 3) {
            if (!nomesDigitados) {
                cout << "Você precisa digitar os nomes primeiro.\n";
            } else {
                for (int i = 0; i < TOTAL_ALUNOS; i++) {
                    cout << "Aluno " << i + 1 << " (" << nomes[i] << ") - Nota 2: ";
                    cin >> nota2[i];
                }
                nota2Digitada = true;
            }
        }

        else if (opcao == 4) {
            if (!nota1Digitada || !nota2Digitada) {
                cout << "Você precisa digitar as duas notas primeiro.\n";
            } else {
                for (int i = 0; i < TOTAL_ALUNOS; i++) {
                    media[i] = (nota1[i] * 3 + nota2[i] * 7) / 10;
                }
                mediaCalculada = true;
                cout << "\nMédias calculadas com sucesso.\n";
            }
        }

        else if (opcao == 5) {
            if (!mediaCalculada) {
                cout << "Você precisa calcular as médias primeiro.\n";
            } else {
                cout << "\n== Informações dos Alunos ==\n";
                for (int i = 0; i < TOTAL_ALUNOS; i++) {
                    cout << "Aluno: " << nomes[i]
                         << " | Nota 1: " << nota1[i]
                         << " | Nota 2: " << nota2[i]
                         << " | Média: " << media[i] << endl;
                }
            }
        }

        else if (opcao == 6) {
            cout << "Encerrando o programa...\n";
        }

        else {
            cout << "Opção inválida. Tente novamente.\n";
        }

    } while (opcao != 6);

    return 0;
}
