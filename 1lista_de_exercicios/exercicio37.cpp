#include<iostream>
using namespace std;

int main(){
    double deposito, juros, valor_total;

    cout << "Qual o valor do seu deposito: \n";
    cin >> deposito;

    cout << "Qual o valor do juros do seu deposito(%): \n";
    cin >> juros;

    valor_total = deposito + (deposito*juros/100);

    cout << "O valor final sera de: " << valor_total << "reias" << endl;

    return 0;
}