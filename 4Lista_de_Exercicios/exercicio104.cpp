#include<iostream>
using namespace std;

int main(){
    string name[10];

    cout << "De 10 nomes: " << endl;
    for(int i = 0; i < 10; i++){
        cout << "Nome numero: " << i+1 << " ";
        cin >> name[i];
    }
    cout << endl;
    
    for(int i = 0; i < 10; i ++){
        cout << i+1 << "Nome: " << name[i] << endl;
    }
    return 0;

}
