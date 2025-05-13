#include<iostream>
using namespace std;

int main(){
    double num1, num2;

    cout << "Declare dois numeros: \n";
    cin >> num1;
    cin >> num2;

    if (num1 > 0 && num2 > 0){
        cout << "Os numeros " << num1 << " e " << num2 << " sao lados de um triangulo" << endl;
    }
    else if ( num1 <= 0 && num2 > 0){
        cout << "Os numeros " << num1 << " e " << num2 << " nao sao lados de um triangulo" << endl;
    }
    else if ( num1 > 0 && num2 <= 0){
        cout << "Os numeros " << num1 << " e " << num2 << " nao sao lados de um triangulo" << endl;
    }

    return 0;
    
}