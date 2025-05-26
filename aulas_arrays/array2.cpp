#include<iostream>
using namespace std;

int main(){
    int nota1[5], nota2[5];
    string name[5];

    for (int i = 0; i < 5; i++){
        cout << "Nome do aluno " << i+1 << " : " ;
        getline(cin, name[i]);
        cout << "De as nota do aluno " << i+1 << " : ";
        cin >> nota1[i] >> nota2[i];
        cin.ignore();
    }

    cout << "lista dos alunos e suas medias: " << endl;
    for (int i = 0; i < 6; i++){
        cout << "* " << name[i] << "- Media: ";
        cout << nota1[i]+nota2[i]/2 << endl;

    }

    return 0;
}