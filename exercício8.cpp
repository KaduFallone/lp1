#include<iostream>
using namespace std;

int main(){
	int num1, num2;
	setlocale(LC_ALL, "Portuguese");
	
	cout <<"escolha um número:\n";
	cin >> num1;
	cout << endl;
	
	cout << "escolha outro número\n";
	cin >> num2;
	
	int result = num1+num2;
	if (result > 10 ){
		cout << "seu numero é:" << result;
	}
	else {
		cout<<"seu número e menor que 10";
	}
	
	return 0 ;
}
