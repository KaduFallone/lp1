#include<iostream>
using namespace std;

int main(){
	int num1, num2;
	setlocale(LC_ALL, "Portuguese");
	
	cout <<"escolha um n�mero\n";
	cin >> num1 ;
	cout << endl; 
	
	cout << "escolha outro n�mero\n";
	cin >> num2;
	cout << endl;
	
	int result = num1+num2;
	if (result > 20){
		cout << "seu numero final �:\n" << result+8;
			
	}
	else { 
	cout <<"seu resultado final �:\n" << result-5;
	}

	return 0;
	
}
