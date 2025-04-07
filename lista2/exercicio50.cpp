#include<iostream>
using namespace std;

int main(){
    double salario, prestacao_requerida, prestacao_maxima;

    cout << "Valor do seu salario: \n";
    cin >> salario;

    cout << "Valor da prestaçao:  \n";
    cin >> prestacao_requerida;

    prestacao_maxima = salario + ( salario * 0.30);

    if (prestacao_requerida > prestacao_maxima){
        cout << "Requerimento de prestaçao negado" << endl;
    }
    else{
       cout << "Requerimento de prestaçao aceito" << endl;
    }

    return 0;
}