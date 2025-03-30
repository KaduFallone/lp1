#include<iostream>
using namespace std;

int main(){
    double num, denom;
    cout << "Declare o numerador e o denominador de uma fracão (NUM/DENUM): " << endl;
    cin >> num;
    cin >> denom;

    cout << "Esta fracão (" << num <<"/" << denom << ") como um numero decimal eh: " << num/denom;

    return 0;
}