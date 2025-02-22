#include<iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	float sv=0, vp=0;
	 
	 cout <<"valor bruto de seu salário:\n";
	 cin >> sv;
	 cout << endl;
	 
	 cout << "valor da prestação:\n";
	 cin >> vp;
	 cout << endl;
	 
	 
	 if (vp > sv*30/100){
	 	cout <<"Pedido de empréstimo NEGADO!!/n";
	 }
	  else { 
	  	cout <<"pedido de empréstimo ACEITO!!\n";
	  }
	 
	 
	 
	return 0;
}

