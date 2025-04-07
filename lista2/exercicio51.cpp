#include<iostream>
using namespace std;

int main(){
    double num;

    cout << "Declare um numero: \n";
    cin >> num;

    if (num > 20 && num < 90){
        cout << "Este numero ("<<num<<")se encontra entre 20 e 90" << endl;
    }
    else{
        cout << "Este numero ("<<num<<") nao se encontra entre 20 e 90" << endl;
    }




    return 0;
}