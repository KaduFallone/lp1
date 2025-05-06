#include <iostream>
using namespace std;

int main() {
    int idade;
    char estado;

    int casados = 0, solteiros = 0, viuvos = 0, desquitados = 0;
    int soma_idades_viuvos = 0;
    int total_pessoas = 0;

    while (true) {
        cin >> idade;
        if (idade < 0) break;

        cin >> estado;
        estado = toupper(estado);

        total_pessoas++;

        if (estado == 'C') casados++;
        else if (estado == 'S') solteiros++;
        else if (estado == 'V') {
            viuvos++;
            soma_idades_viuvos += idade;
        }
        else if (estado == 'D') desquitados++;
    }

    cout << casados << endl;
    cout << solteiros << endl;

    if (viuvos > 0)
        cout << (soma_idades_viuvos / viuvos) << endl;
    else
        cout << "0" << endl;

    if (total_pessoas > 0)
        cout << (desquitados * 100.0 / total_pessoas) << "%" << endl;
    else
        cout << "0%" << endl;

    return 0;
}