#include<iostream>
using namespace std;

int main(){
    double valor, gorjeta, valorf;
    
    cout << "Insira o valor gasto pelo cliente: ";
    cin >> valor;

    gorjeta = valor * 10/100;
    valorf = valor + gorjeta;

    cout << "O valor final a ser pago pelo cliente eh: " << valorf;

    return 0;

}