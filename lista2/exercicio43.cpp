#include<iostream>
using namespace std;

int main(){
    double num;

    cout << "Escolha um numero: " << endl;
    cin >> num;

    if (num > 20){
        cout << "Seu numero: " << num << endl;
    }
    else{
        cout << "Seu numero nao maior que vinte" << endl;
    }

    return 0;
}