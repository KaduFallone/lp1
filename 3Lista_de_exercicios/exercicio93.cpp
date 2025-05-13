#include<iostream>
using namespace std;

int main(){
    int num1, num2, rep;
    cout << "Declare os dois primeiros termos: " << endl;
    cin >> num1;
    cin >> num2;
    cout << "Declare quantas vezes quer fazer isso" << endl;
    cin >> rep;

    for(int i=3; i <= rep; i++){
        int num;
        if (i%2==0){
            num = (num2)-(num1);
        } else {
            num = (num2)+(num1);
        }
        num1 = num2;
        num2 = num;
        cout << "Numero " << i << ": " << num << endl;
    }
}