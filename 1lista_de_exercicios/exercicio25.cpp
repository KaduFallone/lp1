#include<iostream>
#include<cmath>
using namespace std;

int main (){
    double x1, x2, x3, result;

    cout <<"Insira x1, x2, e x3, para descobrir o valor de x: \n";
    cin >> x1;
    cin >> x2;
    cin >> x3;

    result = x1 + (x2/(x3+x1)) + (2*(x1-x2)) + (log(64)/log(2));

    cout << "O resultado de x eh: " << result << endl;

    return 0;
}