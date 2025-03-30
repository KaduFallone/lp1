#include<iostream>
using namespace std;

int main(){
    double valor, taxa, temp, valorFin;

    cout << "Valor da prestação: \n" ;
    cin >> valor;
    cout << "Tempo em atraso(dias): \n";
    cin >> temp;
    cout << "Valor da taxa de atraso(%): \n";
    cin >> taxa;

    valorFin = valor + (valor*(taxa/100)*temp);

    cout << "O inquilino devera pagar: " << valorFin << " reais" << endl;
    
    return 0;
}