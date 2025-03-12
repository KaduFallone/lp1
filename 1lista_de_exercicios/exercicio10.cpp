#include<iostream>
using namespace std;

int main(){
    string nome, endereco, telefone;


    cout <<"Seu nome:\n";
    getline (cin, nome);
    cout << endl;

    cout << "Seu endereco:\n";
    getline (cin, endereco);
    cout << endl;

    cout <<"Seu telefone:\n";
    getline (cin, telefone);
    cout << endl;

    cout << "Seu formulario :" << endl << nome << endl << endereco << endl << telefone;



    return 0;
}