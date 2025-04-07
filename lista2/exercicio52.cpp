#include<iostream>
using namespace std;

int main(){
    double num;

    cout << "Declare umnumero: \n";
    cin >> num;

    if (num > 20){
        cout << "Numero " <<num<< " eh maior que vinte" << endl;
    }
    else if (num < 20 ){
        cout << "numero " <<num<< " eh menor que vinte" << endl;
    }
    else{
        cout << "Numero " <<num<< " eh igual a vinte" << endl;
    }
    return 0;
}