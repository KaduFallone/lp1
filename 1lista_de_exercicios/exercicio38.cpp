#include<iostream>
using namespace std;

int main(){
    double sal, salmin = 1518, quant_salmin;

    cout << "Insira o valor do seu salario: \n";
    cin >> sal;

    quant_salmin = sal/salmin;

    cout << "Seu salario equivale a " <<quant_salmin<< " salario(s) minimos" << endl;
    
    return 0;
}