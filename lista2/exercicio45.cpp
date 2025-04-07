#include<iostream>
using namespace std;

int main(){
    double num1, num2, soma;

    cout << "Escolha dois numeros: \n";
    cin >> num1;
    cin >> num2;

    soma = num1+num2;
    if (soma > 20){
        cout << "O resultado final eh: " << soma+8;
    }
    else if (soma <=20){
        cout << "O resultado final eh: " << soma-5;
    }

    return 0;
}