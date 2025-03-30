#include<iostream>
using namespace std;

int main(){
    double naula, vaula, valorIn, valorDesc, valorFi;

    cout << "Numero de aulas: \n";
    cin >> naula;

    cout << "Valor da hora-aula: \n";
    cin >> vaula;

    valorIn = naula*vaula;

    valorDesc = valorIn*0.10;

    valorFi = valorIn-valorDesc;

    cout << "O salario do professor sera: " << valorFi << endl;

    return 0;


}