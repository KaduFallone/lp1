#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double valor_acumulado, aplic_mensal, num_mes, juros;

    cout << "De o valor da sua aplicacao mensal: \n";
    cin >> aplic_mensal;
    cout << "De o numero de meses da aplicacao: \n";
    cin >> num_mes;
    cout << "De a taxa de juros: \n";
    cin >> juros;

    valor_acumulado = aplic_mensal* ((pow(1+juros, num_mes) -1)/juros);

    cout << "O valor acumulado nessa aplicacao sera de: " << valor_acumulado << " reias" << endl;

    return 0;
}