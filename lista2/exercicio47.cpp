#include<iostream>
using namespace std;

int main(){
    int num;
    
    cout << "Escolha um numero: \n";
    cin >> num;

    if( num% 5 == 0){
        cout << "O numero eh divisivel por 5(cinco)" << endl;
    }
    else{
        cout << "O numero nao eh dvisivel por 5" << endl;
    }

    return 0;
}