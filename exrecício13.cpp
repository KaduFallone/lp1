#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double num1, num2;
    
    cout << "Escolha um número: ";
    cin >> num1;
    
    cout << "Escolha outro número: ";
    cin >> num2;
    
    double result = num1+num2;
    double raiz = sqrt(result);
    if (num1+ num2 > 30 ){ 
        cout << "o resultado é:" << result << endl;
        cout <<"a raiz quadrada do resultado é: " << raiz;
    }
    else{ 
    cout << "o resultado é:" << result << endl;
        cout <<"o produto de (-10) vezes o resultado é: " << result * (-10);
    }
        
        return 0;
    }