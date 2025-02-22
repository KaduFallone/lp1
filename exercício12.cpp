#include<iostream>
#include <string>
using namespace std;

int main(){
     string name;
     int age;
     char sex;
     
     cout << "Enter your name:\n";
     getline(cin, name);
     
     cout << "enter your age:\n";
     cin >> age;
     
     cout << " Enter your sex (M/F):";
     cin >> sex;
     
     if (sex == 'F' || sex == 'f'){
         if (age < 25){
             cout << "Aceita!!\n";
             }
             else { cout << "Não aceita";
         }
     }
     
     else { cout << "Não aceito(a)";
     }
     
    return 0;
}