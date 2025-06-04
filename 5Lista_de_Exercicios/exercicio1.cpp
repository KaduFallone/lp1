#include<iostream>
using namespace std;

int main(){
    int tam = 3;
    int L=tam;
    int C = tam;
    int matriz[L][C];

    cout << "declare os numeros da matriz: "<< endl;
    for(int i = 0; i < tam; i++){
        for(int j=0; j<tam; j++){
            cin >> matriz[i][j];
            
        }
    }

    cout << endl;

    for(int i = 0; i<tam; i++){
        for(int j=0; j<tam; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    for(int i = 0; i<tam; i++){
        for(int j=0; j<tam; j++){
            if(i>j) cout << matriz[i][j] << " ";
            else{ cout << "- ";}
        }
        cout << endl;
    }

}