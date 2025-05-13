#include<iostream>
#include<string>
using namespace std;

int main(){
    string name;
    double prov1, prov2, nota_final;

    cout << "Nome do aluno: \n";
    getline(cin, name);

    cout << "Nota da prova 1: \n";
    cin >> prov1;

    cout << "Nota praova 2: \n";
    cin >> prov2;

    nota_final = (prov1 + prov2) / 2;

    if (nota_final >= 7){
        cout << name << " aprovado" << endl;
    }
    else if (nota_final < 7 && nota_final > 3){
        cout << name << " vai para a prova final" << endl;
    }
    else{
        cout << name << " reprovado" << endl;
    }

    return 0;
}