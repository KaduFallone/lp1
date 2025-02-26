#include<iostream>
#include<string>
using namespace std;

int main (){
    string name;
    int age;
    

    cout << "Seu nome:\n";
    getline(cin, name);

    cout <<"Sua idade:\n";
    cin >> age; 
    cout <<"anos" << endl;

    double value;
    if (age <= 10){
        value = 30.00;
    }
    else if (age > 10 && age <= 29){
        value = 60.00;
    }
    else if (age >= 30 && age <= 45){
        value = 120.00;
    }
    else if (age > 45 && age <= 59){
        value = 150.00;
    }
    else if (age > 59 && age <= 65){
        value = 250.00;
    }
    else if (age > 65){
        value = 400.00;
    }
                                    

    cout <<"Nome:" << name << endl << age << " ano(s)\n" << "Valor do plano:" << value << " reais" << endl;
    


    return 0;
}