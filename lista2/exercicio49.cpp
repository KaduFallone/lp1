#include<iostream>
using namespace std;

int main(){
    int num;

    cout << "Escolha um numero: \n";
    cin >> num;

    if(num % 10 == 0 ){
        cout << "O numero EH divisivel por 10 " << endl;
    }
    else if (num % 5 == 0){
        cout << "O numero EH divisivel por 5" << endl;
    }
    else if(num % 2 == 0){
        cout << "O numero EH divisivel por 2" << endl;
    }
    else{
        cout << "O numero NAO EH divisivel por 10, 5 ou 2" << endl;
    }

    return 0;
}