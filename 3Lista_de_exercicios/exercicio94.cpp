#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num1=0, somatoria=0;
    for(int i=1; i<=20; i++){
        
        cout << "declare o " << i << " numero: " << endl;
        cin >> num1;


        if ((pow(num1,2)) < 225) somatoria=somatoria+num1;   
    }

    cout << "A somatoria dos numeros com quadrado menor que 225 eh: " << somatoria << endl;

    return 0;
}