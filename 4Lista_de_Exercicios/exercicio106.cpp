#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int size=2;
    int code[size];
    string name[size];
    int quantidade[size];
    double valor_compra[size];
    double valor_venda[size];

    //Pegar os dados
    for(int i = 0; i < size; i++){
        cout << "De o nome do produto " << i+1 << " : " << endl;
        getline(cin, name[i]);
        cout << "De o codigo do produto(somente numeros): " << endl;
        cin >> code[i];
        cout << "De a quantidade do produto: " << endl;
        cin >> quantidade[i];
        cout << "De o valor de compra do produto: " << endl;
        cin >> valor_compra[i];
        cout << "De o valor o qual voce vendera o produto: " << endl;
        cin >> valor_venda[i];
        cout << endl;
        cin.ignore();
    }

    //exibir todos
    cout << "Listagem dos produtos: " << endl;
    cout << "codigo\t nome\t quantidade\t valor de compra\t valor venda\t" << endl;
    for(int i=0; i<size; i++){
        cout << code[i] << "\t" << name[i] << "\t" << quantidade[i] << "\t" << valor_compra[i] << "\t" << valor_venda[i] << endl << endl;
    }
    cout << endl;

    //exibir todos 
   int CodigoDigitado;
   cout << "Digite o codigo do produto: " << endl;
   cin >> CodigoDigitado;

   int index =-1;
   for(int i=0; i<size; i++){
        if(CodigoDigitado == code[i]){
            index =i;
            break;
        }
   }

   if(index > -1){
    cout << "codigo\t nome\t quantidade\t valor de compra\t valor venda\t" << endl;
    cout << code[index] << "\t" << name[index] << "\t" << quantidade[index] << "\t" << valor_compra[index] << "\t" << valor_venda[index] << endl << endl;
   }
   else cout << "Codigo não encontrado" << endl;
    
   return 0;     
    



}