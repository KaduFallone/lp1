#include<iostream>
using namespace std;

int main(){
	int num1, num2;
	setlocale(LC_ALL, "Portuguese");
	
	cout <<"escolha um n�mero:\n";
	cin >> num1;
	cout << endl;
	
	cout << "escolha outro n�mero\n";
	cin >> num2;
	
	int result = num1+num2;
	if (result > 10 ){
		cout << "seu numero �:" << result;
	}
	else {
		cout<<"seu n�mero e menor que 10";
	}
	
	return 0 ;
}
