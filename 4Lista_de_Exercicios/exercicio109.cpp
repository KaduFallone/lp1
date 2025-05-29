#include<iostream>
#include<vector>

using namespace std;

int main(){
    int tam = 3;
    int numeros[tam];
    int maior = 0, menor = 0, pares = 0, media = 0, soma = 0;

    for(int i = 0; i < tam; i ++){
        cout << "DECLARE "<<tam<<" NUMEROS: " << endl;
        cin >> numeros[i];
        soma += numeros[i];

        if(i==0 ){
            maior = menor = numeros[i];
        }
        else{
            if(maior < numeros[i])maior = numeros[i];
            if(menor > numeros[i])menor = numeros[i];
        }
        if(numeros[i] % 2 == 0) pares++;
    }

    float PorcentagemPares = (pares/(float)tam)*100;
    media = soma/tam;

    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor << endl;
    cout << "Porcentagem de numeros pares: " << PorcentagemPares << endl;
    cout << "Media dos numeros digitados: " << media << endl;

    return 0;
    
}