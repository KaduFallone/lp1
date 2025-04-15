#include <iostream>
using namespace std;

int main(){
    int num1, num2, num3;
    cout << "Declare tres numeros: \n";
    cin >> num1;
    cin >> num2;
    cin >> num3;

    if (num1 > num2 && num1 > num3){
        cout << "O maior numero eh " << num1 << endl;
    }
    else if (num2 > num1 && num2 > num3){
        cout << "O maior numero eh " << num2 << endl;
    }
    else if (num3 > num1 && num3 > num2){
        cout << "O maior numero eh " << num3 << endl;
    }
    return 0;
}
