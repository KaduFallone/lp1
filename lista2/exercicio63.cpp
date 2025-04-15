#include<iostream>
using namespace std;

int main(){
    int num1, num2, num3;
    
    cout << "Digite o primeiro numero: ";
    cin >> num1;
    
    cout << "Digite o segundo numero: ";
    cin >> num2;
    
    cout << "Digite o terceiro numero: ";
    cin >> num3;
    
    int maior = num1;
    if (num2 > maior) maior = num2;
    if (num3 > maior) maior = num3;
    
    int menor = num1;
    if (num2 < menor) menor = num2;
    if (num3 < menor) menor = num3;
    
    int meio;
    if (num1 != maior && num1 != menor) meio = num1;
    else if (num2 != maior && num2 != menor) meio = num2;
    else meio = num3;
    
    cout << "Numeros em ordem decrescente: " << maior << ", " << meio << ", " << menor << endl;
    
    return 0;
}