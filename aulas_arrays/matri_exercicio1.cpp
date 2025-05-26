#include<iostream>
using namespace std;

int main(){
    int L=4, C=5;
    float matrizz[L][C];

    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
            cout << "Digite o(s) numero(s): " << endl;
            cin >> matrizz[i][j];
        }
    }

    for(int i = 0; i < L; i ++){
        for(int j = 0; j < C-1; j++){
            cout << matrizz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}