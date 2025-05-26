#include<iostream>
using namespace std;

int main(){
    int L = 2;
    int C =2;
    int matriz[L][C];
    int soma = 0;
    
    // Declarar numeros da matriz
    for(int i = 0; i < L; i ++ ){
        for(int j = 0; j < C; j ++){
            cout << "Digite um  numero: "<< endl;
            cin >> matriz[i][j];
        }
    }

    //printar matriz
    cout << endl << "Matriz: " << endl;
    for(int i = 0; i < L; i ++){
        for(int j =0; j < C; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    //Soma dos elementos acima da diagonal principal
    cout << "Soma dos termoa acima da diagonal principal:" << endl;
    for(int i = 0; i < L; i ++ ){
        for(int j = 0; j < C; j ++ ){
            if(i<j){
                soma = matriz[i][j];
            }

        }
    }

    cout << soma;

}