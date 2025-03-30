#include<iostream>
using namespace std;

int main(){
    double GrausC, GrausFah;

    cout << "Temperatura em garus centigrados: \n";
    cin >> GrausC;

    GrausFah = (9*GrausC+160)/5;

    cout << "A temperatura em Fahrenheit eh: " << GrausFah << " graus Fahrenheit" << endl;

    return 0;
}