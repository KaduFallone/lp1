#include<iostream>
using namespace std;

int main(){
    int idade;

    cout << "Declare a idade do nadador: \n";
    cin >> idade;

    if (idade >= 5 && idade <= 7){
        cout << "Categoria: INFANTIL-A" << endl;
    }
    else if (idade >=8 && idade <= 10){
        cout << "Categoria: INFANTIL-B" << endl;
    }
    else if (idade >= 11 && idade <= 13){
        cout << "Categoria: JUVENIL-A" << endl;
    }
    else if (idade >= 14 && idade <= 17){
        cout << "Categoria: JUVENIL-B" << endl;
    }

    return 0;
}