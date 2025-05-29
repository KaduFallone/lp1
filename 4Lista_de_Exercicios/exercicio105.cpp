#include<iostream>
using namespace std;

int main(){
    int preco_compra[10];
    int preco_venda[10];
    int lucro[10];
    int lucro_menor = 0;
    int lucro_medio = 0;
    int lucro_maior = 0;
    for(int i = 0; i <10 ; i++){
        cout << "De o preço de compra do prudto: " << endl;
        cin >> preco_compra[i];

        cout << "De o preço que voce ira vender o produto: " << endl;
        cin >> preco_venda[i];
        cout << endl;

        lucro[i] = (preco_compra[i] - preco_venda[i] * 100) / preco_compra[i];

        if(lucro[i] < 10 )lucro_menor++;
        if(lucro[i] >=10 || lucro[i] > 20)lucro_medio++;
        if(lucro[i] > 20)lucro_maior++;
    }

    cout << "Produtos de lucro menor que 10%: " << lucro_menor << endl;
    cout << "Produtos de lucro entre 10 e 20%: " << lucro_medio << endl;
    cout << "Produtos de lucro maior que 20%: " << lucro_maior << endl;

}