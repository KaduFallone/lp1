#include<iostream>
#include<string>
using namespace std;

int main(){
    int idade;
    string name;
    char gender;
    double soma= 0;

    for (int i=1; i <=20; i++){
        cout << "Declare seu nome: \n";
        cin >> name;
        cout << "Declare sua idade: \n";
        cin >> idade;
        cout << "Declare seu genero(M/F): \n";
        cin >> gender;

        if ((gender == 'M' || gender == 'm') && idade > 21) soma ++;
               
    }

    double porcentagem = (soma*100)/20;

    cout << "A porcentagem de homens com mais de 21 anoe eh: " << porcentagem << " porcento" << endl;


    return 0;

}