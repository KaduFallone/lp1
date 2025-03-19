#include<iostream>
#include<cmath>
using namespace std;

int main (){
    double num;

    cout <<"Entrem um numero: \n";
    cin >> num;

    double raiz = sqrt(num);
    double quad = pow (num, 2);

    cout<< "Raiz quadrada: " << raiz << endl;
    cout<< "Quadrado: " << quad << endl;



    return 0;

}