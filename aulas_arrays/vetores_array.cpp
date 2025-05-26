#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string name[10];

    for(int i= 0; i < 10; i++){
        cout << "De um nome: " << endl;
        cin >> name[i];
    }
    
    cout << "Listagem dos nomes " << endl;
    for(int i = 0; i < 10; i++ ){
        cout << name[i] << endl;
    }

    return 0;
}