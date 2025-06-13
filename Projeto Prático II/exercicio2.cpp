#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

struct Carro {
    string modelo;
    string placa;
    float valor;
    int diasAlocado;
};

bool compararPorAluguel(const pair<string, int>& a, const pair<string, int>& b) {
    return a.second > b.second;
}

int main() {
    int quantidadeDeCarros = 0;
    float valorInicialDoCaixa = 0;
    float valorRecebido = 0;
    int resposta;

    do {
        valorRecebido = 0;

        cout << "\n============== MENU ==============" << endl;
        cout << "Qual o valor do caixa no inicio do dia?: ";
        cin >> valorInicialDoCaixa;

        cout << "Quantos carros voce quer registrar: ";
        cin >> quantidadeDeCarros;

        vector<Carro> carros(quantidadeDeCarros);
        map<string, int> contagemModelos;

        cout << "\n======== REGISTRAR OS CARROS =========" << endl;
        for (int i = 0; i < quantidadeDeCarros; i++) {
            cout << "\n*Registro do carro " << i + 1 << " :" << endl;
            cout << "Placa do carro: ";
            cin >> carros[i].placa;
            cout << "Modelo do carro: ";
            cin >> carros[i].modelo;
            cout << "Valor do aluguel por dia: ";
            cin >> carros[i].valor;
            cout << "Quantidade de dias alugado: ";
            cin >> carros[i].diasAlocado;

            float valorPago = carros[i].valor * carros[i].diasAlocado;
            valorRecebido += valorPago;

            contagemModelos[carros[i].modelo]++;
        }

        float valorFinalDoCaixa = valorInicialDoCaixa + valorRecebido;

        cout << "\n======== RELATÓRIO DO DIA ==========" << endl;
        cout << "Placa\tModelo\tValor/Dia\tDias\tValor Pago" << endl;
        for (int i = 0; i < quantidadeDeCarros; i++) {
            float valorPago = carros[i].valor * carros[i].diasAlocado;
            cout << carros[i].placa << "\t" << carros[i].modelo << "\t";
            cout << carros[i].valor << "\t\t" << carros[i].diasAlocado;
            cout << "\t" << valorPago << endl;
        }

        cout << "\nTotal recebido no dia: R$" << valorRecebido << endl;
        cout << "Valor final no caixa: R$" << valorFinalDoCaixa << endl;

        cout << "\n====== TOP 10 CARROS MAIS ALUGADOS ======" << endl;
        vector<pair<string, int>> modelosOrdenados(contagemModelos.begin(), contagemModelos.end());
        sort(modelosOrdenados.begin(), modelosOrdenados.end(), compararPorAluguel);

        int limite = min(10, (int)modelosOrdenados.size());
        for (int i = 0; i < limite; i++) {
            cout << i + 1 << ". Modelo: " << modelosOrdenados[i].first;
            cout << " - Alugado " << modelosOrdenados[i].second << " vez(es)" << endl;
        }

        cout << "\nDeseja voltar ao início? (0 = SIM / 1 = NÃO): ";
        cin >> resposta;
        if (resposta < 0 || resposta > 1) {
            cout << "Resposta inválida. O programa será encerrado.\n";
            break;
        }

    } while (resposta == 0);

    return 0;
}
