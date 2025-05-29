#include <iostream>
#include <string>
using namespace std;

int main() {
    const int TAM = 40;
    string nomes[TAM];
    int quantidades[TAM];
    float precos[TAM];
    int totalCadastradas = 0;
    int opcao;

    do {
        cout << "\n=== MENU ESTOQUE ===\n";
        cout << "1 - Cadastrar mercadorias\n";
        cout << "2 - Exibir valor total em mercadorias\n";
        cout << "3 - Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        if (opcao == 1) {
            if (totalCadastradas >= TAM) {
                cout << "Limite máximo de mercadorias atingido!\n";
            } else {
                cin.ignore(); // Limpa o buffer antes do getline
                cout << "Digite o nome da mercadoria: ";
                getline(cin, nomes[totalCadastradas]);

                cout << "Digite a quantidade em estoque: ";
                cin >> quantidades[totalCadastradas];

                cout << "Digite o preço unitário: ";
                cin >> precos[totalCadastradas];

                totalCadastradas++;
                cout << "Mercadoria cadastrada com sucesso.\n";
            }
        }

        else if (opcao == 2) {
            if (totalCadastradas == 0) {
                cout << "Nenhuma mercadoria cadastrada.\n";
            } else {
                float total = 0;
                for (int i = 0; i < totalCadastradas; i++) {
                    total += quantidades[i] * precos[i];
                }
                cout << "Valor total em mercadorias: R$ " << total << endl;
            }
        }

        else if (opcao == 3) {
            cout << "Encerrando o programa...\n";
        }

        else {
            cout << "Opção inválida. Tente novamente.\n";
        }

    } while (opcao != 3);

    return 0;
}