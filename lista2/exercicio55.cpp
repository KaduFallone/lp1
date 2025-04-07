#include<iostream>
using namespace std;

int main(){
    double num1, num2;

    cout << "Escolha dois numero: " << endl;
    cin >> num1;
    cin >> num2;

    if(num1 != num2){
        cout << "Os numeros sao diferentes" << endl;
    }
    else{
        cout << "Os numeros sao iguais" << endl;
    }



    return 0;
}