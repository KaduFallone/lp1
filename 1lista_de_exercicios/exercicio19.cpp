#include<iostream>
using namespace std;

int main(){
    double aplic;
    double reaj;

    cout << "Valor da aplicação: \n";
    cin >> aplic;

    reaj = aplic + (aplic*0.01);
    
    cout <<"O valor final de sua aplicação eh:" << reaj;

    return 0;

  
}