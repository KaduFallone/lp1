#include<iostream>
using namespace std;

int main(){
    int tam = 10;
    int CodeClient[tam];
    int telefone[tam];
    string endereco[tam];

    for(int i = 0; i < 10; i ++){
        cout << "Registre as seguintes informações\n codigo do cliente\n";
        cin >> CodeClient[i];
        cout << "Telefone do cliente:\n";
        cin >> telefone[i];
        cout << "Endereço do cliente\n";
        cin >> endereco[i];

        cin.ignore();
    }

    int ChecarCodigo;
    cout << "Entre o codigo do cliente o qual quer checar\n";
    cin >> ChecarCodigo;

    if(CodeClient[tam] == ChecarCodigo){
        cout << "CODIGO \t TELEFONE\t ENDEREÇO\t" << endl;
        cout << CodeClient <<"\t"<< telefone <<"\t"<< endereco;
    }
    else{
        cout << "Codigo invalido";
    } 

    return 0;
}