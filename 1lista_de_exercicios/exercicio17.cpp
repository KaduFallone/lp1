#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double num, base, logaritimo ;

    cout << "Entre o numero:\n";
    cin >> num;
    cout << "Entre a base: \n";
    cin >> base;
    
    logaritimo = log(num) / log(base);
    cout << "Logaritimo do numero eh: " << endl;
    cout << logaritimo << endl;


    return 0;
    
}
