#include<iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    double num1, num2, num3;
    double maior;
    cout <<" Escolha três números>" << endl ;
    cin >> num1;
    cin >> num2;
    cin >> num3;


    if (num1 > num2 && num1 > num3){
        maior = num1;
    }
    else if (num2 > num3){
        maior = num2;
    }
    else{ maior = num3;
    }

    cout << "Númer maior: " << maior;


return 0;

}