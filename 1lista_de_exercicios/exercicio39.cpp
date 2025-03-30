#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double num1, num2, quaddif, difquad;

    cout << "Declare dois numeros:" << endl;
    cin >> num1;
    cin >> num2;

    quaddif = sqrt((num1-num2));
    difquad = (sqrt(num1)) - (sqrt(num2));

    cout << "O quadrado da diferença entre os numeros eh: " << quaddif << endl;
    cout << "E a diferença do quadrado dos dois numero eh: " << difquad << endl;

    return 0;

    
}