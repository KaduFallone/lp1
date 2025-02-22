#include<iostream>


int main(){
	using namespace std;
	setlocale(LC_ALL, "Portuguese");
	int num1;
	
	cout << "escolha um número\n";
	cin >> num1;
	cout << endl;
	
	if (num1 % 3 == 0){
		cout <<"seu nùmero é divisivel por 3\n";
	}
	
	else {
		cout << "seu número não é divisivel por 3";
	}
	
	return 0
}
