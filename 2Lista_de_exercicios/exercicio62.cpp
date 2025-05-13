#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;
    double temp;
    
    cout << "Digite o primeiro número: ";
    cin >> num1;
    
    cout << "Digite o segundo número: ";
    cin >> num2;
    
    cout << "Digite o terceiro número: ";
    cin >> num3;
    
    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    
    if (num2 > num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    
    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    
    cout << "Os números em ordem crescente são: " << num1 << ", " << num2 << ", " << num3 << endl;
    
    return 0;
}
