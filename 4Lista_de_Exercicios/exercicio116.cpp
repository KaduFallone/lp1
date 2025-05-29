#include <iostream>
#include <string>
using namespace std;

int main() {
    const int TAM = 50;
    string nomes[TAM];
    int milhagem[TAM];
    int totalCadastrados = 0;
    int opcao;

    bool milhagemCadastrada = false;

    do {
        cout << "\n=== MENU ===\n";
        cout << "1 - Cadastrar dados do cliente\n";
        cout << "2 - Cadastrar milhagem do cliente\n";
        cout << "3 - Listar todos os clientes e milhagem\n";
        cout << "4 - Exibir cliente com maior e menor milhagem\n";
        cout << "5 - Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        if (opcao == 1) {
            if (totalCadastrados >= TAM) {
                cout << "Limite de clientes atingido.\n";
            } else {
                cin.ignore(); // limpar buffer
                cout << "Digite o nome do cliente " << totalCadastrados + 1 << ": ";
                getline(cin, nomes[totalCadastrados]);
                milhagem[totalCadastrados] = 0; // inicializa com 0
                totalCadastrados++;
                cout << "Cliente cadastrado com sucesso.\n";
            }
        }

        else if (opcao == 2) {
            if (totalCadastrados == 0) {
                cout << "Nenhum cliente cadastrado.\n";
            } else {
                for (int i = 0; i < totalCadastrados; i++) {
                    cout << "Digite a milhagem do cliente " << nomes[i] << ": ";
                    cin >> milhagem[i];
                }
                milhagemCadastrada = true;
                cout << "Milhagem cadastrada com sucesso.\n";
            }
        }

        else if (opcao == 3) {
            if (totalCadastrados == 0) {
                cout << "Nenhum cliente cadastrado.\n";
            } else {
                cout << "\n== Lista de Clientes e Milhagem ==\n";
                for (int i = 0; i < totalCadastrados; i++) {
                    cout << "Cliente: " << nomes[i] << " | Milhagem: " << milhagem[i] << endl;
                }
            }
        }

        else if (opcao == 4) {
            if (!milhagemCadastrada) {
                cout << "Milhagem ainda não cadastrada.\n";
            } else {
                int maior = milhagem[0], menor = milhagem[0];
                string nomeMaior = nomes[0], nomeMenor = nomes[0];

                for (int i = 1; i < totalCadastrados; i++) {
                    if (milhagem[i] > maior) {
                        maior = milhagem[i];
                        nomeMaior = nomes[i];
                    }
                    if (milhagem[i] < menor) {
                        menor = milhagem[i];
                        nomeMenor = nomes[i];
                    }
                }

                cout << "\nCliente com maior milhagem: " << nomeMaior << " (" << maior << ")\n";
                cout << "Cliente com menor milhagem: " << nomeMenor << " (" << menor << ")\n";
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