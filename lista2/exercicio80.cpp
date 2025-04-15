#include<iostream>
#include<string>
using namespace std;

int main(){
    double eleitores_validos, votos_do_mais_votado;
    string nome_cidade;

    cout << "Nome da cidade: \n";
    getline(cin, nome_cidade);

    cout << "Numero de eleitores validos: \n";
    cin >> eleitores_validos;

    cout << "Quantidade de votos do priemiro lugar do primeiro turno: \n";
    cin >> votos_do_mais_votado;

    if (eleitores_validos > 20000 && votos_do_mais_votado > eleitores_validos * 0.50){
        cout << "Havera segundo tunro na cidade de " << nome_cidade << endl;
    }
    else{
        cout << "Nao havera segundo turno" << endl;
    }

    return 0;
}