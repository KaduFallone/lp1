#include<iostream>
using namespace std;

int main(){
    int tabuada;
    cout << "Qual tabuada deseja fazer: \n";
    cin >> tabuada;

    for(int i=1; i <=10; i++){
        cout << tabuada << " X " << i << " = " << tabuada * i << endl;
    }




    return 0;
}