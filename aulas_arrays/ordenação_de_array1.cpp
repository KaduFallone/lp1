#include<iostream>
using namespace std;

int main(){
    int num[30];
    int auxiliar;

    for(int i = 0; i <30 ; i ++){
        cout << "Declare cinco numeros: " << endl;
        cin >> num[i];
    }

    for(int maior = 0; maior<30; maior++){
        for(int menor = maior+1; menor < 30; menor ++){
            if(num[maior] > num[menor])
            auxiliar = num[maior];
            num[maior] = num[menor];
            num[menor] = auxiliar;
        }
    }

    cout << "Numeros em ordem crescente: " << endl;
    for(int i = 0; i < 30; i++){
        cout << num[i] << endl;
    }
    return 0;
}