#include<iostream>
using namespace std;

int main(){
    int num;

    cout << "Entre um numero: " << endl;
    cin >> num;

    if (num % 3 == 0 && num % 7 == 0){
        cout <<"O numero EH divisivel por 3(tres) e por 7(sete)" << endl;
    }
    else{
        cout << "O numero NAO eh divisivel por 3(tres) e por 7(sete)" << endl;
    }

    return 0;
}