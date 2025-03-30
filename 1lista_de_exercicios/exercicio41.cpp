#include<iostream>
using namespace std;

int main(){
    int fita;
    double valor_aluguel;

    cout << "Quantidade de fitas existentes na locadora: " << endl;
    cin >> fita;
    cout << "Valor do aluguel da fita: " << endl;
    cin >> valor_aluguel;

//  A)  
    int alug_pmes = fita/3;
    double faturamento_anual= alug_pmes*valor_aluguel*12;
    cout << "Seu faturamento anual eh de: " << faturamento_anual << endl;

//  B)
    //fitas atrasadas:
    int fita_atrasadas_mes = alug_pmes*0.10;
    double valor_fita_atrasada =valor_aluguel+(valor_aluguel*0.10);
    double valorT_fitas_atrasadas_mes = fita_atrasadas_mes*valor_fita_atrasada;
    //fitas em dia:
    int fitas_em_dia = alug_pmes*9.90;
    double valorT_fitas_em_dia = fitas_em_dia*valor_aluguel;
    //faturamento mensal
    double fat_mensal =valorT_fitas_em_dia+valorT_fitas_atrasadas_mes;
    cout << "Seu faturamento mensal eh: " << fat_mensal << endl ;

//  c)
    int fitas_ruim = fita*0.02;
    int fitas_compradas = fita*0.10;
    int fitas_final_do_ano = fita - fitas_ruim + fitas_compradas;
    cout <<  "No final do ano voce tera: " << fitas_final_do_ano << " fitas" << endl;



    return 0;


}