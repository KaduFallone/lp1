#include<iostream>
using namespace std;


int main(){
    int conta, contaInvert, resultado, digitoverificador;

    cout <<"Digite o numero da conta(3DIGITOS): " << endl;
    cin >> conta;

    contaInvert = (conta % 10) * 100 + ((conta/100) % 10) * 10 + (conta/ 100);
    resultado = conta * contaInvert;

    digitoverificador = 0;
    while (resultado > 0){
        digitoverificador += resultado % 10;
        resultado /= 10;
    }

    cout << "Digito verificador: " << digitoverificador << endl;

    return 0;

}