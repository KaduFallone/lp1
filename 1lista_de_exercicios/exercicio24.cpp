#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int not1, not2, NotTrun;

    cout << "Insira nota 1: \n";
    cin >> not1;
    cout << "Insira nota 2: \n";
    cin >> not2;

    NotTrun = trunc((not1+not2)/2);

    cout << "Nota final TRUNCADA: " << NotTrun << endl;
    cout << "Nota final ARREDONDADA: " << (not1+not2)/2 << endl;

    return 0;
}