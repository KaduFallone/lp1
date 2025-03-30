#include<iostream>
using namespace std;

int main(){
    int hora, min, mint;
    
    cout << "Que horas sao agora(0-24): \n";
    cin >> hora;

    cout << "Quantos minutos ja se passram até o momento nesta hora(0-60): \n";
    cin >> min;

    mint = hora * 60 + min;

    cout << "Ja se parram " <<mint<< " minutos no seu dia";

    return 0;
}