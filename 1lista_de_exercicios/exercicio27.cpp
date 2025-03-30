#include<iostream>
#include<cmath>
using namespace std;
//valor - ( valor *(porcentagem/100))
int main(){
    double valor, desconto, valorf;

    cout << "Valor do produto: \n";
    cin >> valor;
    cout << "desconto(%): \n";
    cin >> desconto;

    valorf = valor - (valor*(desconto/100));

    cout << "Valor final do produto eh: " << valorf << endl;
    
    return 0;
}