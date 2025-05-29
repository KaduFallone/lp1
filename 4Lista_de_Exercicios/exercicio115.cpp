#include <iostream>
using namespace std;

int main() {
    const int TAM = 15;
    int codigos[TAM];
    float salarios[TAM];
    int opcao;
    bool dadosInseridos = false;

    do {
        cout << "\n=== MENU ===\n";
        cout << "1 - Inserir códigos e salários\n";
        cout << "2 - Ordenar por código (crescente)\n";
        cout << "3 - Listar todos\n";
        cout << "4 - Procurar por código\n";
        cout << "5 - Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        if (opcao == 1) {
            cout << "\n== Inserir dados ==" << endl;
            for (int i = 0; i < TAM; i++) {
                cout << "Pessoa " << i + 1 << " - Código: ";
                cin >> codigos[i];
                cout << "Pessoa " << i + 1 << " - Salário: ";
                cin >> salarios[i];
            }
            dadosInseridos = true;
            cout << "Dados inseridos com sucesso.\n";
        }

        else if (opcao == 2) {
            if (!dadosInseridos) {
                cout << "Insira os dados primeiro.\n";
            } else {
                // Bubble sort por código
                for (int i = 0; i < TAM - 1; i++) {
                    for (int j = 0; j < TAM - i - 1; j++) {
                        if (codigos[j] > codigos[j + 1]) {
                            // Trocar códigos
                            int tempCodigo = codigos[j];
                            codigos[j] = codigos[j + 1];
                            codigos[j + 1] = tempCodigo;

                            // Trocar salários também
                            float tempSalario = salarios[j];
                            salarios[j] = salarios[j + 1];
                            salarios[j + 1] = tempSalario;
                        }
                    }
                }
                cout << "Dados ordenados por código.\n";
            }
        }

        else if (opcao == 3) {
            if (!dadosInseridos) {
                cout << "Insira os dados primeiro.\n";
            } else {
                cout << "\n== Lista de Pessoas ==\n";
                for (int i = 0; i < TAM; i++) {
                    cout << "Código: " << codigos[i] << " | Salário: " << salarios[i] << endl;
                }
            }
        }

        else if (opcao == 4) {
            if (!dadosInseridos) {
                cout << "Insira os dados primeiro.\n";
            } else {
                int codigoBusca;
                bool encontrado = false;
                cout << "Digite o código para procurar: ";
                cin >> codigoBusca;

                for (int i = 0; i < TAM; i++) {
                    if (codigos[i] == codigoBusca) {
                        cout << "Código encontrado: " << codigos[i]
                             << " | Salário: " << salarios[i] << endl;
                        encontrado = true;
                        break;
                    }
                }

                if (!encontrado) {
                    cout << "Código não encontrado.\n";
                }
            }
        }

        else if (opcao == 5) {
            cout << "Encerrando o programa...\n";
        }

        else {
            cout << "Opção inválida. Tente novamente.\n";
        }

    } while (opcao != 5);

    return 0;
}
