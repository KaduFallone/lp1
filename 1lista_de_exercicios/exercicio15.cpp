#include<iostream>
using namespace std;

int main(){
    double num1, num2, num3, num4;
    double p1=1, p2=2, p3=3, p4=4;
     cout << "Escolha quatro numero:\n";
     cin >> num1;
     cin >> num2;
     cin >> num3;
     cin >> num4;
     cout << endl;

    double med_pond = ((num1*p1)+(num2*p2)+(num3*p3)+(num4*p4))/(p1+p2+p3+p4);

    cout << "A media ponderada eh: " << med_pond;


     return 0;
}