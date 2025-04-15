#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num1, num2;
    cout << "Declare dois numeros ditintos: \n";
    cin >> num1;
    cin >> num2;

    if (num1 > num2){
        cout << "A raiz quadrada de " <<num1<<  " eh "<< sqrt(num1) << endl;
        cout << "O quadrado de " << num2 << " eh " << pow(num2, 2) << endl;
    }
    else{
        cout << "A raiz quadrada de " << num2 << " eh " << sqrt(num2) << endl;
        cout << "O quadrado de " << num1 << " eh " << pow(num1, 2) << endl;
    }
    
}

