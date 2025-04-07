#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double num;

    cout <<"Escolha um numero: \n";
    cin >> num;


    if(num > 0){
        cout << "A raiz deste numero eh: " << sqrt(num);
    }
    else if (num < 0){
        cout << "O quadrado deste numero eh: " << pow(num, 2);
    }
    else{
        cout << "ZERO NAO VALEEEEEEEE" << endl;
    }


    return 0;
}