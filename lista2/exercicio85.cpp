#include<iostream>
using namespace std;

int main(){
    int intm, intM;

    cout << "Declare o intervalo que deseja receber o valor em graus celcius:" << endl;
    cin >> intm;
    cin >> intM;

    for (int i= intm; i <= intM; i++){
        cout << "A temperatura em graus celcius eh: " << (i-32)*5/19 << endl;
    }

    return 0;

}