#include<iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	float sv=0, vp=0;
	 
	 cout <<"valor bruto de seu sal�rio:\n";
	 cin >> sv;
	 cout << endl;
	 
	 cout << "valor da presta��o:\n";
	 cin >> vp;
	 cout << endl;
	 
	 
	 if (vp > sv*30/100){
	 	cout <<"Pedido de empr�stimo NEGADO!!/n";
	 }
	  else { 
	  	cout <<"pedido de empr�stimo ACEITO!!\n";
	  }
	 
	 
	 
	return 0;
}

