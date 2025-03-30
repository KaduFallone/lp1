#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double raio=0, perim=0;

    cout << "De o raio de um circulo em centimetro (cm): " << endl;
    cin >> raio;

    perim = 2*M_PI*raio;
    
    cout << "O perimetro do circulo eh: " << perim << endl;

    return 0;

}
