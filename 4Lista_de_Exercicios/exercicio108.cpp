#include <iostream>
#include <vector>

using namespace std;

int main(){
    int tam = 20;
    int NumeroCheque[tam];
    float ValorCheque[tam];
    string Destino[tam];

    for(int i = 0; i < tam; i ++){
        cout << "Entre o numro do cheque " << i+1 << " :";
        cin >> NumeroCheque[i];
        cout << "Entre o valor do chque " << i+1 << " :";
        cin >> ValorCheque[i];
        cout << "Entre o destino do cheque(SEM ESPAÇOS) " << i+1 << " :";
        cin >> Destino[i];
        cout << endl;
    }

    cout << "RELATORIO DOS CHEQUES: " << endl;
    cout << "N* do cheque |\t " << "Valor do cheque |\t" << "Destino do cheque |\t" << endl;
    for(int i = 0; i < tam; i ++){
        cout << NumeroCheque[i] << "\t" << ValorCheque[i] << "\t" << Destino << "\t" << endl;
    }

    return 0;
}