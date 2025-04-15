#include<iostream>
using namespace std;

int main(){
    double high, peso_ideal;
    char gender;

    cout << "De sua altura: \n";
    cin >> high;

    cout << "De seu sexo(M/F): \n";
    cin >> gender;

    if (gender == 'm' || gender == 'M'){
        peso_ideal =  (72,7 * high)-58;
    }
    else if (gender == 'f' || gender == 'F'){
        peso_ideal = (62,1 * high)-44,7;
    }

    cout << "Seu peso ideal eh de: " << peso_ideal << endl;

    return 0;
}