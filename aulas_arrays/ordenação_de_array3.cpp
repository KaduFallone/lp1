#include<iostream>
using namespace std;

int main(){
    int indice = 0;
    float ValorMercadoria[5];
    string mercadoria[5];
    int estoque[5];
    int resposta = 0;

    while(resposta < 3 || indice < 5){
         cout << "Dseja cadastrar produtos ou ver o valor total de mercadorias, ou sair(Cadastrar = 1/valor = 2/sair =3):" << endl;
        cin >> resposta;
        if (resposta == 1){
            //cadastrar
            cout << "Nome do produto: " << endl;
            cin >> mercadoria[indice];
            cout << "Valor da mercadoria: " << endl;
            cin >> ValorMercadoria[indice];
            cout << "Qauntidade em estoque: " << endl;
            cin >> estoque[indice];
            indice ++;
        }
        else if ( resposta == 2){
            //exibir valor total
            float soma = 0;
            for(int i = 0; i < 5; i ++){
                soma += (ValorMercadoria[i]*estoque[i]);
            }
            cout << "Valor total dos produtos: " << endl;
            cout << soma;
        }

    }


    return 0;

}