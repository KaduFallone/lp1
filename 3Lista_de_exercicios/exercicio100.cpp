#include <iostream>
using namespace std;

int main() {
    int conta;
    float saldo;
    int totalContas = 0;
    int contasNegativas = 0;

    cout << "Digite o número da conta (negativo para sair):" << endl;

    while (true) {
        cout << "Número da conta: ";
        cin >> conta;

        if (conta < 0) {
            break;
        }

        cout << "Saldo: ";
        cin >> saldo;

        cout << "Conta: " << conta << " | Saldo: " << saldo << " | Situação: ";

        if (saldo >= 0) {
            cout << "Positivo" << endl;
        } else {
            cout << "Negativo" << endl;
            contasNegativas++;
        }

        totalContas++;
    }

    if (totalContas > 0) {
        float percentualNegativo = (contasNegativas * 100.0) / totalContas;
        cout << "\nPercentual de contas com saldo negativo: " 
             << percentualNegativo << "%" << endl;
    } else {
        cout << "Nenhuma conta foi processada." << endl;
    }

    return 0;
}