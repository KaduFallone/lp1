#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    cout << "Declare doi numeros ditintos: \n";
    cin >> num1;
    cin >>  num2;

    if (num1 > num2) {
        cout << "os numeros em ordem decrescente sao: " << num1 << " " << num2 << endl;
    } else {
        cout << "os numeros em ordem decrescente sao: " << num2 << " " << num1 << endl;
    }

    return 0;
}