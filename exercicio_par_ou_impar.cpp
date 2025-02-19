#include<iostream>
using namespace std;

int main (){
    int num1;
    cout << "escolha um numero\n";
    cin >> num1;
    cout << endl;
    
    cout << "seu numero e\n";
    if (num1%2 == 0){
        cout << "par";
    }
    else{
        cout << "impar";
    }
    
    return 0;
}