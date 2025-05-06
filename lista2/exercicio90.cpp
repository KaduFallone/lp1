#include<iostream>
using namespace std;

int main(){
    int quantidade, num, maior, menor;

    cout << "Quantos numeors deseja digitar: \n";
    cin >> quantidade;
    cout << "Digite o primeiro numero: \n";
    cin >> num;

    maior=menor=num;

    for(int i = 2; i <= quantidade; i++){
        cout << "Digite outro numero: \n";
        cin >> num;

        if(num>maior) maior=num;
        if(num<menor) menor=num;
    }

    cout << "O maior numero eh: " << maior << endl;
    cout << "O menor numero eh: " << menor << endl;

    return 0;


}