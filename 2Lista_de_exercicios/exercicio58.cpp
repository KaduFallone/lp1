#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    cout << "Declare doi numeros ditintos: \n";
    cin >> num1;
    cin >>  num2;

    if (num1 > num2) {
        cout << "os numeros em ordem crescente sao: " << num2 << " " << num1 << endl;
    } else {
        cout << "os numeros em ordem crescente sao: " << num1 << " " << num2 << endl;
    }

    return 0;
}
