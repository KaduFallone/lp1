#include<iostream>
#include<string>
using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    double num1, num2, num3, num4, num5;
    double maior;
    double menor;

    cout << "escolha cinco números" << endl;
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4;
    cin >> num5;

    if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5 ){
        maior = num1;
    }
    else if (num2 > num3 && num2 > num4 && num2 > num5){
        maior = num2;
    }
    else if (num3 > num4 && num3 > num5){
        maior = num3;
    }
    else if (num4 > num5){
        maior = num4;
    }
    else { 
        maior = num5;
    }
    cout << "Mairo número: " << maior << endl;
    

    if (num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5 ){
        menor = num1;
    }
    else if (num2 < num3 && num2 < num4 && num2 < num5){
        menor = num2;
    }
    else if (num3 < num4 && num3 < num5){
        menor = num3;
    }
    else if (num4 < num5){
        menor = num4;
    }
    else { menor = num5;
    }
    cout <<"Menor número: " << menor << endl;



    return 0;
}