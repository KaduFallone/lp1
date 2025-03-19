#include<iostream>
using namespace std;

int main (){
    double salario;
    double qw;
    double ValorQw;
    double ValosASerPago;
    double desconto;
    double ValorFinal;

    cout << "Entre o salario minimo: \n";
    cin >> salario;
    cout << endl;
    cout << "Digite o Quilowatt(s) gasto: \n ";
    cin >> qw;

    ValorQw = salario/7;
    ValosASerPago = ValorQw*qw;
    desconto = ValosASerPago * 0.10;
    ValorFinal = ValosASerPago - desconto;
    

    cout << "Voce devera pagar: " << ValorFinal << endl;
    

    return 0;    
}