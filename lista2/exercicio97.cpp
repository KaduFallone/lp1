#include<iostream>
using namespace std;

int main(){
    double peso, idade, pesot, idadet, idadeM, pesoM;
    pesot=0;
    idadet=0;
    for(int i =1; i <= 5; i++){
        for (int ii = 1; ii <= 12; ii++){
            cout << "Idade do jogador " << ii <<": " << endl;
            cin >> idade;
            cout << "Peso do jogador " << ii << ": " << endl;
            cin >> peso;
            cout << endl << endl; 

            pesot=pesot+peso;

            idadet=idadet+idade;
        }

        idadeM = idadet/12;
        pesoM = pesot/12;


        cout << "Idade media dos jogadores do time " << i << ": " ;
        cout << idadeM;
        cout << endl;
        cout << "peso media dos jogadores do time " << i << ": " ;
        cout << pesoM;
        cout << endl << endl;
    }    

    return 0;

}