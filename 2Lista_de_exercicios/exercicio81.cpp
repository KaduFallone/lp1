#include<iostream>
using namespace std;

int main(){
    double pontos1, pontos2, pontos3;
    double maior, meio, menor;
    double soma, media;
    
    // Leitura dos pontos de cada jogador
    cout << "Digite os pontos do primeiro jogador: ";
    cin >> pontos1;
    
    cout << "Digite os pontos do segundo jogador: ";
    cin >> pontos2;
    
    cout << "Digite os pontos do terceiro jogador: ";
    cin >> pontos3;
    
    //maior
    maior = pontos1;
    if (pontos2 > maior) maior = pontos2;
    if (pontos3 > maior) maior = pontos3;
    
    //menor 
    menor = pontos1;
    if (pontos2 < menor) menor = pontos2;
    if (pontos3 < menor) menor = pontos3;
    
    //meio
    if (pontos1 != maior && pontos1 != menor) meio = pontos1;
    else if (pontos2 != maior && pontos2 != menor) meio = pontos2;
    else meio = pontos3;
    
    // Mostrando os valores em ordem decrescente
    cout << "Pontos em ordem decrescente: " << maior << ", " << meio << ", " << menor << endl;
    
    // Calculando a soma e verificando a classificação
    soma = pontos1 + pontos2 + pontos3;
    
    if (soma > 100) {
        media = soma / 3;
        cout << "Equipe classificada!" << endl;
        cout << "Média aritmética dos pontos: " << media << endl;
    } else {
        cout << "Equipe desclassificada" << endl;
    }
    
    return 0;
}