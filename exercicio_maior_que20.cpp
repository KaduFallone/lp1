#include<iostream>
using namespace  std;

int main (){
    double num1;
    cout << "escolha um  numero\n ";
    cin >> num1; 
    cout << endl;
    
    cout << "numero final\n";
    if (num1 > 20){
        cout << num1/2;
    }
    else {
        cout << num1;
    }
    return 0;
}