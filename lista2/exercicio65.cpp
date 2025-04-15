#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, n4, n5;
    int maior, menor;

    // Leitura dos 5 números
    cout << "Digite o primeiro numero: ";
    cin >> n1;
    cout << "Digite o segundo numero: ";
    cin >> n2;
    cout << "Digite o terceiro numero: ";
    cin >> n3;
    cout << "Digite o quarto numero: ";
    cin >> n4;
    cout << "Digite o quinto numero: ";
    cin >> n5;

   
    maior = menor = n1;

    
    if (n2 > maior) maior = n2;
    if (n3 > maior) maior = n3;
    if (n4 > maior) maior = n4;
    if (n5 > maior) maior = n5;

   
    if (n2 < menor) menor = n2;
    if (n3 < menor) menor = n3;
    if (n4 < menor) menor = n4;
    if (n5 < menor) menor = n5;

    
    cout << "Maior valor: " << maior << endl;
    cout << "Menor valor: " << menor << endl;

    return 0;
}

