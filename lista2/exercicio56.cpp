#include<iostream>
using namespace std;

int main(){
    double num1, num2;

    cout << "Escolha dois numeros: \n";
    cin >> num1;
    cin >> num2;

    if (num1 > num2){
        cout << "O main numero eh " << num1 << endl;
    }
    else{
        cout << "O maior numero eh " << num2 << endl;
    }



    return 0;
}