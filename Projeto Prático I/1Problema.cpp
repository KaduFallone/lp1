#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main() {
    srand(time(0));

    int testes[] = {50, 100, 500, 1000, 10000, 100000, 1000000};
    int tamanho = sizeof(testes) / sizeof(testes[0]);

    for (int i = 0; i < tamanho; i++) {
        int n = testes[i];
        int contagem_6_6 = 0;

        for (int j = 0; j < n; j++) {
            int dado1 = rand() % 6 + 1; 
            int dado2 = rand() % 6 + 1;

            if (dado1 == 6 && dado2 == 6) {
                contagem_6_6++;
            }
        }

        double frequencia = (double)contagem_6_6 / n * 100;

        cout << "Lançamentos: " << n
             << " | Ocorrências de 6 e 6: " << contagem_6_6
             << " | Frequência: " << frequencia << "%" << endl;
    }

    return 0;
}