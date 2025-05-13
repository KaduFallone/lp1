#include <iostream>
using namespace std;

int main() {
    double alturaChico = 150.0;
    double alturaJuca = 110.0;
    double crescimentoChico = 2.0;
    double crescimentoJuca = 3.0;

    int anos = 0;

    while (alturaJuca <= alturaChico) {
        alturaChico += crescimentoChico;
        alturaJuca += crescimentoJuca;
        anos++;
    }

    cout << "Serão necessários " << anos << " anos para que Juca seja mais alto que Chico." << endl;

    return 0;
}