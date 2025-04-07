#include<iostream>
using namespace std;

int main(){
    double num1, num2, soma=0;
    cout <<"Escolha dois numeros: \n ";
    cin >> num1;
    cin >> num2;

    soma = num1+num2;
    if (soma > 10){
        cout << "A soma dos numero eh: " << soma; 
    }
    else{
        cout << "A soma desse numero eh menor ou igual 10(dez)" << endl;
    }

    return 0;

}