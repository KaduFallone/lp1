#include<iostream>
using namespace std;

int main(){
    string UF;

    cout << "De a sigla da sua unidade federativa: \n";
    getline(cin, UF);

    if (UF == "MG" || UF == "Mg" || UF == "mg" || UF == "mG" ){
        cout << "Voce eh mineiro" << endl;
    }
    else if (UF == "SP" || UF == "Sp" || UF == "sp" || UF == "sP"){
        cout << "Voce eh paulista" << endl;
    }
    else if (UF == "RJ" || UF == "Rj" || UF == "rj" || UF == "rJ"){
        cout << "Voce eh carioca" << endl;
    }
    else{
        cout << "Voce eh de SP, MG ou RJ " << endl;
    }


    return 0;
}