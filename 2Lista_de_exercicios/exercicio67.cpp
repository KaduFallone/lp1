#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;

    cout << "Digite os tres lados do triangulo: ";
    cin >> a >> b >> c;

    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);

    if (a + b <= c) {
        cout << "Os valores nao formam um triangulo valido." << endl;
        return 0;
    }

    double a2 = a * a;
    double b2 = b * b;
    double c2 = c * c;

    if (fabs(c2 - (a2 + b2)) < 1e-6) {
        cout << "Triangulo retangulo" << endl;
    } else if (c2 > (a2 + b2)) {
        cout << "Triangulo obtusangulo" << endl;
    } else {
        cout << "Triangulo acutangulo" << endl;
    }

    return 0;
}