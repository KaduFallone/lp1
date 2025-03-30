#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double cat1, cat2, hipo;

    cout << "Entre com os catetos de um triangulo retangulo, para descobrir sua hipotenusa: \n";
    cin >> cat1;
    cin >> cat2;

    hipo = hypot(cat1, cat2);

    cout << "A hipotenusa eh: " << hipo << endl;

    return 0;

}