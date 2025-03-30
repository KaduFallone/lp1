#include<iostream>
using namespace std;

int main(){
    double tempo, VelMed, distancia, LitroGas;

    cout << "Qual o tempo gasto na viagem(horas): \n";
    cin >> tempo;

    cout << "Qual a velocidade media(km/h): \n";
    cin >> VelMed;

    distancia = tempo * VelMed;

    LitroGas = distancia/12;

    cout << "Velocidade media eh: " << VelMed << " Km/h" << endl;
    cout << "Tempo gasto na viagem eh: " << tempo << " horas" <<  endl;
    cout << "Distancia percorrida foi de: " << distancia << " quilometros" << endl;
    cout << "Quantida de gasolina gasto foi de: " << LitroGas << " litros" << endl;

    return 0;

}