#include<iostream>
using namespace std;


int main(){
    int dia=0, mes=0, ano=0;

    while (dia < 1 || dia > 31){
        cout << "Dia" << endl;
        cin >> dia;
        cout << endl;
    }
    while (mes < 1 || mes > 12){
        cout << "mes" << endl;
        cin >> mes;
        cout << endl;;
    }
    while (ano < 1900 || ano > 2100){
        cout << "ano" << endl;
        cin >> ano;
        cout << endl;   
    }

    if( (ano % 4 == 0 && ano % 100 > 0) || ( ano % 400 == 0)){
        cout << "data valida: " << dia << "/" << mes <<"/" << ano <<  " eh bissexto" << endl;
    }
    else{
        cout << "data valida: " << dia << dia <<"/"<< mes <<"/"<< ano << " nao eh bissexto" << endl;
    }

    return 0;

}