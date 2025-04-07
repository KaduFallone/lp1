#include<iostream>
#include<string>
using namespace std;

int main(){
    string name, gender;
    int age;

    cout << "Seu nome: \n";
    getline(cin, name);

    cout << "Seu sexo(feminino[f] / masculino[m]): \n";
    cin >> gender;

    cout << "Sua idade: \n";
    cin >> age;

    if (age < 25 && (gender == "f" || gender == "F" )){
        cout << "ACEITA!!!" << endl;
    }
    else{
        cout << "NEGADO(A) :(" << endl;
    }



    return 0;
}