#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int fluminense = 0, botafogo = 0, vasco = 0, flamengo = 0, outros = 0;
    int soma_salario_botafogo = 0, qtd_botafogo = 0;
    int rj_outros_times = 0;
    int niteroi_fluminense = 0;

    for (int i = 0; i < n; i++) {
        int time, local;
        float salario;

        cin >> time;
        cin >> local;
        cin >> salario;

        if (time == 1) fluminense++;
        else if (time == 2) {
            botafogo++;
            soma_salario_botafogo += salario;
            qtd_botafogo++;
        }
        else if (time == 3) vasco++;
        else if (time == 4) flamengo++;
        else if (time == 5) outros++;

        if (local == 1 && time == 5)
            rj_outros_times++;

        if (local == 2 && time == 1)
            niteroi_fluminense++;
    }

    cout << fluminense << endl;
    cout << botafogo << endl;
    cout << vasco << endl;
    cout << flamengo << endl;
    cout << outros << endl;

    if (qtd_botafogo > 0)
        cout << (soma_salario_botafogo / qtd_botafogo) << endl;
    else
        cout << "0" << endl;

    cout << rj_outros_times << endl;
    cout << niteroi_fluminense << endl;

    return 0;
}