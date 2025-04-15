#include<iostream>
using namespace std;

int main(){
    double num;

    cout << "Declare um numero: \n";
    cin >> num;

    if (num == 5){
        cout << "O numero eh igual a 5" << endl;
    }
    else if (num == 200){
        cout << "O numero eh igual a 200" << endl;
    }
    else if (num == 400){
        cout << "O numeor eh igual a 400" << endl;
    }
    else if (num >= 500 && num <=1000){
        cout << "O numero se encontra entre 500 e 1000" << endl;
    }
    else{
        cout << "O numero nao satisfaz nenhuma caracteristica a cima " << endl;
    }

    return 0;
}