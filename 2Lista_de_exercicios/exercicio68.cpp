#include<iostream>
using namespace std;

int main(){
    int idade;

    cout << "Declare sua idade: \n";
    cin >> idade;

    if (idade < 18){
        cout << "A pessoa eh menor de idade";
    }
    else if (idade >= 18 && idade < 65){
        cout << "A pessoa eh maior de idade";
    }
    else{
        cout << "A pessoa tem 65 anos ou mais";
    }

    return 0;

}