#include<iostream>
using namespace std;

int main(){
    int num[3], auxiliar;

    for(int i = 0; i <3; i++){
        cout << "Digite um numero:";
        cin >> num[i];
    }
    
    //ordernar arrays
    for(int a = 0; a < 3; a++){
        for(int b = a+1; b <3; b++){
            if(num[a] > num[b]){
                auxiliar=num[a];
                num[a]=num[b];
                num[b]=auxiliar;
            }
        }

    }

    //printar nums
    cout << "NUMEROS EM ORDEM:" << endl;
    for(int i = 0; i < 3; i ++){
        cout << num[i] << endl;
    }
    return 0;
}