#include<iostream>
using namespace std;

int main(){
    double num1, num2, trocav;

    cout << "Declares os valores de numero1 e numero2: " << endl;
    cin >> num1;
    cin >> num2;

    cout << "Os valor ORIGINAIS sao: numero1 = " << num1 << " //  numero2 = " << num2 << endl;
    
    trocav = num1;
    num1 = num2;
    num2 = trocav;

    cout << "Os valores TROCADOS sao: numero1 = " << num1 << " // numero2 = " << num2 << endl;

    return 0;
}