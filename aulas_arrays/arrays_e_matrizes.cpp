#include<iostream>
using namespace std;

int main(){
    float y[4][4];

    for(int a = 0; a<4; a++){
        for(int b = 0; b < 4; b++){
            cout << "Digite um numero:\n";
            cin >> y[a][b];
        }
    }

    for(int a =0; a < 4; a ++){
       for(int b =0; b < 4; b ++){
       cout << y[a][b] << " ";
       }
       cout << endl;
    }
    return 0;
}