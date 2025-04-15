#include<iostream>
using namespace std;

int main(){
    double salario, desconto;

    cout << "Declare seu salario: \n";
    cin >> salario;

    if (salario <= 600){
        cout << "Voce esta isento do INSS" << endl;
        cout << "Salario final: " << salario << endl;
    }
    else if (salario > 600 && salario <= 1200){
        desconto = salario * 0.20;
        cout << "Seu desconto do INSS sera de: " << desconto << endl;
        cout << "Salario final: " << salario - desconto;
    }
    else if (salario > 1200 && salario <= 2000){
        desconto = salario * 0.25;
        cout << "Seu desconto do INSS sera de: " << desconto << endl;
        cout << "Seu salario final sera de: " << salario - desconto << endl;
    }
    else{
        desconto = salario * 0.30;
        cout << "Seu desconto do INSS sera de: " << desconto << endl;
        cout << "Seu salario final sera de: " << salario - desconto << endl;
    }

    return 0;
}