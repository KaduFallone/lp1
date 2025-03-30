#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double alt=0, base=0;
    double perim=0, area=0, diag=0;

    cout << "Alturo do retangulo/quadrado: " << endl;
    cin >> alt;

    cout << "Base do retangulo: " << endl;
    cin >> base;

    perim = 2*(alt+base);
    area = alt*base;
    diag = sqrt((pow(alt,2 )) + (pow(base,2)));

    cout << "O perimetro do retangulo/quadrado eh: " << perim << endl;
    cout << "A area do retangulo/quadrado eh: " << area << endl;
    cout << "A diagonal do retangulo/quadrado eh: " << diag << endl;

    return 0;

}