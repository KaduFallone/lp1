#include<iostream>
using namespace std;

int main(){
    int L=3, C=3;
    float matrizz[L][C];

    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
            cout << "Digite o(s) numero(s): " << endl;
            cin >> matrizz[i][j];
        }
    }

    cout << endl << "Matriz inteira:" << endl;
    for(int i = 0; i < L; i ++){
        for(int j = 0; j < C; j++){
            cout << matrizz[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << "Somente a diagonal principal: " << endl;
    for(int i = 0; i < L; i ++){
        for(int j = 0; j < C; j++){
           if (i==j){
            cout << matrizz[i][j] << " ";
           } 
           else{
            cout << "-";
           }
            
            
        }
        cout << endl;
    }

    cout << endl << "Triangulo de cima: " << endl;
    for(int i = 0; i < L; i ++){
        for(int j = 0; j < C; j++){
           if (i<j){
            cout << matrizz[i][j] << " ";
           } 
           else{
            cout << "-";
           }
            
            
        }
        cout << endl;
    }

    cout << endl << "Triangulo de baixo: " << endl;
    for(int i = 0; i < L; i ++){
        for(int j = 0; j < C; j++){
           if (i>j){
            cout << matrizz[i][j] << " ";
           } 
           else{
            cout << "-";
           }
            
            
        }
        cout << endl;
    }

    return 0;
}