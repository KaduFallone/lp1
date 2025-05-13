#include<iostream>
using namespace std;

int main(){
    int idade=0, media_idade_excel, quant_regular=0, porcent_bom=0;
    char nota;
    for(int i=1; i<=20; i++){
        cout << "Qual a sua idade: \n";
        cin >> idade;
        cout << "Qual a sua nota(R ou r[regular], B ou b[bom], E ou e[excelente]): \n";
        cin >> nota;


        if(nota == 'R' && nota == 'r') quant_regular = quant_regular+1;
        if(nota == 'B' && nota =='b' ) porcent_bom = porcent_bom+1;
    }

    porcent_bom = 

    cout << "Quantidade de regulares: " << quant_regular << endl;
    cout << "Porcentagem de notas 'bom': ";



    return 0;
}