#include<iostream>
using namespace std;

int main(){
    double num1, num2, num3;
    double maior, intermediario, menor;

    cout << "Declare 3 numeros diferentes: \n";
    cin >> num1;
    cin >> num2;
    cin >> num3;

    //num1 maior 
    if (num1 > num2 && num1 > num3){
        maior = num1;
        if (num2 > num3){
            intermediario = num2;
            menor = num3;
        }
        else{
            intermediario = num3;
            menor = num2;
        }
    }

    //num2 maior
    else if (num2 > num1 && num2 > num3){
        maior = num2;
        if (num1 > num3){
            intermediario = num1;
            menor = num3;
        }
        else{
            intermediario = num3;
            menor = num1;
        }
    }

    //num3 maior
    else{
        maior = num3;
        if (num1 > num2){
            intermediario = num1;
            menor = num2;
        }
        else{
            intermediario = num2;
            menor = num1;
        }
    }

    cout << "Maior numero eh: " << maior << endl;
    cout << "Numero intermediario eh " << intermediario << endl;
    cout << "Menor numero eh: " << menor << endl;

    return 0;
}