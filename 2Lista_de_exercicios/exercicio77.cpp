#include<iostream>
using namespace std;

int main(){
    double produto, lucro;
    
    cout << "De o valor do produto: \n";
    cin >> produto;

    if (produto < 20){
        lucro = produto * 0.45;
    }
    else{
        lucro = produto * 0.30;
    }

    double valro_final = produto + lucro;

    cout << "O valor final do produto sera: " << valro_final << endl;

    return 0; 
}