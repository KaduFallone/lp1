#include<iostream>
using namespace std;

int main(){
    int soma=0;
    for(int i = 25; i<=200; i++){
        if (i%2==0) soma = soma+i;
    }

    cout << "Soma dos nuneros pares eh: " << soma << endl;
    return 0;
}