#include<iostream>
#include<string>
using namespace std;

int main(){
    string name;

    cout << "Qual seu nome: \n";
    getline(cin, name);

    cout << "a. Nome completo: " << name << endl;
    cout << "b. Primeira letra do seu nome: " << name[0] << endl;
    cout << "c Ultimo caractere do seu nome: " << name[name.size() - 1 ]<< endl;
    cout << "d. Tres primeiros caracteres do seu nome: " << name.substr(0, 3) << endl;

    if (name.size() <=3){
        cout << "e. Quarto caracter do neu nome: NAO HA 4 CARACTERES EM " <<name << endl; 
    }
    else{
        cout << "e. Quarto caracter do neu nome: " << name[3] << endl;
    }

    cout << "f. Todos os caracateres do seu nome exceto o ultimo: " << name.substr(1) << endl;

    if(name.size() >=2){
        cout <<"g. Os dois ultimos caracteres sao: " << name.substr(name.size() - 2) << endl;
    }
    else{
        cout << "g. O seu nome NAO TEM 2 caracteres: " << name << endl; 
    }


    return 0;
}