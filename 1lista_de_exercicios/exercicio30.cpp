#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double raio, alt, vol;

    cout << "Declare a aultura da lata(cm): \n";
    cin >> alt;
    cout << "Declare o raio da lata(cm): \n";
    cin >> raio;

    vol = M_PI*pow(raio, 2)*alt;

    cout << "O volume da lata eh: " << vol << " litro(s)";

    return 0;

}