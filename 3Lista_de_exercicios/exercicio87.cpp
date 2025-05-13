#include<iostream>
using namespace std;

int main(){
    double final_do_intervalor;

    cout << "Declare ate que numero quer saber os numeros pares existentes: \n";
    cin >> final_do_intervalor;
    cout << "Os numeros sao: " << endl;

    for(int i=1; i<=final_do_intervalor; i++){
        if (i % 2 != 0){
            cout << i << endl;
        }
    }

    return 0;
}